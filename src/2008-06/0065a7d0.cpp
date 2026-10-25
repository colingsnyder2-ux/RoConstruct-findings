// from server: 100% by king_originala
// roc 2008-06 0065a7d0  unit: RBX::BallBallContact  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065a7d0
//
// 0065a7d0  83ec0c               sub esp, 0xc
// 0065a7d3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065a7d7  8b5004               mov edx, dword ptr [eax + 4]
// 0065a7da  56                   push esi
// 0065a7db  57                   push edi
// 0065a7dc  8bf9                 mov edi, ecx
// 0065a7de  8b08                 mov ecx, dword ptr [eax]
// 0065a7e0  8b4008               mov eax, dword ptr [eax + 8]
// 0065a7e3  33f6                 xor esi, esi
// 0065a7e5  3935a8259600         cmp dword ptr [0x9625a8], esi
// 0065a7eb  894c2408             mov dword ptr [esp + 8], ecx
// 0065a7ef  8954240c             mov dword ptr [esp + 0xc], edx
// 0065a7f3  89442410             mov dword ptr [esp + 0x10], eax
// 0065a7f7  7e2b                 jle 0x65a824
// 0065a7f9  53                   push ebx
// 0065a7fa  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0065a7fe  8bff                 mov edi, edi
// 0065a800  53                   push ebx
// 0065a801  8d4c2410             lea ecx, [esp + 0x10]
// 0065a805  51                   push ecx
// 0065a806  56                   push esi
// 0065a807  8bcf                 mov ecx, edi
// 0065a809  e8e2feffff           call 0x65a6f0
// 0065a80e  d17c240c             sar dword ptr [esp + 0xc], 1
// 0065a812  d17c2410             sar dword ptr [esp + 0x10], 1
// 0065a816  d17c2414             sar dword ptr [esp + 0x14], 1
// 0065a81a  46                   inc esi
// 0065a81b  3b35a8259600         cmp esi, dword ptr [0x9625a8]
// 0065a821  7cdd                 jl 0x65a800
// 0065a823  5b                   pop ebx
// 0065a824  5f                   pop edi
// 0065a825  5e                   pop esi
// 0065a826  83c40c               add esp, 0xc
// 0065a829  c20800               ret 8

struct Key {
    int x, y, z;
};

extern int levelCount;

struct S {
    void append(int level, const Key& key, int value);
    void f(const Key& key, int value);
};

void S::f(const Key& key, int value)
{
    Key current = key;
    for (int level = 0; level < levelCount; ++level) {
        append(level, current, value);
        current.x >>= 1;
        current.y >>= 1;
        current.z >>= 1;
    }
}
