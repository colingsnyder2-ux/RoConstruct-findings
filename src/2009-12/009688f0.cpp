// from server: 26% by atomic.potato
struct S
{
    void func_00442d40(const void*, const void*, int, int, int);
};

extern "C" void __cdecl func_007f4929(const void*);

void S::func_00442d40(const void*, const void*, int, int, int)
{
}

void func_009688f0()
{
    ((S*)0x00b7a50c)->func_00442d40((const void*)0x009aa04c,
                                     (const void*)0x009aa034, 0x96, 0x0f, 0);
    func_007f4929((const void*)0x0097e0e0);
}
