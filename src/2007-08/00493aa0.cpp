// from server: 47% by colin
struct S {
    char pad0[0x24];
    char pad1[0x24];
    S(const S&);
};

extern "C" void __stdcall sub_4938A0(void*, const void*);
extern "C" void* __stdcall sub_77E69C(void*, const void*);

S::S(const S& other)
{
    *(int*)this = *(int*)&other;
    *(int*)((char*)this + 4) = *(int*)((char*)&other + 4);
    sub_77E69C((char*)this + 8, (char*)&other + 8);
    sub_4938A0((char*)this + 0x24, (char*)&other + 0x24);
}
