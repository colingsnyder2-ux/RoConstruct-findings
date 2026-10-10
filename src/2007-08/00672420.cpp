// from server: 94% by colin
struct CXTPControlButtonColor
{
    void func_0066c360(int);
    void func_00672420(int);
};

extern void __stdcall func_00685720(int, const char*, void*, int);

void CXTPControlButtonColor::func_00672420(int a)
{
    func_0066c360(a);
    if ((unsigned int)*(int*)(a + 0x28) > 0x15)
    {
        func_00685720(a, (const char*)0x78ace0, (char*)this + 0x168, -1);
    }
}
