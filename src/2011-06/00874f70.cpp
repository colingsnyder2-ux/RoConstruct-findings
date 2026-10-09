// roc 2011-06 00874f70  unit: CXTPToolTipContextToolTip  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00874f70
//
// 00874f70  8b442404             mov eax, dword ptr [esp + 4]
// 00874f74  56                   push esi
// 00874f75  6a3c                 push 0x3c
// 00874f77  50                   push eax
// 00874f78  8bf1                 mov esi, ecx
// 00874f7a  6a3c                 push 0x3c
// 00874f7c  56                   push esi
// 00874f7d  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00874f84  ff153c0aa400         call dword ptr [0xa40a3c]
// 00874f8a  83c410               add esp, 0x10
// 00874f8d  8bc6                 mov eax, esi
// 00874f8f  5e                   pop esi
// 00874f90  c20400               ret 4
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
