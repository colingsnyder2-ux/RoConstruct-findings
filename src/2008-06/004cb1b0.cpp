// from server: 100% by king_originala
// roc 2008-06 004cb1b0  unit: RBX::Network::RoundRobinPhysicsSender  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb1b0
//
// 004cb1b0  51                   push ecx
// 004cb1b1  56                   push esi
// 004cb1b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004cb1b6  33c0                 xor eax, eax
// 004cb1b8  50                   push eax
// 004cb1b9  89442408             mov dword ptr [esp + 8], eax
// 004cb1bd  88442408             mov byte ptr [esp + 8], al
// 004cb1c1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cb1c5  8b542408             mov edx, dword ptr [esp + 8]
// 004cb1c9  50                   push eax
// 004cb1ca  51                   push ecx
// 004cb1cb  52                   push edx
// 004cb1cc  56                   push esi
// 004cb1cd  83c104               add ecx, 4
// 004cb1d0  e87bf2ffff           call 0x4ca450
// 004cb1d5  8bc6                 mov eax, esi
// 004cb1d7  5e                   pop esi
// 004cb1d8  59                   pop ecx
// 004cb1d9  c20800               ret 8

struct Tree {
    void insert(void *, unsigned int, void *, const void *, int);
};

struct S {
    char padding[4];
    Tree tree;
    void *f(void *, const void *);
};

void *S::f(void *result, const void *value)
{
    volatile union {
        unsigned int word;
        unsigned char byte;
    } tag;

    tag.word = 0;
    tag.byte = 0;
    tree.insert(result, tag.word, this, value, 0);
    return result;
}
