// roc 2008-06 00757e80  unit: CXTPDockingPaneAutoHidePanel  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00757e80
//
// 00757e80  8b442408             mov eax, dword ptr [esp + 8]
// 00757e84  56                   push esi
// 00757e85  85c0                 test eax, eax
// 00757e87  7505                 jne 0x757e8e
// 00757e89  8b7104               mov esi, dword ptr [ecx + 4]
// 00757e8c  eb02                 jmp 0x757e90
// 00757e8e  8b30                 mov esi, dword ptr [eax]
// 00757e90  85f6                 test esi, esi
// 00757e92  7418                 je 0x757eac
// 00757e94  8d442408             lea eax, [esp + 8]
// 00757e98  50                   push eax
// 00757e99  8d4e08               lea ecx, [esi + 8]
// 00757e9c  51                   push ecx
// 00757e9d  e83e44fcff           call 0x71c2e0
// 00757ea2  85c0                 test eax, eax
// 00757ea4  750c                 jne 0x757eb2
// 00757ea6  8b36                 mov esi, dword ptr [esi]
// 00757ea8  85f6                 test esi, esi
// 00757eaa  75e8                 jne 0x757e94
// 00757eac  33c0                 xor eax, eax
// 00757eae  5e                   pop esi
// 00757eaf  c20800               ret 8
// 00757eb2  8bc6                 mov eax, esi
// 00757eb4  5e                   pop esi
// 00757eb5  c20800               ret 8
// copied from an identical function in another client (function ?find@CXTPHookManagerHookAble@ns_ROCX00001e@ns_ROCX00003b@@QAEHPAX0@Z)

namespace ns_ROCX00001e {
namespace ns_ROCX00000d {
struct CPropertyGridItemBrickColor
{
    char pad[0x20];
    void* field_20;
};

void __stdcall fn_ROCX00000d(void* dst, void* src);

void* __stdcall fn_ROCX00000d(void* dst, CPropertyGridItemBrickColor* src)
{
    void* value;
    if (src == 0)
        value = 0;
    else
        value = src->field_20;
    fn_ROCX00000d(dst, value);
    return dst;
}
}
}
