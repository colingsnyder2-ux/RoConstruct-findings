// from server: 91% by colin
// roc 2007-08 006636f0  unit: CXTPReportRecordItemText  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006636f0
//
// 006636f0  56                   push esi
// 006636f1  8bf1                 mov esi, ecx
// 006636f3  8d4e7c               lea ecx, [esi + 0x7c]
// 006636f6  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006636fc  8bce                 mov ecx, esi
// 006636fe  e89d01ffff           call 0x6538a0
// 00663703  f644240801           test byte ptr [esp + 8], 1
// 00663708  742c                 je 0x663736
// 0066370a  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 00663711  740f                 je 0x663722
// 00663713  56                   push esi
// 00663714  e897a3dbff           call 0x41dab0
// 00663719  83c404               add esp, 4
// 0066371c  8bc6                 mov eax, esi
// 0066371e  5e                   pop esi
// 0066371f  c20400               ret 4
// 00663722  6870878c00           push 0x8c8770
// 00663727  ff15e8d27700         call dword ptr [0x77d2e8]
// 0066372d  56                   push esi
// 0066372e  e82fc5fcff           call 0x62fc62
// 00663733  83c404               add esp, 4
// 00663736  8bc6                 mov eax, esi
// 00663738  5e                   pop esi
// 00663739  c20400               ret 4

struct CXTPReportRecordItemText {
    char pad[0x7c];
    int field_7c;
    void sub_6538a0();
    void* scalar_deleting_destructor(unsigned int flags);
};

extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __stdcall sub_77ddbc(int*);
extern "C" void __stdcall sub_77d2e8(void*);
extern "C" void __cdecl sub_41dab0(void*);
extern "C" void __cdecl sub_62fc62(void*);

extern int g_8c8778;
extern char g_8c8770;

void* CXTPReportRecordItemText::scalar_deleting_destructor(unsigned int flags)
{
    sub_77ddbc(&this->field_7c);
    this->sub_6538a0();
    if (flags & 1) {
        if (g_8c8778 != 0) {
            sub_41dab0(this);
        } else {
            sub_77d2e8(&g_8c8770);
            sub_62fc62(this);
        }
    }
    return this;
}
