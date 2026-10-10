// from server: 41% by atomic.potato
struct Tool
{
    char pad[0x16c];
    void f();
};

extern "C" void __stdcall sub_556100(float*, int);

void Tool::f()
{
    float* result;
    sub_556100(result, 1);
}
