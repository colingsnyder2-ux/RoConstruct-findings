// from server: 45% by atomic.potato
struct S
{
};

float g_009b1610[4] = { 0.0f, 0.0f, 0.0f, 0.0f };

void __cdecl f(float *a, float *b)
{
    float x = b[2];
    a[1] = b[0];
    a[2] = b[1] * g_009b1610[0];
    a[0] = x;
}
