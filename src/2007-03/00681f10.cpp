// roc 2007-03 00681f10  unit: seg_00680000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00681f10
//
// 00681f10  8b442404             mov eax, dword ptr [esp + 4]
// 00681f14  56                   push esi
// 00681f15  6a3c                 push 0x3c
// 00681f17  50                   push eax
// 00681f18  8bf1                 mov esi, ecx
// 00681f1a  6a3c                 push 0x3c
// 00681f1c  56                   push esi
// 00681f1d  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00681f24  ff1540e97700         call dword ptr [0x77e940]
// 00681f2a  83c410               add esp, 0x10
// 00681f2d  8bc6                 mov eax, esi
// 00681f2f  5e                   pop esi
// 00681f30  c20400               ret 4
// copied from an identical function in another client (function ?construct@CXTPToolTipContext_CRichEditToolTip@ns_ROCX000008@@QAEPAXPAX@Z)

namespace ns_ROCX000008 {
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
