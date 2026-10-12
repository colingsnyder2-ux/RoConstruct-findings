// from server: 79% by king_originala
// roc 2008-06 005c4790  unit: RBX::VVisit::?$FactoryProduct  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4790
//
// 005c4790  6aff                 push -1
// 005c4792  6837497d00           push 0x7d4937
// 005c4797  64a100000000         mov eax, dword ptr fs:[0]
// 005c479d  50                   push eax
// 005c479e  64892500000000       mov dword ptr fs:[0], esp
// 005c47a5  51                   push ecx
// 005c47a6  56                   push esi
// 005c47a7  8bf1                 mov esi, ecx
// 005c47a9  57                   push edi
// 005c47aa  89742408             mov dword ptr [esp + 8], esi
// 005c47ae  c706b48d8300         mov dword ptr [esi], 0x838db4
// 005c47b4  c74610a88d8300       mov dword ptr [esi + 0x10], 0x838da8
// 005c47bb  c74614a08d8300       mov dword ptr [esi + 0x14], 0x838da0
// 005c47c2  c74620988d8300       mov dword ptr [esi + 0x20], 0x838d98
// 005c47c9  c74624888d8300       mov dword ptr [esi + 0x24], 0x838d88
// 005c47d0  c74644788d8300       mov dword ptr [esi + 0x44], 0x838d78
// 005c47d7  c74664688d8300       mov dword ptr [esi + 0x64], 0x838d68
// 005c47de  c78684000000588d8300 mov dword ptr [esi + 0x84], 0x838d58
// 005c47e8  c786a4000000488d8300 mov dword ptr [esi + 0xa4], 0x838d48
// 005c47f2  c786c4000000388d8300 mov dword ptr [esi + 0xc4], 0x838d38
// 005c47fc  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 005c4802  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005c480a  85ff                 test edi, edi
// 005c480c  7410                 je 0x5c481e
// 005c480e  8bcf                 mov ecx, edi
// 005c4810  e89b14fdff           call 0x595cb0
// 005c4815  57                   push edi
// 005c4816  e85fbe0d00           call 0x6a067a
// 005c481b  83c404               add esp, 4
// 005c481e  8d8e30010000         lea ecx, [esi + 0x130]
// 005c4824  c644241400           mov byte ptr [esp + 0x14], 0
// 005c4829  ff1568248000         call dword ptr [0x802468]
// 005c482f  8bce                 mov ecx, esi
// 005c4831  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005c4839  e812fcffff           call 0x5c4450
// 005c483e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c4842  5f                   pop edi
// 005c4843  5e                   pop esi
// 005c4844  64890d00000000       mov dword ptr fs:[0], ecx
// 005c484b  83c410               add esp, 0x10
// 005c484e  c3                   ret 

typedef unsigned long DWORD;

struct Worker {
    ~Worker();
};

void __cdecl operator delete(void *);

struct Base {
    unsigned char storage[0x130];
    ~Base();
};

typedef void (__thiscall *StringDestructor)(void *);

struct StringStorage {
    unsigned char storage[0x1c];
    ~StringStorage() {
        StringDestructor destroy =
            *reinterpret_cast<StringDestructor const *>(0x802468);
        destroy(this);
    }
};

struct S : Base {
    StringStorage name;
    Worker *worker;
    ~S();
};

S::~S()
{
    DWORD *p = reinterpret_cast<DWORD *>(this);
    p[0] = 0x838db4;
    p[4] = 0x838da8;
    p[5] = 0x838da0;
    p[8] = 0x838d98;
    p[9] = 0x838d88;
    p[17] = 0x838d78;
    p[25] = 0x838d68;
    p[33] = 0x838d58;
    p[41] = 0x838d48;
    p[49] = 0x838d38;
    delete worker;
}
