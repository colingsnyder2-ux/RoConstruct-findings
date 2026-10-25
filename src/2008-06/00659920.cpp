// from server: 100% by king_originala
// roc 2008-06 00659920  unit: RBX::BallBallContact  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00659920
//
// 00659920  83ec10               sub esp, 0x10
// 00659923  8b442414             mov eax, dword ptr [esp + 0x14]
// 00659927  53                   push ebx
// 00659928  8d5801               lea ebx, [eax + 1]
// 0065992b  3b1da8259600         cmp ebx, dword ptr [0x9625a8]
// 00659931  894c2404             mov dword ptr [esp + 4], ecx
// 00659935  895c2418             mov dword ptr [esp + 0x18], ebx
// 00659939  0f8dc1000000         jge 0x659a00
// 0065993f  55                   push ebp
// 00659940  57                   push edi
// 00659941  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00659945  8beb                 mov ebp, ebx
// 00659947  2be8                 sub ebp, eax
// 00659949  56                   push esi
// 0065994a  8d9b00000000         lea ebx, [ebx]
// 00659950  8b17                 mov edx, dword ptr [edi]
// 00659952  8b4708               mov eax, dword ptr [edi + 8]
// 00659955  8b7704               mov esi, dword ptr [edi + 4]
// 00659958  8bcd                 mov ecx, ebp
// 0065995a  d3f8                 sar eax, cl
// 0065995c  d3fa                 sar edx, cl
// 0065995e  d3fe                 sar esi, cl
// 00659960  8d4c2414             lea ecx, [esp + 0x14]
// 00659964  8944241c             mov dword ptr [esp + 0x1c], eax
// 00659968  69c0b7fff904         imul eax, eax, 0x4f9ffb7
// 0065996e  89542414             mov dword ptr [esp + 0x14], edx
// 00659972  69d25df46604         imul edx, edx, 0x466f45d
// 00659978  89742418             mov dword ptr [esp + 0x18], esi
// 0065997c  69f69f402701         imul esi, esi, 0x127409f
// 00659982  51                   push ecx
// 00659983  33c2                 xor eax, edx
// 00659985  8bcb                 mov ecx, ebx
// 00659987  baffff0000           mov edx, 0xffff
// 0065998c  d3fa                 sar edx, cl
// 0065998e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00659992  33c6                 xor eax, esi
// 00659994  23c2                 and eax, edx
// 00659996  50                   push eax
// 00659997  53                   push ebx
// 00659998  e8d3fcffff           call 0x659670
// 0065999d  8b5708               mov edx, dword ptr [edi + 8]
// 006599a0  8b7704               mov esi, dword ptr [edi + 4]
// 006599a3  8d4dff               lea ecx, [ebp - 1]
// 006599a6  d3fa                 sar edx, cl
// 006599a8  d3fe                 sar esi, cl
// 006599aa  83e201               and edx, 1
// 006599ad  83e601               and esi, 1
// 006599b0  8d1456               lea edx, [esi + edx*2]
// 006599b3  8b37                 mov esi, dword ptr [edi]
// 006599b5  d3fe                 sar esi, cl
// 006599b7  83e601               and esi, 1
// 006599ba  8d3456               lea esi, [esi + edx*2]
// 006599bd  8bce                 mov ecx, esi
// 006599bf  b201                 mov dl, 1
// 006599c1  d2e2                 shl dl, cl
// 006599c3  b9ffff0000           mov ecx, 0xffff
// 006599c8  f6d2                 not dl
// 006599ca  205012               and byte ptr [eax + 0x12], dl
// 006599cd  66890c70             mov word ptr [eax + esi*2], cx
// 006599d1  83781400             cmp dword ptr [eax + 0x14], 0
// 006599d5  7526                 jne 0x6599fd
// 006599d7  80781200             cmp byte ptr [eax + 0x12], 0
// 006599db  7520                 jne 0x6599fd
// 006599dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006599e1  50                   push eax
// 006599e2  e8e9fdffff           call 0x6597d0
// 006599e7  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006599eb  43                   inc ebx
// 006599ec  45                   inc ebp
// 006599ed  3b1da8259600         cmp ebx, dword ptr [0x9625a8]
// 006599f3  895c2424             mov dword ptr [esp + 0x24], ebx
// 006599f7  0f8c53ffffff         jl 0x659950
// 006599fd  5e                   pop esi
// 006599fe  5f                   pop edi
// 006599ff  5d                   pop ebp
// 00659a00  5b                   pop ebx
// 00659a01  83c410               add esp, 0x10
// 00659a04  c20800               ret 8

struct Key {
    unsigned int a, b, c;
};

struct Node {
    char padding[28];
    Key key;
    Node* next;
};

extern int levelLimit;

struct S {
    Node* find(int level, unsigned int hash, const Key& key);
    void remove(Node* node);
    void f(int level, const Key& key);
};

void S::f(int level, const Key& key)
{
    for (int current = level + 1; current < levelLimit; ++current) {
        int shift = current - level;
        Key parent;
        parent.a = (int)key.a >> shift;
        parent.b = (int)key.b >> shift;
        parent.c = (int)key.c >> shift;

        Node* node = find(
            current,
            ((parent.c * 0x04f9ffb7u) ^
             (parent.a * 0x0466f45du) ^
             (parent.b * 0x0127409fu)) & (0xffff >> current),
            parent);

        int bit = shift - 1;
        int index = (((int)key.a >> bit) & 1) +
                    2 * ((((int)key.b >> bit) & 1) +
                         2 * (((int)key.c >> bit) & 1));

        node->padding[18] &= (unsigned char)~(1 << index);
        ((unsigned short*)node)[index] = 0xffff;

        if (*(int*)(node->padding + 20) != 0 ||
            node->padding[18] != 0)
            break;

        remove(node);
    }
}
