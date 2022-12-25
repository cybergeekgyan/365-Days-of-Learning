# Competitive Programming Resources 

 - [Guide to Competitive Programming]()

# Complexity and Big-O Notation
<img align="right" src="https://user-images.githubusercontent.com/55075129/126883333-3e22bcd2-522b-4f97-b457-1aae0304c565.png"/>

Time and space complexity analysis is an important part of problem solving. All competitive programming problems have a time limit and a memory limit. Even if your solution is logically 'correct', it may not meet these requirements. Thus, it is important to be able to estimate the runtime and memory usage of your algorithm to come up with solutions that pass.

The Big-O notation is used to describe how an algorithm scales with the size of the input. The following are some nice beginner articles on the same:
* [Learning & Understanding Big-O Notation](https://www.topcoder.com/blog/learning-understanding-big-o-notation/)
* [Time and space complexity](https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/tutorial/)
* [Codechef practice problems](https://discuss.codechef.com/t/multiple-choice-questions-related-to-testing-knowledge-about-time-and-space-complexity-of-a-program/17976)

#### Some things to try/note/remember (some might start to make sense at a later point)
* Try to find the time complexity and space complexity as you write code. With practice you will get better at it.
* Constraints can sometimes give away the expected time complexity of the solution.
    * You can assume approximately **10<sup>8</sup>** operations per second to run in time. 
    * You can use approximately **5 * 10<sup>7</sup>** `int`s worth of memory, be it through a single array of that size (say `arr[10000000]`), or multidimensional arrays (say `arr[10000][1000]`). Be wary that `long long` takes more space than `int`.
* STL/inbuilt functions have their [own time complexity](https://users.cs.northwestern.edu/~riesbeck/programming/c++/stl-summary.html) which you will need to factor in while finding complexity. Also, some STL containers require [more memory](https://pasteboard.co/J6ODpDi.jpg), which may lead to an MLE if you're not careful.

# Macros
Anything that starts with a **'#'** is a *preprocessor directive*. A macro is a preprocessor directive which in essence performs a find and replace on code before it is actually compiled. You may read more about it from [here](http://www.cplusplus.com/doc/tutorial/preprocessor/). 

When it comes to cp, macros are quite useful. Here are a few common ones (along with some other useful things).

```c++
#include <bits/stdc++.h>
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define trace(x) cerr << #x << " = " << x << '\n'

using namespace std;
const array dx{1, 0, -1, 0};
const array dy{0, 1, 0, -1};
template<class T> bool chmax(T& A, T&& B) { return B > A? A = B, true : false; }
template<class T> bool chmin(T& A, T&& B) { return B < A? A = B, true : false; }

const int64_t DESPACITO = 2e18;
const int INF = 2e9, MOD = 1e9+7;
const int MxN = 2e5 + 5;

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    // ...
}
```

<details>
    <summary>What I currently use (as of Oct-1-2021)</summary>

```c++
#ifdef W
    #include <k_II.h>
#else
    #include <bits/stdc++.h>
    using namespace std;
#endif

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int i, n;
    cin >> n;
    
} // ~W

```

I like to keep my template clean and simple. All my debugging tools are defined in <a href="https://github.com/the-hyp0cr1t3/CC/blob/master/%E6%9C%AB%20Snippets/k_II.h">k_II.h</a>, a separate header file.

</details>

## A few notes
### FastIO
```c++
ios_base::sync_with_stdio(false); cin.tie(nullptr);
```
The ```std::cin``` and ```std::cout``` streams may sometimes be too slow. Thus when there is large input, it is common practice to disable synchronization with stdio and flushing before every ```cin```. You may refer to [this](https://www.geeksforgeeks.org/fast-io-for-competitive-programming/) for a better understanding on what it does, and how it works.

### endl vs '\n'
Using ```'\n'``` is better (no flushing, so, faster) than using ```std::endl``` (in the context of cp) and [here's](https://www.educative.io/edpresso/what-is-the-difference-between-endl-and-n-in-cpp) why. 

However, remember to use ```std::endl``` in [interactive problems](https://codeforces.com/blog/entry/45307), not ```'\n'``` as it is required to flush the output.

### The size() method and where you can go wrong with it
The ```size()``` method, compatible with most STL containers, returns a value of type ```size_t```, which is an *unsigned int*. When comparisons are made between values of different data types, the compiler (implicitly) typecasts one of them to the other, and when a negative integer of type ```int``` is casted to an ```unsigned int```, the expression may evaluate to a different value altogether. 

```c++
vector<int> vect{1, 2, 3};
for(int i = 0; i < (int)vect.size(); i++)
  // do stuff
```

### Debugging using the power of macros
The *stringizing* operator (*#*) turns source code into text tokens, i.e, it can turn parameters into string literals.

Try this out.
```c++
#include <iostream>
using namespace std;
#define watch(x) cout << #x << " = " << x << endl
int main() {
    int a = 5;
    watch(a);
    return 0;
}
```

[Tips on debugging during contest](https://codeforces.com/blog/entry/80775?#comment-671134)
