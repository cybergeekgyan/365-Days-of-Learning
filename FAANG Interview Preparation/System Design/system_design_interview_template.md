# My System Design Interview Template

### (1) FEATURE EXPECTATIONS [5 min]
   - Use cases
   - Scenarios that will not be covered
   - Who will use
   - How many will use
   - Usage patterns
### (2) ESTIMATIONS [5 min]
   - Throughput (QPS for read and write queries)
   - Latency expected from the system (for read and write queries)
   - Read/Write ratio
   - Traffic estimates
        - Write (QPS, Volume of data)
        - Read  (QPS, Volume of data)
   - Storage estimates
   - Memory estimates
        - If we are using a cache, what is the kind of data we want to store in cache
        - How much RAM and how many machines do we need for us to achieve this?
        - Amount of data you want to store in disk/SSD
### (3) DESIGN GOALS [5 min]
  - Latency and Throughput requirements
  - Consistency vs Availability  [Weak/strong/eventual => consistency | Failover/replication => availability]
### (4) HIGH LEVEL DESIGN [5-10 min]
  - APIs for Read/Write scenarios for crucial components
  - Database schema
  - Basic algorithm
  - High-level design for Read/Write scenario
### (5) DEEP DIVE [15-20 min]
  - Scaling the algorithm
  - Scaling individual components: 
    - Availability, Consistency and Scale story for each component
    - Consistency and availability patterns
  (3) Think about the following components, how they would fit in, and how they would help
    - DNS
    - CDN [Push vs Pull]
    - Load Balancers [Active-Passive, Active-Active, Layer 4, Layer 7]
    - Reverse Proxy
    - Application layer scaling [Microservices, Service Discovery]
    - DataBase [RDBMS, NoSQL]
      - RDBMS 
         - Master-slave, Master-master, Federation, Sharding, Denormalization, SQL Tuning
      - NoSQL
          - Key-Value, Wide-Column, Graph, Document
             - Fast-lookups:
                - RAM [Bounded size] => Redis, Memcached
                - AP [Unbounded size] => Cassandra, RIAK, Voldemort
                - CP [Unbounded size] => HBase, MongoDB, Couchbase, DynamoDB
    - Caches
        - Client caching, CDN caching, Webserver caching, Database caching, Application caching, Cache @Query level, Cache @Object level
        - Eviction policies:
            - Cache aside
            - Write Through
            - Write behind
            - Refresh ahead
    - Asynchronism
            - Message queues
            - Task queues
            - Back pressure
    - Communication
            - TCP
            - UDP
            - REST
            - RPC
### (6) JUSTIFY [5 min]
- Throughput of each layer
- Latency caused between each layer
- Overall latency justification
