// from server: 85% by colin
// roc 2007-08 004667e0  unit: CWebToolbox  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004667e0
//
// 004667e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004667e4  8b542404             mov edx, dword ptr [esp + 4]
// 004667e8  56                   push esi
// 004667e9  8bf1                 mov esi, ecx
// 004667eb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004667ef  50                   push eax
// 004667f0  51                   push ecx
// 004667f1  52                   push edx
// 004667f2  8bce                 mov ecx, esi
// 004667f4  e8c5981c00           call 0x6300be
// 004667f9  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 004667ff  85c9                 test ecx, ecx
// 00466801  5e                   pop esi
// 00466802  7405                 je 0x466809
// 00466804  e8fb971c00           call 0x630004
// 00466809  c20c00               ret 0xc

struct CWebToolbox {
    char pad[0xf4];
    void* field_f4;
    void sub_4667E0(int, int, int);
};

extern "C" void __stdcall sub_6300BE(int, int, int);
extern "C" void __stdcall sub_630004(void*);

void CWebToolbox::sub_4667E0(int a1, int a2, int a3) {
    sub_6300BE(a1, a2, a3);
    void* p = field_f4;
    if (p != 0) {
        sub_630004(p);
    }
}
