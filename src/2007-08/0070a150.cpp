// from server: 100% by colin
// roc 2007-08 0070a150  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070a150
//
// 0070a150  56                   push esi
// 0070a151  8bf1                 mov esi, ecx
// 0070a153  837e6800             cmp dword ptr [esi + 0x68], 0
// 0070a157  7411                 je 0x70a16a
// 0070a159  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070a15d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070a161  50                   push eax
// 0070a162  51                   push ecx
// 0070a163  8bce                 mov ecx, esi
// 0070a165  e8e6fdffff           call 0x709f50
// 0070a16a  8bce                 mov ecx, esi
// 0070a16c  e8cd60f2ff           call 0x63023e
// 0070a171  5e                   pop esi
// 0070a172  c20c00               ret 0xc

struct CXTColorHex_PAUHEXCOLOR_CELL_CList {
    char pad0[0x68];
    int m_flag;
    void sub_709f50(int, int);
    void sub_63023e();
    void f(int, int, int);
};

void CXTColorHex_PAUHEXCOLOR_CELL_CList::f(int a1, int a2, int a3)
{
    if (m_flag != 0) {
        sub_709f50(a2, a3);
    }
    sub_63023e();
}
