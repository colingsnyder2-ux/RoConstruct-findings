// roc 2010-06 004bff20  unit: RBX::Network::VPlayer::?$EventDesc  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004bff20
//
// 004bff20  6aff                 push -1
// 004bff22  68bc5f9800           push 0x985fbc
// 004bff27  64a100000000         mov eax, dword ptr fs:[0]
// 004bff2d  50                   push eax
// 004bff2e  64892500000000       mov dword ptr fs:[0], esp
// 004bff35  51                   push ecx
// 004bff36  56                   push esi
// 004bff37  57                   push edi
// 004bff38  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004bff3c  8b07                 mov eax, dword ptr [edi]
// 004bff3e  8bf1                 mov esi, ecx
// 004bff40  8d4f04               lea ecx, [edi + 4]
// 004bff43  51                   push ecx
// 004bff44  8d4e04               lea ecx, [esi + 4]
// 004bff47  8974240c             mov dword ptr [esp + 0xc], esi
// 004bff4b  8906                 mov dword ptr [esi], eax
// 004bff4d  ff150ca49e00         call dword ptr [0x9ea40c]
// 004bff53  83c720               add edi, 0x20
// 004bff56  57                   push edi
// 004bff57  8d4e20               lea ecx, [esi + 0x20]
// 004bff5a  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004bff62  ff150ca49e00         call dword ptr [0x9ea40c]
// 004bff68  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bff6c  5f                   pop edi
// 004bff6d  8bc6                 mov eax, esi
// 004bff6f  5e                   pop esi
// 004bff70  64890d00000000       mov dword ptr fs:[0], ecx
// 004bff77  83c410               add esp, 0x10
// 004bff7a  c20400               ret 4
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