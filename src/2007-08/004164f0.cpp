// from server: 47% by colin
// roc 2007-08 004164f0  unit: VCLuaFunction::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004164f0
//
// 004164f0  8b0d64318800         mov ecx, dword ptr [0x883164]
// 004164f6  33c0                 xor eax, eax
// 004164f8  85c9                 test ecx, ecx
// 004164fa  7408                 je 0x416504
// 004164fc  39056c318800         cmp dword ptr [0x88316c], eax
// 00416502  7515                 jne 0x416519
// 00416504  8b442410             mov eax, dword ptr [esp + 0x10]
// 00416508  50                   push eax
// 00416509  b958318800           mov ecx, 0x883158
// 0041650e  e8ddf0feff           call 0x4055f0
// 00416513  8b0d64318800         mov ecx, dword ptr [0x883164]
// 00416519  85c9                 test ecx, ecx
// 0041651b  742b                 je 0x416548
// 0041651d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00416521  8b11                 mov edx, dword ptr [ecx]
// 00416523  50                   push eax
// 00416524  8b442424             mov eax, dword ptr [esp + 0x24]
// 00416528  50                   push eax
// 00416529  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041652d  50                   push eax
// 0041652e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00416532  50                   push eax
// 00416533  8b442424             mov eax, dword ptr [esp + 0x24]
// 00416537  50                   push eax
// 00416538  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041653c  50                   push eax
// 0041653d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00416541  50                   push eax
// 00416542  51                   push ecx
// 00416543  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 00416546  ffd1                 call ecx
// 00416548  c22400               ret 0x24

struct VCLuaFunction {
    void invoke(int, int, int, int, int, int, int, int, int);
};

extern int G1;
extern int G2;
extern int G3;

extern void __stdcall sub_4055f0(int);

void VCLuaFunction::invoke(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    if (G1 != 0 && G2 == 0)
    {
        sub_4055f0(a9);
        G1 = G3;
    }
    if (G1 != 0)
    {
        int* p = (int*)G1;
        int (*fn)(int, int, int, int, int, int, int, int, int) = (int (*)(int, int, int, int, int, int, int, int, int))p[11];
        fn(G1, a1, a2, a3, a4, a5, a6, a7, a8);
    }
}
