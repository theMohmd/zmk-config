#pragma once

// Example 4 rows x 12 columns matrix positions (adjust to your matrix)
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

// Key positions (row, column) mapping to key number/index
// Flattened as: key number = row * MATRIX_COLS + col

// Left side keys (example)
#define LT0  RC_TO_INDEX(0, 4)
#define LT1  RC_TO_INDEX(0, 3)
#define LT2  RC_TO_INDEX(0, 2)
#define LT3  RC_TO_INDEX(0, 1)
#define LT4  RC_TO_INDEX(0, 0)

#define LM0  RC_TO_INDEX(1, 4)
#define LM1  RC_TO_INDEX(1, 3)
#define LM2  RC_TO_INDEX(1, 2)
#define LM3  RC_TO_INDEX(1, 1)
#define LM4  RC_TO_INDEX(1, 0)

#define LB0  RC_TO_INDEX(2, 4)
#define LB1  RC_TO_INDEX(2, 3)
#define LB2  RC_TO_INDEX(2, 2)
#define LB3  RC_TO_INDEX(2, 1)
#define LB4  RC_TO_INDEX(2, 0)

#define LH0  RC_TO_INDEX(3, 1)
#define LH1  RC_TO_INDEX(3, 0)

// Right side keys (example)
#define RT0  RC_TO_INDEX(0, 5)
#define RT1  RC_TO_INDEX(0, 6)
#define RT2  RC_TO_INDEX(0, 7)
#define RT3  RC_TO_INDEX(0, 8)
#define RT4  RC_TO_INDEX(0, 9)

#define RM0  RC_TO_INDEX(1, 5)
#define RM1  RC_TO_INDEX(1, 6)
#define RM2  RC_TO_INDEX(1, 7)
#define RM3  RC_TO_INDEX(1, 8)
#define RM4  RC_TO_INDEX(1, 9)

#define RB0  RC_TO_INDEX(2, 5)
#define RB1  RC_TO_INDEX(2, 6)
#define RB2  RC_TO_INDEX(2, 7)
#define RB3  RC_TO_INDEX(2, 8)
#define RB4  RC_TO_INDEX(2, 9)

#define RH0  RC_TO_INDEX(3, 10)
#define RH1  RC_TO_INDEX(3, 11)

// Helper macro to convert row and column to index
#define RC_TO_INDEX(row, col) ((row) * MATRIX_COLS + (col))
