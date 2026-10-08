// from server: 100% by colin
// roc 2007-08 00709ba0  unit: CXTColorHex  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00709ba0
//
// 00709ba0  c7416800000000       mov dword ptr [ecx + 0x68], 0
// 00709ba7  e89266f2ff           call 0x63023e
// 00709bac  c20c00               ret 0xc

struct CXTColorHex
{
    char pad[0x68];
    int field_68;
    void sub_00709ba0(int, int, int);
};

extern void G1_func_0063023e();

void CXTColorHex::sub_00709ba0(int a, int b, int c)
{
    field_68 = 0;
    G1_func_0063023e();
}
