// from server: 100% by colin
// roc 2007-08 00696b70  unit: CXTPToolTipContext::CRichEditToolTip  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696b70
//
// 00696b70  8b442404             mov eax, dword ptr [esp + 4]
// 00696b74  56                   push esi
// 00696b75  6a3c                 push 0x3c
// 00696b77  50                   push eax
// 00696b78  8bf1                 mov esi, ecx
// 00696b7a  6a3c                 push 0x3c
// 00696b7c  56                   push esi
// 00696b7d  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00696b84  ff15d4e67700         call dword ptr [0x77e6d4]
// 00696b8a  83c410               add esp, 0x10
// 00696b8d  8bc6                 mov eax, esi
// 00696b8f  5e                   pop esi
// 00696b90  c20400               ret 4

extern "C" int (__cdecl *memcpy_s)(void*, unsigned int, const void*, unsigned int);

struct CXTPToolTipContext_CRichEditToolTip
{
    char pad[0x3c];
    int field_3c;
    void* construct(void* src);
};

void* CXTPToolTipContext_CRichEditToolTip::construct(void* src)
{
    field_3c = 0;
    memcpy_s(this, 0x3c, src, 0x3c);
    return this;
}
