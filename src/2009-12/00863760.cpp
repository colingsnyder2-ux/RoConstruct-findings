// roc 2009-12 00863760  unit: CXTPToolTipContextToolTip  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863760
//
// 00863760  8b442404             mov eax, dword ptr [esp + 4]
// 00863764  56                   push esi
// 00863765  6a3c                 push 0x3c
// 00863767  50                   push eax
// 00863768  8bf1                 mov esi, ecx
// 0086376a  6a3c                 push 0x3c
// 0086376c  56                   push esi
// 0086376d  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00863774  ff157cb79800         call dword ptr [0x98b77c]
// 0086377a  83c410               add esp, 0x10
// 0086377d  8bc6                 mov eax, esi
// 0086377f  5e                   pop esi
// 00863780  c20400               ret 4
// copied from an identical function in another client (function ?construct@CXTPToolTipContext_CRichEditToolTip@ns_ROCX000000@@QAEPAXPAX@Z)

namespace ns_ROCX000000 {
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
