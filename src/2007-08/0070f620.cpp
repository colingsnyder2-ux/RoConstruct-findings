// from server: 43% by colin
struct S_func_0070f620 {
    int f(int a1);
};

extern "C" int __stdcall EnumResourceNamesA(int, int, int, int);
extern "C" int __stdcall FindResourceA(int, int, int);

int S_func_0070f620::f(int a1)
{
    int local;
    int result;
    int hRes;
    int hMod;

    local = 0;
    hMod = a1;
    hRes = FindResourceA(hMod, 0x7de4fc, 0x70f600);
    if (hRes != 0) {
        return 0;
    }
    result = EnumResourceNamesA(hMod, 0x7de4fc, 0x70f600, (int)&local);
    return result;
}
