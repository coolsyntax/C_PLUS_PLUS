#include <bits/stdc++.h>

// rectangle

void rectangle()
{
    int rows = 0, cols = 0;
    std::cout << "Enter no. of rows\n";
    std::cin >> rows;
    std::cout << "\n";
    std::cout << "Enter no. of cols\n";
    std::cin >> cols;
    std::cout << "\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            std::cout << "  *   ";
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

/*
just for fun "if the pattern remain fixed  at all times"

void rectangle()
{
    for (int i = 1; i <= 4; i++)
    {
        std::cout << "  *   *   *   *\n";
    }
    std::cout << "=======================================\n";
}

*/

// Hollow rectangle

void hollow_rectangle()
{
    int rows = 0, cols = 0;
    std::cout << "Enter no. of rows\n";
    std::cin >> rows;
    std::cout << "\n";
    std::cout << "Enter no. of cols\n";
    std::cin >> cols;
    std::cout << "\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                std::cout << "  *   ";
            }
            else
            {
                std::cout << "      ";
            }
        }

        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Inverted Half pyramid

void inverted_half_pyramid()
{
    int size_of_pyramid = 0;
    std::cout << "Enter size of pyramid\n";
    std::cin >> size_of_pyramid;
    std::cout << "\n";
    for (int i = size_of_pyramid; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  *   ";
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Half pyramid 180 degree rotation

void half_pyramid_180_rotation()
{
    int size_of_pyramid = 0;
    std::cout << "Enter size of pyramid\n";
    std::cin >> size_of_pyramid;
    std::cout << "\n";
    for (int i = 1; i <= size_of_pyramid; i++)
    {
        for (int j = 1; j <= size_of_pyramid; j++)
        {
            if (j <= size_of_pyramid - i)
            {
                std::cout << "      ";
            }
            else
            {
                std::cout << "  *   ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Half pyramid using numbers

void half_pyramid_using_numbers()
{
    int size_of_pyramid = 0;
    std::cout << "Enter size of pyramid\n";
    std::cin >> size_of_pyramid;
    std::cout << "\n";
    for (int i = 1; i <= size_of_pyramid; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  " << i << "   ";
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Floyd's triangle

void floyds_triangle()
{
    int size_of_pyramid = 0, k = 0;
    std::cout << "Enter size of pyramid\n";
    std::cin >> size_of_pyramid;
    std::cout << "\n";
    for (int i = 1; i <= size_of_pyramid; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  " << k << "   ";
            k++;
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Butterfly pattern

void butterfly_pattern()
{
    int size_of_butterfly = 0;
    std::cout << "Enter size of butterfly\n";
    std::cin >> size_of_butterfly;
    std::cout << "\n";
    for (int i = 1; i <= size_of_butterfly; i++)
    {
        for (int j = 1; j <= size_of_butterfly * 2; j++)
        {
            if (j > i && j < ((size_of_butterfly * 2) - (i - 1)))
            {
                std::cout << "      ";
            }
            else
            {
                std::cout << "  *   ";
            }
        }
        std::cout << "\n";
    }
    for (int i = size_of_butterfly; i > 0; i--)
    {
        for (int j = 1; j <= size_of_butterfly * 2; j++)
        {
            if (j > i && j < ((size_of_butterfly * 2) - (i - 1)))
            {
                std::cout << "      ";
            }
            else
            {
                std::cout << "  *   ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Butterfly pattern alternate method

void butterfly_pattern_alternate_method()
{
    int size_of_butterfly = 0;
    std::cout << "Enter size of butterfly\n";
    std::cin >> size_of_butterfly;
    std::cout << "\n";
    for (int i = 1; i <= size_of_butterfly; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  *   ";
        }
        int spaces = (size_of_butterfly * 2) - (i * 2);
        for (int j = 1; j <= spaces; j++)
        {
            std::cout << "      ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  *   ";
        }
        std::cout << "\n";
    }
    for (int i = size_of_butterfly; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  *   ";
        }
        int spaces = (size_of_butterfly * 2) - (i * 2);
        for (int j = 1; j <= spaces; j++)
        {
            std::cout << "      ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  *   ";
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Inverted pattern

void inverted_pattern()
{
    int size_of_pyramid = 0;
    std::cout << "Enter size of pyramid\n";
    std::cin >> size_of_pyramid;
    std::cout << "\n";
    for (int i = size_of_pyramid; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  " << j << "   ";
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// 0-1 pattern

void pattern_0_1()
{
    int size_of_pyramid = 0, k = 0;
    std::cout << "Enter size of pyramid\n";
    std::cin >> size_of_pyramid;
    std::cout << "\n";
    for (int i = 1; i <= size_of_pyramid; i++)
    {
        i % 2 == 0 ? k = 0 : k = 1; // since even rows start with 0 and odd rows start with 1
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  " << k << "   ";
            k == 0 ? k++ : k--; // to alternate value of k
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// alternate 0-1 pattern

void alternate_pattern_0_1()
{
    int size_of_pyramid = 0, k = 0;
    std::cout << "Enter size of pyramid\n";
    std::cin >> size_of_pyramid;
    std::cout << "\n";
    for (int i = 1; i <= size_of_pyramid; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            //(i+j) % 2 == 0 ? std::cout << "  1   " : std::cout << "  0   ";
            if ((i + j) % 2 == 0) // when i+j is even we print 1 else 0
            {
                std::cout << "  1   ";
            }
            else
            {
                std::cout << "  0   ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Rhombus pattern

void rhombus_pattern()
{
    int rows = 0, cols = 0, k = 0;
    std::cout << "Enter no. of rows\n";
    std::cin >> rows;
    std::cout << "\n";
    std::cout << "Enter no. of cols\n";
    std::cin >> cols;
    std::cout << "\n";
    k = rows - 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols + k; j++)
        {
            if (j <= k)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << "  *   ";
            }
        }
        k--;
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// alternative rhombus_pattern

void alternative_rhombus_pattern()
{
    int rows = 0, cols = 0;
    std::cout << "Enter no. of rows\n";
    std::cin >> rows;
    std::cout << "\n";
    std::cout << "Enter no. of cols\n";
    std::cin >> cols;
    std::cout << "\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= cols; j++)
        {
            std::cout << "  *   ";
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// pyramid number pattern

void pyramid_number_pattern()
{
    int rows = 0;
    std::cout << "Enter size of pyramid\n";
    std::cin >> rows;
    std::cout << "\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "  " << j << "  ";
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// palindromic pattern

void palindromic_pattern()
{
    int rows = 0;
    std::cout << "Enter size of pyramid\n";
    std::cin >> rows;
    std::cout << "\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            std::cout << "   ";
        }
        for (int j = i; j >= 1; j--)
        {
            std::cout << "  " << j ;
        }
        for (int j = 2; j <= i; j++)
        {
            std::cout << "  " << j ;
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Star pattern

void star_pattern()
{
    int rows = 0;
    std::cout << "Enter size of star\n";
    std::cin >> rows;
    std::cout << "\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            std::cout << "   ";
        }
        for (int j = 1; j <= i*2-1; j++)
        {
            std::cout << "  *" ;
        }
        std::cout << "\n";
    }
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            std::cout << "   ";
        }
        for (int j = 1; j <= i*2-1; j++)
        {
            std::cout << "  *" ;
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

// Zig Zag Pattern

void zig_zag_pattern()
{
    // rows are fixed i.e. 3
    int rows = 3, number_of_stars = 0;
    std::cout << "Enter size of zig zag\n";
    std::cin >> number_of_stars;
    std::cout << "\n";
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= number_of_stars; j++)
        {
            if (((i+j)%4 == 0) || (i == 2 && j % 4 == 0))
            {
                std::cout << "  *" ;
            }
            else
            {
                std::cout << "   ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "=======================================\n";
}

int main()
{
    // rectangle();
    // hollow_rectangle();
    // inverted_half_pyramid();
    // half_pyramid_180_rotation();
    // half_pyramid_using_numbers();
    // floyds_triangle();
    // butterfly_pattern();
    // butterfly_pattern_alternate_method();
    // inverted_pattern();
    // pattern_0_1();
    // alternate_pattern_0_1();
    // rhombus_pattern();
    // alternative_rhombus_pattern();
    // pyramid_number_pattern();
    // palindromic_pattern();
    // star_pattern();
    // zig_zag_pattern();
}