// from server: 79% by king_originala
void multiply(const float* a, const float* b, float* result)
{
    a += 1;
    result += 2;
    int count = 3;
    do
    {
        result[-2] = (a[1] * a[0] + b[2] * b[1]) +
                     a[-1] * b[0];
        result[-1] = (b[4] * a[0] + b[5] * a[1]) +
                     b[3] * a[-1];
        result[0] = (a[-1] * b[6] + b[7] * a[0]) +
                    a[1] * b[8];

        a += 3;
        result += 3;
        --count;
    } while (count);
}
