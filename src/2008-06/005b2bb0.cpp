// from server: 100% by king_originala
// roc 2008-06 005b2bb0  unit: RBX::Accoutrement  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b2bb0
//
// 005b2bb0  6aff                 push -1
// 005b2bb2  6828387d00           push 0x7d3828
// 005b2bb7  64a100000000         mov eax, dword ptr fs:[0]
// 005b2bbd  50                   push eax
// 005b2bbe  64892500000000       mov dword ptr fs:[0], esp
// 005b2bc5  83ec08               sub esp, 8
// 005b2bc8  837c241800           cmp dword ptr [esp + 0x18], 0
// 005b2bcd  56                   push esi
// 005b2bce  8bf1                 mov esi, ecx
// 005b2bd0  89742404             mov dword ptr [esp + 4], esi
// 005b2bd4  c744240800000000     mov dword ptr [esp + 8], 0
// 005b2bdc  7414                 je 0x5b2bf2
// 005b2bde  c78650010000b44e8300 mov dword ptr [esi + 0x150], 0x834eb4
// 005b2be8  c786d401000044618400 mov dword ptr [esi + 0x1d4], 0x846144
// 005b2bf2  6a00                 push 0
// 005b2bf4  e8f7f7ffff           call 0x5b23f0
// 005b2bf9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005b2c01  e8baedffff           call 0x5b19c0
// 005b2c06  89461c               mov dword ptr [esi + 0x1c], eax
// 005b2c09  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005b2c0f  c7068c4f8300         mov dword ptr [esi], 0x834f8c
// 005b2c15  c746107c4f8300       mov dword ptr [esi + 0x10], 0x834f7c
// 005b2c1c  c74614744f8300       mov dword ptr [esi + 0x14], 0x834f74
// 005b2c23  c746206c4f8300       mov dword ptr [esi + 0x20], 0x834f6c
// 005b2c2a  c746245c4f8300       mov dword ptr [esi + 0x24], 0x834f5c
// 005b2c31  c746444c4f8300       mov dword ptr [esi + 0x44], 0x834f4c
// 005b2c38  c746643c4f8300       mov dword ptr [esi + 0x64], 0x834f3c
// 005b2c3f  c786840000002c4f8300 mov dword ptr [esi + 0x84], 0x834f2c
// 005b2c49  c786a40000001c4f8300 mov dword ptr [esi + 0xa4], 0x834f1c
// 005b2c53  c786c40000000c4f8300 mov dword ptr [esi + 0xc4], 0x834f0c
// 005b2c5d  c78630010000044f8300 mov dword ptr [esi + 0x130], 0x834f04
// 005b2c67  c78640010000ec4e8300 mov dword ptr [esi + 0x140], 0x834eec
// 005b2c71  8b4804               mov ecx, dword ptr [eax + 4]
// 005b2c74  c7843150010000e44e8300 mov dword ptr [ecx + esi + 0x150], 0x834ee4
// 005b2c7f  8b9650010000         mov edx, dword ptr [esi + 0x150]
// 005b2c85  8b4208               mov eax, dword ptr [edx + 8]
// 005b2c88  c7843050010000c84e8300 mov dword ptr [eax + esi + 0x150], 0x834ec8
// 005b2c93  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 005b2c99  8b4104               mov eax, dword ptr [ecx + 4]
// 005b2c9c  8d5088               lea edx, [eax - 0x78]
// 005b2c9f  8994304c010000       mov dword ptr [eax + esi + 0x14c], edx
// 005b2ca6  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005b2cac  8b4008               mov eax, dword ptr [eax + 8]
// 005b2caf  8d4880               lea ecx, [eax - 0x80]
// 005b2cb2  898c304c010000       mov dword ptr [eax + esi + 0x14c], ecx
// 005b2cb9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b2cbd  8bc6                 mov eax, esi
// 005b2cbf  5e                   pop esi
// 005b2cc0  64890d00000000       mov dword ptr fs:[0], ecx
// 005b2cc7  83c414               add esp, 0x14
// 005b2cca  c20400               ret 4

unsigned __cdecl descriptor();

struct Base {
    unsigned data[118];
    Base(int);
    ~Base();
};

struct S : Base {
    static __forceinline int prepare(S*, int);
    S(int complete);
};

__forceinline int S::prepare(S* p, int complete)
{
    volatile int constructionFlags = 0;
    if (complete) {
        p->data[0x150 / 4] = 0x834eb4;
        p->data[0x1d4 / 4] = 0x846144;
    }
    return 0;
}

S::S(int complete) : Base(prepare(this, complete))
{
    data[0x1c / 4] = descriptor();

    int* table = reinterpret_cast<int*>(data[0x150 / 4]);
    data[0x00 / 4] = 0x834f8c;
    data[0x10 / 4] = 0x834f7c;
    data[0x14 / 4] = 0x834f74;
    data[0x20 / 4] = 0x834f6c;
    data[0x24 / 4] = 0x834f5c;
    data[0x44 / 4] = 0x834f4c;
    data[0x64 / 4] = 0x834f3c;
    data[0x84 / 4] = 0x834f2c;
    data[0xa4 / 4] = 0x834f1c;
    data[0xc4 / 4] = 0x834f0c;
    data[0x130 / 4] = 0x834f04;
    data[0x140 / 4] = 0x834eec;

    *reinterpret_cast<unsigned*>(
        reinterpret_cast<char*>(this) + 0x150 + table[1]) = 0x834ee4;

    table = reinterpret_cast<int*>(data[0x150 / 4]);
    *reinterpret_cast<unsigned*>(
        reinterpret_cast<char*>(this) + 0x150 + table[2]) = 0x834ec8;

    table = reinterpret_cast<int*>(data[0x150 / 4]);
    int offset = table[1];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x14c + offset) = offset - 0x78;

    table = reinterpret_cast<int*>(data[0x150 / 4]);
    offset = table[2];
    *reinterpret_cast<int*>(
        reinterpret_cast<char*>(this) + 0x14c + offset) = offset - 0x80;
}
