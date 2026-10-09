// roc 2010-06 008001a0  unit: CXTPDrawHelpers  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008001a0
//
// 008001a0  56                   push esi
// 008001a1  8b742408             mov esi, dword ptr [esp + 8]
// 008001a5  85f6                 test esi, esi
// 008001a7  7441                 je 0x8001ea
// 008001a9  837e2000             cmp dword ptr [esi + 0x20], 0
// 008001ad  743b                 je 0x8001ea
// 008001af  57                   push edi
// 008001b0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008001b4  833f25               cmp dword ptr [edi], 0x25
// 008001b7  7517                 jne 0x8001d0
// 008001b9  8bce                 mov ecx, esi
// 008001bb  e824cc1700           call 0x97cde4
// 008001c0  a900004000           test eax, 0x400000
// 008001c5  7409                 je 0x8001d0
// 008001c7  c70727000000         mov dword ptr [edi], 0x27
// 008001cd  5f                   pop edi
// 008001ce  5e                   pop esi
// 008001cf  c3                   ret 
// 008001d0  833f27               cmp dword ptr [edi], 0x27
// 008001d3  7514                 jne 0x8001e9
// 008001d5  8bce                 mov ecx, esi
// 008001d7  e808cc1700           call 0x97cde4
// 008001dc  a900004000           test eax, 0x400000
// 008001e1  7406                 je 0x8001e9
// 008001e3  c70725000000         mov dword ptr [edi], 0x25
// 008001e9  5f                   pop edi
// 008001ea  5e                   pop esi
// 008001eb  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000b@ns_ROCX00000b@ns_ROCX000084@@YAXPAUCXTPDrawHelpers@12@PAH@Z)

namespace ns_ROCX00000b {
namespace ns_ROCX00001a {
struct Inner {
    int f(int);
};

struct Outer {
    char pad[0xac];
    Inner* inner;
    int g(int);
};

int Outer::g(int x) {
    inner->f(x);
    return x;
}
}
}
