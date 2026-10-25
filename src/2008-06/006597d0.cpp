// from server: 100% by king_originala
// roc 2008-06 006597d0  unit: RBX::BallBallContact  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006597d0
//
// 006597d0  53                   push ebx
// 006597d1  55                   push ebp
// 006597d2  56                   push esi
// 006597d3  8b742410             mov esi, dword ptr [esp + 0x10]
// 006597d7  0fb74610             movzx eax, word ptr [esi + 0x10]
// 006597db  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 006597de  8be9                 mov ebp, ecx
// 006597e0  8d0440               lea eax, [eax + eax*2]
// 006597e3  8b4cc51c             mov ecx, dword ptr [ebp + eax*8 + 0x1c]
// 006597e7  2b4cc518             sub ecx, dword ptr [ebp + eax*8 + 0x18]
// 006597eb  57                   push edi
// 006597ec  8d7cc50c             lea edi, [ebp + eax*8 + 0xc]
// 006597f0  c1f903               sar ecx, 3
// 006597f3  3bd9                 cmp ebx, ecx
// 006597f5  7206                 jb 0x6597fd
// 006597f7  ff1590288000         call dword ptr [0x802890]
// 006597fd  8b570c               mov edx, dword ptr [edi + 0xc]
// 00659800  3974da04             cmp dword ptr [edx + ebx*8 + 4], esi
// 00659804  8d44da04             lea eax, [edx + ebx*8 + 4]
// 00659808  740f                 je 0x659819
// 0065980a  8d9b00000000         lea ebx, [ebx]
// 00659810  8b00                 mov eax, dword ptr [eax]
// 00659812  83c028               add eax, 0x28
// 00659815  3930                 cmp dword ptr [eax], esi
// 00659817  75f7                 jne 0x659810
// 00659819  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0065981c  8908                 mov dword ptr [eax], ecx
// 0065981e  8b5574               mov edx, dword ptr [ebp + 0x74]
// 00659821  5f                   pop edi
// 00659822  895628               mov dword ptr [esi + 0x28], edx
// 00659825  897574               mov dword ptr [ebp + 0x74], esi
// 00659828  5e                   pop esi
// 00659829  5d                   pop ebp
// 0065982a  5b                   pop ebx
// 0065982b  c20400               ret 4

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Node {
    char padding0[16];
    unsigned short bucket;
    char padding1[6];
    unsigned int index;
    char padding2[12];
    Node *next;
};

struct Entry {
    unsigned int value;
    Node *node;
};

struct Bucket {
    char padding[12];
    Entry *begin;
    Entry *end;
    Entry *capacity;
};

struct S {
    char padding0[12];
    Bucket buckets[4];
    char padding1[8];
    Node *freeList;

    void remove(Node *node);
};

void S::remove(Node *node)
{
    unsigned int index = node->index;
    Bucket *bucket = &buckets[node->bucket];

    if (index >= static_cast<unsigned int>(bucket->end - bucket->begin))
        invalid_parameter_noinfo();

    Node **link = &bucket->begin[index].node;
    while (*link != node)
        link = &(*link)->next;

    *link = node->next;
    node->next = freeList;
    freeList = node;
}
