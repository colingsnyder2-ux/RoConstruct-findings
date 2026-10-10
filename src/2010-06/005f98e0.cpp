// from server: 55% by atomic.potato
extern "C" void __fastcall sub_556100(float*, int);

struct Tool
{
    void f(int);
};

void Tool::f(int value)
{
    sub_556100((float*)this + 0x16c / sizeof(float), value);
}
