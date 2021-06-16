# Hashlib

A hash-table library, which gives better optimization but not that particular fast.
    Working on it to make it run fast.....

# Build

   it is built using bazel mechanism
   
     bazel build //src/lib:slowhash

# Tests

   unit tests run also using bazel
    
      bazel test --test_output=all tests
