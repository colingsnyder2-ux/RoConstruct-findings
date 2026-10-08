// from server: 90% by colin
// roc 2007-08 006923b0  unit: CXTPStatusBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006923b0
//
// 006923b0  56                   push esi
// 006923b1  8bf1                 mov esi, ecx
// 006923b3  e886def9ff           call 0x63023e
// 006923b8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006923bc  898ea8000000         mov dword ptr [esi + 0xa8], ecx
// 006923c2  5e                   pop esi
// 006923c3  c20800               ret 8

struct CXTPStatusBar
{
    void func_006923b0(int, int);
    char pad[0xa8];
    int field_0xa8;
};

extern void G1_func_0063023e();

void CXTPStatusBar::func_006923b0(int a, int b)
{
    G1_func_0063023e();
    field_0xa8 = a;
}
