// from server: 100% by colin
// roc 2008-06 00496110  unit: RBX::Network::Players  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496110
//
// 00496110  6aff                 push -1
// 00496112  689c6a7c00           push 0x7c6a9c
// 00496117  64a100000000         mov eax, dword ptr fs:[0]
// 0049611d  50                   push eax
// 0049611e  64892500000000       mov dword ptr fs:[0], esp
// 00496125  51                   push ecx
// 00496126  56                   push esi
// 00496127  57                   push edi
// 00496128  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0049612c  8b07                 mov eax, dword ptr [edi]
// 0049612e  8bf1                 mov esi, ecx
// 00496130  8d4f04               lea ecx, [edi + 4]
// 00496133  51                   push ecx
// 00496134  8d4e04               lea ecx, [esi + 4]
// 00496137  8974240c             mov dword ptr [esp + 0xc], esi
// 0049613b  8906                 mov dword ptr [esi], eax
// 0049613d  ff155c248000         call dword ptr [0x80245c]
// 00496143  83c720               add edi, 0x20
// 00496146  57                   push edi
// 00496147  8d4e20               lea ecx, [esi + 0x20]
// 0049614a  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00496152  ff155c248000         call dword ptr [0x80245c]
// 00496158  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049615c  5f                   pop edi
// 0049615d  8bc6                 mov eax, esi
// 0049615f  5e                   pop esi
// 00496160  64890d00000000       mov dword ptr fs:[0], ecx
// 00496167  83c410               add esp, 0x10
// 0049616a  c20400               ret 4

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