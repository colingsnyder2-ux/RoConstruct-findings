// roc 2012-06 005407b0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005407b0
//
// 005407b0  6aff                 push -1
// 005407b2  68ecccaa00           push 0xaaccec
// 005407b7  64a100000000         mov eax, dword ptr fs:[0]
// 005407bd  50                   push eax
// 005407be  64892500000000       mov dword ptr fs:[0], esp
// 005407c5  51                   push ecx
// 005407c6  56                   push esi
// 005407c7  57                   push edi
// 005407c8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005407cc  8b07                 mov eax, dword ptr [edi]
// 005407ce  8bf1                 mov esi, ecx
// 005407d0  8d4f04               lea ecx, [edi + 4]
// 005407d3  51                   push ecx
// 005407d4  8d4e04               lea ecx, [esi + 4]
// 005407d7  8974240c             mov dword ptr [esp + 0xc], esi
// 005407db  8906                 mov dword ptr [esi], eax
// 005407dd  ff154426b200         call dword ptr [0xb22644]
// 005407e3  83c720               add edi, 0x20
// 005407e6  57                   push edi
// 005407e7  8d4e20               lea ecx, [esi + 0x20]
// 005407ea  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005407f2  ff154426b200         call dword ptr [0xb22644]
// 005407f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005407fc  5f                   pop edi
// 005407fd  8bc6                 mov eax, esi
// 005407ff  5e                   pop esi
// 00540800  64890d00000000       mov dword ptr fs:[0], ecx
// 00540807  83c410               add esp, 0x10
// 0054080a  c20400               ret 4
// copied from an identical function in another client (function ??0S@@QAE@ABU0@@Z)

// std::pair-like aggregate copy ctor (unit RBX::Network::Players)
#include <string>

struct S {
    unsigned int value;
    std::string first;
    std::string second;

    S(const S&);
};

S::S(const S& other)
    : value(other.value),
      first(other.first),
      second(other.second)
{
}