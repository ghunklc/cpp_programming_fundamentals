/* Practice:
*  You're developing a resource management system and need to understand
*  how much memory different data types consume to optimize your
*  program's efficiency.
*/

#include <iostream>
#include <climits> // For INT_MAX constant

int main(){

    // Declare variables of different data types
    int playLevel = 26;
    float itemPrice = 19.99f;
    double precisionCalculation = 3.1459265359;
    char playRank = 'A';
    bool gameActive = true;
    short line = 5;
    long long kocamanSayi = 123456789012345;

    // Display the memory usage of each data type
    std::cout << "Memory Usage Analyesis: " << std::endl;
    std::cout << "int uses   : " << sizeof(int) << " bytes" << std::endl;
    std::cout << "float uses : " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double uses: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "char uses  : " << sizeof(char) << " bytes" << std::endl;
    std::cout << "bool uses  : " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "short uses : " << sizeof(short) << " bytes" << std::endl;
    std::cout << "long uses  : " << sizeof(long) << " bytes" << std::endl;

    /* Choose 'short' over 'int' for memory efficiency only 
    *  when storing massive arrays or large data structures
    *  where reducing the memory footprint and improving 
    *  cache density outweigh the CPU processing overhead.
    *
    *  Memory Usage, Range, and Precision
    *  short: Typically uses 2 bytes (16 bits) of memory. 
    *  Its signed range is from -32,768 to 32,767, and its 
    *  unsigned range is 0 to 65,535.
    *
    *  int: Typically uses 4 bytes (32 bits) of memory. Its 
    *  signed range is from -2,147,483,648 to 2,147,483,647,
    *  and its unsigned range goes up to roughly 4.29 billion.
    *
    *  Precision Relationship: 
    *  Both types represent exact integer values (whole numbers)
    *  without fractional parts, meaning precision is absolute
    *  (step size of 1) for both; the difference is purely the
    *  boundary limits (the maximum and minimum values they can
    *  hold). A smaller type allocates fewer bits, restricting the
    *  range of numbers it can safely store without overflowing.
    *
    *  When to Choose short over int
    *  Large Arrays or Collections: Storing millions of elements
    *  in an array or list cuts memory usage in half per element
    *  (2 bytes instead of 4 bytes), saving significant RAM and
    *  improving cache locality.
    *
    *  Binary File Formats and Protocols: Reading or writing
    *  specific file specifications or network packets that
    *  explicitly mandate 16-bit integer fields.
    *
    *  Database Mapping: Aligning object properties with database
    *  columns defined as SMALLINT to maintain schema consistency
    *  and save storage space on massive tables.
    *
    *  Hardware Constraints: Working on restricted microcontrollers
    *  or embedded systems where memory is critically scarce.
    *
    *  When to Avoid shortStandard Variables and Counters: For
    *  single standalone variables, local loop counters, or
    *  general logic, int matches the native register size of
    *  modern 32-bit and 64-bit processors, running faster because
    *  the CPU does not need extra instructions to mask or convert
    *  16-bit values.
    */

    return 0;

}