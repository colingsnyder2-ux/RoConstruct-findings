// from server: 94% by colin
// roc 2007-08 00463140  unit: CSettingsPropGrid  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00463140
//
// 00463140  56                   push esi
// 00463141  57                   push edi
// 00463142  8bf1                 mov esi, ecx
// 00463144  e84755fbff           call 0x418690
// 00463149  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0046314d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00463150  50                   push eax
// 00463151  e85ad61000           call 0x5707b0
// 00463156  84c0                 test al, al
// 00463158  740d                 je 0x463167
// 0046315a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046315e  57                   push edi
// 0046315f  50                   push eax
// 00463160  8bce                 mov ecx, esi
// 00463162  e869c6fdff           call 0x43f7d0
// 00463167  5f                   pop edi
// 00463168  5e                   pop esi
// 00463169  c20800               ret 8

struct CSettingsPropGrid {
    void sub_43F7D0(int, void*);
    void sub_463140(int, void*);
};

extern "C" void* __stdcall sub_418690();
extern "C" char __stdcall sub_5707B0(void*, void*);

void CSettingsPropGrid::sub_463140(int a, void* b) {
    void* v = sub_418690();
    void* p = *(void**)((char*)b + 0xc);
    if (sub_5707B0(p, v)) {
        sub_43F7D0(a, b);
    }
}
