// from server: 40% by colin
struct S_func_00466620 {
    int f(char *a1);
};

extern "C" unsigned long __stdcall GetModuleFileNameA(void *hModule, char *lpFilename, unsigned long nSize);
extern "C" void __stdcall func_77ddb8(void *a1);
extern "C" void __stdcall func_77ddbc(void *a1);

int S_func_00466620::f(char *a1)
{
    char buf[500];
    int local8;
    int local12;
    int result;

    GetModuleFileNameA(0, buf, 500);
    func_77ddb8(&local12);
    local8 = 0;
    result = ((int (__thiscall *)(S_func_00466620 *, int *))0x466350)(this, &local8);
    func_77ddbc(&local8);
    return result;
}
