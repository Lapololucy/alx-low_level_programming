In computing, a hash table (hash map) is a data structure that implements an
associative array abstract data type, a structure that can map keys to values.
A hash table uses a hash function to compute an index, also called a hash code,
 into an array of buckets or slots, from which the desired value can be found.

-If hashed index is empty, insert element into index
-Else start a collision occurrence counter from 1
-Then add occurrence squared to current index to find the new index
-Take the modulus with array size to avoid array out of bounds
-Increment occurrence counter
-Then recheck while loop’s condition of whether the index is occupied
-Repeat this process until element finds a slot
