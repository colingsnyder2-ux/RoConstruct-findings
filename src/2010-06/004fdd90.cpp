// roc 2010-06 004fdd90  unit: RBX::Network::IdSerializer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fdd90
//
// 004fdd90  8bc1                 mov eax, ecx
// 004fdd92  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fdd96  33d2                 xor edx, edx
// 004fdd98  2bc8                 sub ecx, eax
// 004fdd9a  56                   push esi
// 004fdd9b  eb03                 jmp 0x4fdda0
// 004fdd9d  8d4900               lea ecx, [ecx]
// 004fdda0  8b30                 mov esi, dword ptr [eax]
// 004fdda2  3b3401               cmp esi, dword ptr [ecx + eax]
// 004fdda5  750f                 jne 0x4fddb6
// 004fdda7  42                   inc edx
// 004fdda8  83c004               add eax, 4
// 004fddab  83fa04               cmp edx, 4
// 004fddae  72f0                 jb 0x4fdda0
// 004fddb0  b001                 mov al, 1
// 004fddb2  5e                   pop esi
// 004fddb3  c20400               ret 4
// 004fddb6  32c0                 xor al, al
// 004fddb8  5e                   pop esi
// 004fddb9  c20400               ret 4
// copied from an identical function in another client (function ?equals@IdSerializer@ns_ROCX00000b@@QAE_NABU12@@Z)

namespace ns_ROCX00000b {
// from server: 100% by atomic.potato
struct IdSerializer {
    bool equals(const IdSerializer& other);
};

bool __thiscall IdSerializer::equals(const IdSerializer& other)
{
    const unsigned int* a = reinterpret_cast<const unsigned int*>(this);
    const unsigned int* b = reinterpret_cast<const unsigned int*>(&other);
    unsigned int i = 0;

    do {
        if (a[i] != b[i])
            return false;
        ++i;
    } while (i < 4);

    return true;
}
}