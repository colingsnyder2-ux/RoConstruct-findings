// roc 2009-12 00662cf0  unit: RBX::Reflection::EnumDescriptor  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00662cf0
//
// 00662cf0  33c0                 xor eax, eax
// 00662cf2  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 00662cf6  0f95c0               setne al
// 00662cf9  c20400               ret 4
// copied from an identical function in another client (function ?m@S@ns_ROCX00000b@@QAE_NPAU12@@Z)

namespace ns_ROCX00000b {
struct S {
    bool m(S* other);
};

bool S::m(S* other)
{
    return this != other;
}
}
