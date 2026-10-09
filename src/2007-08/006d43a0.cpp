// from server: 81% by colin
// roc 2007-08 006d43a0  unit: CXTPReportRow_Batch  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d43a0
//
// 006d43a0  83ec40               sub esp, 0x40
// 006d43a3  a188518b00           mov eax, dword ptr [0x8b5188]
// 006d43a8  33c4                 xor eax, esp
// 006d43aa  8944243c             mov dword ptr [esp + 0x3c], eax
// 006d43ae  56                   push esi
// 006d43af  8d7174               lea esi, [ecx + 0x74]
// 006d43b2  57                   push edi
// 006d43b3  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 006d43b7  8bce                 mov ecx, esi
// 006d43b9  e86ebef5ff           call 0x63022c
// 006d43be  8b4f04               mov ecx, dword ptr [edi + 4]
// 006d43c1  8d442408             lea eax, [esp + 8]
// 006d43c5  50                   push eax
// 006d43c6  6a3c                 push 0x3c
// 006d43c8  51                   push ecx
// 006d43c9  ff15ccd07700         call dword ptr [0x77d0cc]
// 006d43cf  8d542408             lea edx, [esp + 8]
// 006d43d3  52                   push edx
// 006d43d4  ff154cd17700         call dword ptr [0x77d14c]
// 006d43da  50                   push eax
// 006d43db  8bce                 mov ecx, esi
// 006d43dd  e856bef5ff           call 0x630238
// 006d43e2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006d43e6  5f                   pop edi
// 006d43e7  5e                   pop esi
// 006d43e8  33cc                 xor ecx, esp
// 006d43ea  e82fc6f5ff           call 0x630a1e
// 006d43ef  83c440               add esp, 0x40
// 006d43f2  c20400               ret 4

struct CXTPReportRow_Batch {
    char pad[0x74];
    int field74;
    void sub_6D43A0(int);
};

extern "C" {
    void __stdcall sub_63022C(int);
    void __stdcall sub_630238(int, int);
    void __stdcall sub_630A1E(void);
    int __stdcall CreateFontIndirectA(const void*);
    int __stdcall GetObjectA(int, int, void*);
}

void CXTPReportRow_Batch::sub_6D43A0(int param) {
    char buf[0x3c];
    int local;
    sub_63022C((int)&field74);
    GetObjectA(*(int*)(param + 4), 0x3c, buf);
    local = CreateFontIndirectA(buf);
    sub_630238((int)&field74, local);
    sub_630A1E();
}
