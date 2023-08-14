template<typename T_vector, typename T_vector_vector>
T_vector kahn(int n, T_vector_vector &edges){
    vector<int> ordering, indegree(n, 0);
    vector<vector<int> > g(n);
    for (auto e : edges) {
      --e[0], --e[1];
      indegree[e[1]]++;
      g[e[0]].push_back(e[1]);
    }
    queue<int> q;
    for (int i = 0; i < n; i++) {
      if (indegree[i] == 0) {
      q.push(i);
      }
    }
    int visited = 0;
    while (!q.empty()) {
      int u = q.front(); q.pop();
      ordering.push_back(u);
      visited++;
      for (auto v : g[u]) {
        if (--indegree[v] == 0) q.push(v);
      }
    }
    if (visited != n) return T_vector{};
    reverse(ordering.begin(), ordering.end());
    return ordering;
}
