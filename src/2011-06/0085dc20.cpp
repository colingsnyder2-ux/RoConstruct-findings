// roc 2011-06 0085dc20  unit: CXTPDrawHelpers  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085dc20
//
// 0085dc20  56                   push esi
// 0085dc21  8b742408             mov esi, dword ptr [esp + 8]
// 0085dc25  85f6                 test esi, esi
// 0085dc27  7441                 je 0x85dc6a
// 0085dc29  837e2000             cmp dword ptr [esi + 0x20], 0
// 0085dc2d  743b                 je 0x85dc6a
// 0085dc2f  57                   push edi
// 0085dc30  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0085dc34  833f25               cmp dword ptr [edi], 0x25
// 0085dc37  7517                 jne 0x85dc50
// 0085dc39  8bce                 mov ecx, esi
// 0085dc3b  e8dee91600           call 0x9cc61e
// 0085dc40  a900004000           test eax, 0x400000
// 0085dc45  7409                 je 0x85dc50
// 0085dc47  c70727000000         mov dword ptr [edi], 0x27
// 0085dc4d  5f                   pop edi
// 0085dc4e  5e                   pop esi
// 0085dc4f  c3                   ret 
// 0085dc50  833f27               cmp dword ptr [edi], 0x27
// 0085dc53  7514                 jne 0x85dc69
// 0085dc55  8bce                 mov ecx, esi
// 0085dc57  e8c2e91600           call 0x9cc61e
// 0085dc5c  a900004000           test eax, 0x400000
// 0085dc61  7406                 je 0x85dc69
// 0085dc63  c70725000000         mov dword ptr [edi], 0x25
// 0085dc69  5f                   pop edi
// 0085dc6a  5e                   pop esi
// 0085dc6b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000015@ns_ROCX000015@ns_ROCX0000bd@@YAXPAUCXTPDrawHelpers@12@PAH@Z)

namespace ns_ROCX000015 {
extern char G;

char* fn_ROCX000015()
{
    return &G;
}
}
