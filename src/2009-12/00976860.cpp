// from server: 78% by atomic.potato
typedef unsigned long DWORD;

struct T_func_006e8210
{
    void func(DWORD, DWORD, DWORD, DWORD, DWORD);
};

extern T_func_006e8210 G_func_006e8210;

extern "C" void __cdecl func_007f4929(DWORD);

void func_00976860()
{
    G_func_006e8210.func(0x124, 0, 0x9db384, 0x9db38c, 1);
    func_007f4929(0x986a90);
}
