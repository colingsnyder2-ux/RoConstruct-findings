// roc 2010-06 00817740  unit: CXTPToolTipContextToolTip  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00817740
//
// 00817740  8b442404             mov eax, dword ptr [esp + 4]
// 00817744  56                   push esi
// 00817745  6a3c                 push 0x3c
// 00817747  50                   push eax
// 00817748  8bf1                 mov esi, ecx
// 0081774a  6a3c                 push 0x3c
// 0081774c  56                   push esi
// 0081774d  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00817754  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 0081775a  83c410               add esp, 0x10
// 0081775d  8bc6                 mov eax, esi
// 0081775f  5e                   pop esi
// 00817760  c20400               ret 4
// copied from an identical function in another client (function ?construct@CXTPToolTipContext_CRichEditToolTip@ns_ROCX00000b@@QAEPAXPAX@Z)

namespace ns_ROCX00000b {
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
