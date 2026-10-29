// roc 2009-12 005129d0  unit: RBX::Network::Players  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005129d0
//
// 005129d0  6aff                 push -1
// 005129d2  687c3c9300           push 0x933c7c
// 005129d7  64a100000000         mov eax, dword ptr fs:[0]
// 005129dd  50                   push eax
// 005129de  64892500000000       mov dword ptr fs:[0], esp
// 005129e5  51                   push ecx
// 005129e6  56                   push esi
// 005129e7  57                   push edi
// 005129e8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005129ec  8b07                 mov eax, dword ptr [edi]
// 005129ee  8bf1                 mov esi, ecx
// 005129f0  8d4f04               lea ecx, [edi + 4]
// 005129f3  51                   push ecx
// 005129f4  8d4e04               lea ecx, [esi + 4]
// 005129f7  8974240c             mov dword ptr [esp + 0xc], esi
// 005129fb  8906                 mov dword ptr [esi], eax
// 005129fd  ff15f0b69800         call dword ptr [0x98b6f0]
// 00512a03  83c720               add edi, 0x20
// 00512a06  57                   push edi
// 00512a07  8d4e20               lea ecx, [esi + 0x20]
// 00512a0a  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00512a12  ff15f0b69800         call dword ptr [0x98b6f0]
// 00512a18  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00512a1c  5f                   pop edi
// 00512a1d  8bc6                 mov eax, esi
// 00512a1f  5e                   pop esi
// 00512a20  64890d00000000       mov dword ptr fs:[0], ecx
// 00512a27  83c410               add esp, 0x10
// 00512a2a  c20400               ret 4
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