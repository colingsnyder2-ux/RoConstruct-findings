// from server: 80% by colin
extern "C" void __cdecl func_00725520(int, int);
extern "C" int __cdecl func_004a58f0();
extern "C" void __cdecl func_00407410(int*);
extern "C" void __cdecl func_00407220();

int g_892aa8;
int g_79d874;

void func_00778aa0()
{
    int local;
    g_892aa8 = 0x79d874;
    func_00725520(0x4a7170, 0x8be968);
    local = func_004a58f0();
    func_00407410(&local);
    func_00407220();
}
