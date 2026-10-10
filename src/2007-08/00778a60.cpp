// from server: 80% by colin
extern "C" void __cdecl func_00725520(int, int);
extern "C" int __cdecl func_004a5970();
extern "C" void __cdecl func_00407410(int*);
extern "C" void __cdecl func_00407220();

void func_00778a60()
{
    int local;
    *(int*)0x892aac = 0x79d890;
    func_00725520(0x4a7180, 0x8be96c);
    local = func_004a5970();
    func_00407410(&local);
    func_00407220();
}
