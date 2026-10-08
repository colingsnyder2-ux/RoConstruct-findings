// from server: 46% by colin
// roc 2007-08 004073c0  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004073c0
//
// 004073c0  83ec10               sub esp, 0x10
// 004073c3  56                   push esi
// 004073c4  8bf1                 mov esi, ecx
// 004073c6  8d442404             lea eax, [esp + 4]
// 004073ca  50                   push eax
// 004073cb  8d4c240c             lea ecx, [esp + 0xc]
// 004073cf  51                   push ecx
// 004073d0  b930ae8b00           mov ecx, 0x8bae30
// 004073d5  c70654507800         mov dword ptr [esi], 0x785054
// 004073db  8974240c             mov dword ptr [esp + 0xc], esi
// 004073df  e87c220a00           call 0x4a9660
// 004073e4  8bc6                 mov eax, esi
// 004073e6  5e                   pop esi
// 004073e7  83c410               add esp, 0x10
// 004073ea  c3                   ret 

struct CComEnumObject {
    void construct();
};

extern "C" void __stdcall helper_4a9660(void*, void*);

void CComEnumObject::construct() {
    void* local1;
    void* local2;
    *(int*)this = 0x785054;
    local2 = this;
    helper_4a9660(&local1, &local2);
}
