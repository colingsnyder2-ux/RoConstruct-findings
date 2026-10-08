// from server: 89% by colin
// roc 2007-08 00564ce0  unit: RBX::Verb  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564ce0
//
// 00564ce0  51                   push ecx
// 00564ce1  56                   push esi
// 00564ce2  8bf1                 mov esi, ecx
// 00564ce4  8b4608               mov eax, dword ptr [esi + 8]
// 00564ce7  85c0                 test eax, eax
// 00564ce9  c706f4957a00         mov dword ptr [esi], 0x7a95f4
// 00564cef  7414                 je 0x564d05
// 00564cf1  8b4e04               mov ecx, dword ptr [esi + 4]
// 00564cf4  8d542404             lea edx, [esp + 4]
// 00564cf8  894c2404             mov dword ptr [esp + 4], ecx
// 00564cfc  52                   push edx
// 00564cfd  8d4804               lea ecx, [eax + 4]
// 00564d00  e82bfdffff           call 0x564a30
// 00564d05  f644240c01           test byte ptr [esp + 0xc], 1
// 00564d0a  7409                 je 0x564d15
// 00564d0c  56                   push esi
// 00564d0d  e850af0c00           call 0x62fc62
// 00564d12  83c404               add esp, 4
// 00564d15  8bc6                 mov eax, esi
// 00564d17  5e                   pop esi
// 00564d18  59                   pop ecx
// 00564d19  c20400               ret 4

struct Verb {
    void* vtable;
    int field_4;
    int field_8;
    void* destroy(char flag);
};

extern "C" void __stdcall sub_62fc62(void* p);
extern "C" void __fastcall sub_564a30(void* p, void* unused, void* arg);

void* Verb::destroy(char flag)
{
    vtable = (void*)0x7a95f4;
    if (field_8 != 0) {
        int tmp = field_4;
        sub_564a30((void*)(field_8 + 4), 0, &tmp);
    }
    if (flag & 1) {
        sub_62fc62(this);
    }
    return this;
}
