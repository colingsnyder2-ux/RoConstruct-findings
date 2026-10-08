// from server: 100% by colin
// roc 2007-08 0069e7b0  unit: CXTPPropertyGridItemEnum  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e7b0
//
// 0069e7b0  56                   push esi
// 0069e7b1  68902c7d00           push 0x7d2c90
// 0069e7b6  ff15c8d27700         call dword ptr [0x77d2c8]
// 0069e7bc  8bf0                 mov esi, eax
// 0069e7be  e87dffffff           call 0x69e740
// 0069e7c3  3bb0d0000000         cmp esi, dword ptr [eax + 0xd0]
// 0069e7c9  7416                 je 0x69e7e1
// 0069e7cb  68d0000000           push 0xd0
// 0069e7d0  6a00                 push 0
// 0069e7d2  50                   push eax
// 0069e7d3  89b0d0000000         mov dword ptr [eax + 0xd0], esi
// 0069e7d9  e8ae23f9ff           call 0x630b8c
// 0069e7de  83c40c               add esp, 0xc
// 0069e7e1  5e                   pop esi
// 0069e7e2  c3                   ret 

extern "C" __declspec(dllimport) void* __stdcall GetModuleHandleA(const char*);
extern "C" void* __cdecl sub_0069e740();
extern "C" void __cdecl sub_00630b8c(void*, int, int);

struct CXTPPropertyGridItemEnum
{
    char pad[0xd0];
    void* field_d0;
    void SetTheme();
};

void CXTPPropertyGridItemEnum::SetTheme()
{
    void* h = GetModuleHandleA("UXTHEME.DLL");
    CXTPPropertyGridItemEnum* p = (CXTPPropertyGridItemEnum*)sub_0069e740();
    if (h != p->field_d0)
    {
        p->field_d0 = h;
        sub_00630b8c(p, 0, 0xd0);
    }
}
