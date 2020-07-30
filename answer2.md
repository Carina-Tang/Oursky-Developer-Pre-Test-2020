class Node{
  declare key, value
  declare Node pre, next
  declare last access time
  
  constructor here
  
  function calculate score (weight, current time){
    if current time != last access time{
      return weight / ln(current_time - last_access_time)
     } else {
      return weight / -100
     }
  }
}

class cache{
  declare hash map to store the key and the value of node
  declare size of cache, counter
  declare Node head, tail
  
  constructor{
    size of cache
    create a hashmap object
    set head and tail to node(0,0)
    next of head = tail
    previous of tail = head
    previous of head and next of tail is null
    initialize counter
  }
  
  function delete node(node){ }
  
  function add node to head(node){ }
  
  function get(key) {   //big-O notation.: O(1)
    declare current time
    if the map.get(key) is not empty{
      set node to map.get(key)
      store the value of node as result
      delete node
      add node to head
      update last access time
      return result
    } else {
      return -1
    }
  }
  
  function set(key, value, weight){   //big-O notation.: O(n), where n = size of cache
    if the map.get(key) is not null{
      set node to map.get(key)
      update value to node
      update last access time
      delete node
      add node to head      
    } else {
      create new node with key and value
      put it in map
      if counter < size of cache{
        count++
        add node to head
      } else {
        initialize score
        declare node to delete
        for each node in the map{
          if calculate score < score {
            update score
            update node to delete
          }
        }
        delete node (node to delete)
        add node to tail
      }
    }
  }
}
