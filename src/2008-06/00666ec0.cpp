// from server: 100% by king_originala
// roc 2008-06 00666ec0  unit: RBX::HUMAN::FallingDown  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666ec0
//
// 00666ec0  6aff                 push -1
// 00666ec2  68b8c27d00           push 0x7dc2b8
// 00666ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00666ecd  50                   push eax
// 00666ece  64892500000000       mov dword ptr fs:[0], esp
// 00666ed5  83ec08               sub esp, 8
// 00666ed8  56                   push esi
// 00666ed9  8bf1                 mov esi, ecx
// 00666edb  89742408             mov dword ptr [esp + 8], esi
// 00666edf  c70610cd8400         mov dword ptr [esi], 0x84cd10
// 00666ee5  c7460408cd8400       mov dword ptr [esi + 4], 0x84cd08
// 00666eec  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00666ef4  e857ce1200           call 0x793d50
// 00666ef9  85c0                 test eax, eax
// 00666efb  7405                 je 0x666f02
// 00666efd  83c014               add eax, 0x14
// 00666f00  eb02                 jmp 0x666f04
// 00666f02  33c0                 xor eax, eax
// 00666f04  50                   push eax
// 00666f05  b9f4a29700           mov ecx, 0x97a2f4
// 00666f0a  e81147f0ff           call 0x56b620
// 00666f0f  85c0                 test eax, eax
// 00666f11  740f                 je 0x666f22
// 00666f13  6a00                 push 0
// 00666f15  8d4c240b             lea ecx, [esp + 0xb]
// 00666f19  51                   push ecx
// 00666f1a  8d4810               lea ecx, [eax + 0x10]
// 00666f1d  e8deaff7ff           call 0x5e1f00
// 00666f22  8bce                 mov ecx, esi
// 00666f24  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00666f2c  e88fc6fdff           call 0x6435c0
// 00666f31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00666f35  5e                   pop esi
// 00666f36  64890d00000000       mov dword ptr fs:[0], ecx
// 00666f3d  83c414               add esp, 0x14
// 00666f40  c3                   ret 

struct Base {
    virtual ~Base();
    char* get();
};

struct Secondary {
    virtual void action() = 0;
};

struct Container {
    void erase(char*, int);
};

struct Entry {
    char padding[16];
    Container container;
};

struct Registry {
    Entry* find(void*);
};

extern Registry registry;

struct FallingDown : Base, Secondary {
    virtual ~FallingDown();
    virtual void action();
};

FallingDown::~FallingDown()
{
    char token;
    char* object = get();
    Entry* entry = registry.find(object ? object + 20 : 0);
    if (entry)
        entry->container.erase(&token, 0);
}
