// from server: 30% by colin
struct S_005973a0 {
    char pad0[0x118];
    S_005973a0* ctor(int);
};

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __stdcall sub_005971c0(int);
extern "C" void __stdcall sub_00596e60(int, int, int);

S_005973a0* S_005973a0::ctor(int arg)
{
    S_005973a0* p = (S_005973a0*)malloc(0x118);
    if (p) {
        sub_005971c0(arg);
    } else {
        p = 0;
    }
    sub_00596e60((int)this, (int)p, arg);
    return this;
}
