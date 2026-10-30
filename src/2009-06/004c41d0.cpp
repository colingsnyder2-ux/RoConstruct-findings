// roc 2009-06 004c41d0  unit: RBX::Network::Players  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c41d0
//
// 004c41d0  6aff                 push -1
// 004c41d2  683c188700           push 0x87183c
// 004c41d7  64a100000000         mov eax, dword ptr fs:[0]
// 004c41dd  50                   push eax
// 004c41de  64892500000000       mov dword ptr fs:[0], esp
// 004c41e5  51                   push ecx
// 004c41e6  56                   push esi
// 004c41e7  57                   push edi
// 004c41e8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c41ec  8b07                 mov eax, dword ptr [edi]
// 004c41ee  8bf1                 mov esi, ecx
// 004c41f0  8d4f04               lea ecx, [edi + 4]
// 004c41f3  51                   push ecx
// 004c41f4  8d4e04               lea ecx, [esi + 4]
// 004c41f7  8974240c             mov dword ptr [esp + 0xc], esi
// 004c41fb  8906                 mov dword ptr [esi], eax
// 004c41fd  ff15b8e48900         call dword ptr [0x89e4b8]
// 004c4203  83c720               add edi, 0x20
// 004c4206  57                   push edi
// 004c4207  8d4e20               lea ecx, [esi + 0x20]
// 004c420a  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004c4212  ff15b8e48900         call dword ptr [0x89e4b8]
// 004c4218  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c421c  5f                   pop edi
// 004c421d  8bc6                 mov eax, esi
// 004c421f  5e                   pop esi
// 004c4220  64890d00000000       mov dword ptr fs:[0], ecx
// 004c4227  83c410               add esp, 0x10
// 004c422a  c20400               ret 4
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