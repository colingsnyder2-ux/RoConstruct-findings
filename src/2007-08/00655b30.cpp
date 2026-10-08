// from server: 100% by colin
// roc 2007-08 00655b30  unit: CXTPReportControl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655b30
//
// 00655b30  56                   push esi
// 00655b31  57                   push edi
// 00655b32  8bf9                 mov edi, ecx
// 00655b34  8bb700020000         mov esi, dword ptr [edi + 0x200]
// 00655b3a  85f6                 test esi, esi
// 00655b3c  741a                 je 0x655b58
// 00655b3e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00655b41  85c9                 test ecx, ecx
// 00655b43  7413                 je 0x655b58
// 00655b45  e856d40700           call 0x6d2fa0
// 00655b4a  3bc7                 cmp eax, edi
// 00655b4c  750a                 jne 0x655b58
// 00655b4e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00655b51  5f                   pop edi
// 00655b52  5e                   pop esi
// 00655b53  e9c8d50700           jmp 0x6d3120
// 00655b58  5f                   pop edi
// 00655b59  5e                   pop esi
// 00655b5a  c3                   ret 

struct CXTPReportControl {
    char pad[0x200];
    void* field_200;
    void func();
};

void* __fastcall sub_6d2fa0(void*);
void __fastcall sub_6d3120(void*);

void CXTPReportControl::func() {
    void* p = field_200;
    if (p != 0) {
        void* q = *(void**)((char*)p + 0x48);
        if (q != 0) {
            if (sub_6d2fa0(q) == this) {
                sub_6d3120(*(void**)((char*)p + 0x48));
            }
        }
    }
}
