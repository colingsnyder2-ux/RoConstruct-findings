// roc 2010-06 008a7ad0  unit: CXTWindowMap  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7ad0
//
// 008a7ad0  56                   push esi
// 008a7ad1  57                   push edi
// 008a7ad2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a7ad6  57                   push edi
// 008a7ad7  8bf1                 mov esi, ecx
// 008a7ad9  e8f2feffff           call 0x8a79d0
// 008a7ade  85c0                 test eax, eax
// 008a7ae0  7417                 je 0x8a7af9
// 008a7ae2  8b10                 mov edx, dword ptr [eax]
// 008a7ae4  8bc8                 mov ecx, eax
// 008a7ae6  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008a7ae9  6a00                 push 0
// 008a7aeb  ffd0                 call eax
// 008a7aed  57                   push edi
// 008a7aee  8bce                 mov ecx, esi
// 008a7af0  e8dbfeffff           call 0x8a79d0
// 008a7af5  85c0                 test eax, eax
// 008a7af7  75e9                 jne 0x8a7ae2
// 008a7af9  5f                   pop edi
// 008a7afa  5e                   pop esi
// 008a7afb  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@ns_ROCX000003@ns_ROCX000090@@QAEXH@Z)

namespace ns_ROCX000003 {
extern char G;

char* fn_ROCX000003()
{
    return &G;
}
}
