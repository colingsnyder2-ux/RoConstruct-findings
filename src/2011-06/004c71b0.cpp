// roc 2011-06 004c71b0  unit: RBX::MeshAdapter  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c71b0
//
// 004c71b0  6aff                 push -1
// 004c71b2  686c079e00           push 0x9e076c
// 004c71b7  64a100000000         mov eax, dword ptr fs:[0]
// 004c71bd  50                   push eax
// 004c71be  64892500000000       mov dword ptr fs:[0], esp
// 004c71c5  51                   push ecx
// 004c71c6  56                   push esi
// 004c71c7  57                   push edi
// 004c71c8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c71cc  8b07                 mov eax, dword ptr [edi]
// 004c71ce  8bf1                 mov esi, ecx
// 004c71d0  8d4f04               lea ecx, [edi + 4]
// 004c71d3  51                   push ecx
// 004c71d4  8d4e04               lea ecx, [esi + 4]
// 004c71d7  8974240c             mov dword ptr [esp + 0xc], esi
// 004c71db  8906                 mov dword ptr [esi], eax
// 004c71dd  ff15c804a400         call dword ptr [0xa404c8]
// 004c71e3  83c720               add edi, 0x20
// 004c71e6  57                   push edi
// 004c71e7  8d4e20               lea ecx, [esi + 0x20]
// 004c71ea  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004c71f2  ff15c804a400         call dword ptr [0xa404c8]
// 004c71f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c71fc  5f                   pop edi
// 004c71fd  8bc6                 mov eax, esi
// 004c71ff  5e                   pop esi
// 004c7200  64890d00000000       mov dword ptr fs:[0], ecx
// 004c7207  83c410               add esp, 0x10
// 004c720a  c20400               ret 4
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