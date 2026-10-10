// from server: 57% by atomic.potato
struct S
{
    int f(S* object, float scale);
};

extern "C" void __stdcall sub_004B63E0(S* object, float value);

int S::f(S* object, float scale)
{
    *(double*)((char*)this + 0x40) = 0.0;
    sub_004B63E0(object, *(float*)((char*)object + 0xcc) * scale);
    return 0;
}
