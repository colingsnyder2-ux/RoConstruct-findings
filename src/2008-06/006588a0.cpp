// from server: 69% by king_originala
void multiply(const float* a, const float* b, float* result)
{
    a += 1;
    result += 2;
    int count = 3;
    do
    {
        a += 3;
        result += 3;
        --count;

        result[-5] = a[-4] * b[0] +
                     (a[-3] * b[1] + a[-2] * b[2]);
        result[-4] = b[3] * a[-4] +
                     (b[4] * a[-3] + b[5] * a[-2]);
        result[-3] = (a[-4] * b[6] + b[7] * a[-3]) +
                     a[-2] * b[8];
    } while (count);
}
