// from server: 100% by king_originala
// roc 2008-06 00654100  unit: RBX::ScoreHud  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00654100
//
// 00654100  6aff                 push -1
// 00654102  6860b97d00           push 0x7db960
// 00654107  64a100000000         mov eax, dword ptr fs:[0]
// 0065410d  50                   push eax
// 0065410e  64892500000000       mov dword ptr fs:[0], esp
// 00654115  83ec08               sub esp, 8
// 00654118  56                   push esi
// 00654119  8bf1                 mov esi, ecx
// 0065411b  57                   push edi
// 0065411c  89742408             mov dword ptr [esp + 8], esi
// 00654120  8d7e18               lea edi, [esi + 0x18]
// 00654123  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065412b  897c240c             mov dword ptr [esp + 0xc], edi
// 0065412f  8bcf                 mov ecx, edi
// 00654131  c644241801           mov byte ptr [esp + 0x18], 1
// 00654136  e89536dbff           call 0x4077d0
// 0065413b  8b3f                 mov edi, dword ptr [edi]
// 0065413d  57                   push edi
// 0065413e  e837c50400           call 0x6a067a
// 00654143  83c404               add esp, 4
// 00654146  8bce                 mov ecx, esi
// 00654148  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00654150  e88bf9ffff           call 0x653ae0
// 00654155  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00654159  5f                   pop edi
// 0065415a  5e                   pop esi
// 0065415b  64890d00000000       mov dword ptr fs:[0], ecx
// 00654162  83c414               add esp, 0x14
// 00654165  c3                   ret 

void __cdecl operator delete(void *) throw();

struct Base {
    unsigned char data[24];
    ~Base();
};

struct TreeStorage {
    void *head;
    unsigned char data[16];
    __forceinline ~TreeStorage();
};

struct Tree : TreeStorage {
    void clear();
    __forceinline ~Tree();
};

struct S : Base {
    Tree tree;
    ~S();
};

__forceinline TreeStorage::~TreeStorage()
{
    delete head;
}

__forceinline Tree::~Tree()
{
    clear();
}

S::~S()
{
}
