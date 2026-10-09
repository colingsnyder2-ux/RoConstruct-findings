// from server: 74% by colin
// roc 2007-08 0040c020  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040c020
//
// 0040c020  56                   push esi
// 0040c021  8b742414             mov esi, dword ptr [esp + 0x14]
// 0040c025  85f6                 test esi, esi
// 0040c027  7509                 jne 0x40c032
// 0040c029  b803400080           mov eax, 0x80004003
// 0040c02e  5e                   pop esi
// 0040c02f  c21000               ret 0x10
// 0040c032  33c0                 xor eax, eax
// 0040c034  3905a81d8800         cmp dword ptr [0x881da8], eax
// 0040c03a  750f                 jne 0x40c04b
// 0040c03c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040c040  50                   push eax
// 0040c041  b99c1d8800           mov ecx, 0x881d9c
// 0040c046  e8a595ffff           call 0x4055f0
// 0040c04b  8b0da81d8800         mov ecx, dword ptr [0x881da8]
// 0040c051  890e                 mov dword ptr [esi], ecx
// 0040c053  8b0da81d8800         mov ecx, dword ptr [0x881da8]
// 0040c059  85c9                 test ecx, ecx
// 0040c05b  740a                 je 0x40c067
// 0040c05d  8b11                 mov edx, dword ptr [ecx]
// 0040c05f  8b4204               mov eax, dword ptr [edx + 4]
// 0040c062  51                   push ecx
// 0040c063  ffd0                 call eax
// 0040c065  33c0                 xor eax, eax
// 0040c067  5e                   pop esi
// 0040c068  c21000               ret 0x10

struct S_func_0040c020 {
    int f(int a, int b, int c, int d);
};

extern "C" int __stdcall sub_004055f0(int);
extern int dword_00881da8;
extern int dword_00881d9c;

int S_func_0040c020::f(int a, int b, int c, int d)
{
    int *p = (int *)d;
    if (p == 0)
        return (int)0x80004003;
    if (dword_00881da8 == 0)
        sub_004055f0(c);
    *p = dword_00881da8;
    int v = dword_00881da8;
    if (v != 0) {
        int (*fn)(int) = *(int (**)(int))v;
        fn(v);
    }
    return 0;
}
