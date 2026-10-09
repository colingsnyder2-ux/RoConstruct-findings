// roc 2009-06 00788760  unit: CXTPToolTipContextToolTip  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00788760
//
// 00788760  8b442404             mov eax, dword ptr [esp + 4]
// 00788764  56                   push esi
// 00788765  6a3c                 push 0x3c
// 00788767  50                   push eax
// 00788768  8bf1                 mov esi, ecx
// 0078876a  6a3c                 push 0x3c
// 0078876c  56                   push esi
// 0078876d  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00788774  ff1590e98900         call dword ptr [0x89e990]
// 0078877a  83c410               add esp, 0x10
// 0078877d  8bc6                 mov eax, esi
// 0078877f  5e                   pop esi
// 00788780  c20400               ret 4
// copied from an identical function in another client (function ?construct@CXTPToolTipContext_CRichEditToolTip@ns_ROCX000001@@QAEPAXPAX@Z)

namespace ns_ROCX000001 {
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
}
