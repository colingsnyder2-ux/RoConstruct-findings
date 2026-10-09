// roc 2008-06 0070ff40  unit: CXTPStatusBar  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070ff40
//
// 0070ff40  8b442404             mov eax, dword ptr [esp + 4]
// 0070ff44  56                   push esi
// 0070ff45  6a3c                 push 0x3c
// 0070ff47  50                   push eax
// 0070ff48  8bf1                 mov esi, ecx
// 0070ff4a  6a3c                 push 0x3c
// 0070ff4c  56                   push esi
// 0070ff4d  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 0070ff54  ff15ac288000         call dword ptr [0x8028ac]
// 0070ff5a  83c410               add esp, 0x10
// 0070ff5d  8bc6                 mov eax, esi
// 0070ff5f  5e                   pop esi
// 0070ff60  c20400               ret 4
// copied from an identical function in another client (function ?construct@CXTPToolTipContext_CRichEditToolTip@ns_ROCX00000d@@QAEPAXPAX@Z)

namespace ns_ROCX00000d {
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
