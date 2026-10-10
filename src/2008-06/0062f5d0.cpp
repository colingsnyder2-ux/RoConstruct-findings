// from server: 78% by atomic.potato
struct S
{
    char pad[8];
    char* data;
    void f(float* out, const char* value);
};

void __thiscall S::f(float* out, const char* value)
{
    int offset;
    if (value)
        offset = -20;
    else
        offset = 0;
    char* p = data + offset;
    out[0] = *(float*)(p + 0);
    out[1] = *(float*)(p + 4);
    out[2] = *(float*)(p + 8);
}
