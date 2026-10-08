// from server: 100% by colin
// roc 2007-08 006723f0  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006723f0
//
// 006723f0  8b442408             mov eax, dword ptr [esp + 8]
// 006723f4  56                   push esi
// 006723f5  57                   push edi
// 006723f6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006723fa  50                   push eax
// 006723fb  57                   push edi
// 006723fc  8bf1                 mov esi, ecx
// 006723fe  e83d810500           call 0x6ca540
// 00672403  8b8f68010000         mov ecx, dword ptr [edi + 0x168]
// 00672409  5f                   pop edi
// 0067240a  898e68010000         mov dword ptr [esi + 0x168], ecx
// 00672410  5e                   pop esi
// 00672411  c20800               ret 8

struct CXTPControlButtonColor {
    char pad[0x168];
    int field_168;
    void sub_6ca540(int, int);
    void sub_6723f0(int, int);
};

void CXTPControlButtonColor::sub_6723f0(int a, int b) {
    sub_6ca540(a, b);
    field_168 = *(int*)((char*)a + 0x168);
}
