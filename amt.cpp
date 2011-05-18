// Store all the levels in separate tables

/* Level 1 - 0000100001 | 0

   Level 2 - 0000101100 | 2
             0110000000 | 0

   Level 3 - 0000100010 | 7
             0000100010 | 5
             0000100010 | 3
             0000100000 | 2
             0000101010 | 0
*/

/* Insertion

   Each time a bit is written, update the count of bits in the bit count field of all the bit arrays above
   that bit array in that table
*/

/* Reading

   1. Read all the data in one go. Separate the first byte array which is of fixed size.
   2. Obtain the bit count in that bit array and read the next byte array table accordingly and so on.
*/

/* Traversing

   1. Go through the bit array. For each set bit, obtain its index in the bit array and corresponding character.
      One of these character's children will be requested in the next step. Store the indixes of these characters
      in a hash table for fast lookup.
*/

