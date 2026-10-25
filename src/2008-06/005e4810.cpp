// from server: 100% by king_originala
// roc 2008-06 005e4810  unit: RBX::VWeld::?$FactoryProduct  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4810
//
// 005e4810  6aff                 push -1
// 005e4812  685c677d00           push 0x7d675c
// 005e4817  64a100000000         mov eax, dword ptr fs:[0]
// 005e481d  50                   push eax
// 005e481e  64892500000000       mov dword ptr fs:[0], esp
// 005e4825  83ec24               sub esp, 0x24
// 005e4828  56                   push esi
// 005e4829  57                   push edi
// 005e482a  8bf1                 mov esi, ecx
// 005e482c  6888000000           push 0x88
// 005e4831  8974240c             mov dword ptr [esp + 0xc], esi
// 005e4835  e8e6c00b00           call 0x6a0920
// 005e483a  8bf8                 mov edi, eax
// 005e483c  83c404               add esp, 4
// 005e483f  897c240c             mov dword ptr [esp + 0xc], edi
// 005e4843  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e484b  85ff                 test edi, edi
// 005e484d  740f                 je 0x5e485e
// 005e484f  8bcf                 mov ecx, edi
// 005e4851  e84a0e0600           call 0x6456a0
// 005e4856  c707bce08300         mov dword ptr [edi], 0x83e0bc
// 005e485c  eb02                 jmp 0x5e4860
// 005e485e  33ff                 xor edi, edi
// 005e4860  57                   push edi
// 005e4861  8bce                 mov ecx, esi
// 005e4863  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005e486b  e8a0f6ffff           call 0x5e3f10
// 005e4870  688cf28300           push 0x83f28c
// 005e4875  8d4c2414             lea ecx, [esp + 0x14]
// 005e4879  c744243801000000     mov dword ptr [esp + 0x38], 1
// 005e4881  c7064cf28300         mov dword ptr [esi], 0x83f24c
// 005e4887  c7461040f28300       mov dword ptr [esi + 0x10], 0x83f240
// 005e488e  c7461438f28300       mov dword ptr [esi + 0x14], 0x83f238
// 005e4895  c7462030f28300       mov dword ptr [esi + 0x20], 0x83f230
// 005e489c  c7462420f28300       mov dword ptr [esi + 0x24], 0x83f220
// 005e48a3  c7464410f28300       mov dword ptr [esi + 0x44], 0x83f210
// 005e48aa  c7466400f28300       mov dword ptr [esi + 0x64], 0x83f200
// 005e48b1  c78684000000f0f18300 mov dword ptr [esi + 0x84], 0x83f1f0
// 005e48bb  c786a4000000e0f18300 mov dword ptr [esi + 0xa4], 0x83f1e0
// 005e48c5  c786c4000000d0f18300 mov dword ptr [esi + 0xc4], 0x83f1d0
// 005e48cf  c78630010000b8f18300 mov dword ptr [esi + 0x130], 0x83f1b8
// 005e48d9  ff1558248000         call dword ptr [0x802458]
// 005e48df  8d442410             lea eax, [esp + 0x10]
// 005e48e3  50                   push eax
// 005e48e4  8bce                 mov ecx, esi
// 005e48e6  c644243802           mov byte ptr [esp + 0x38], 2
// 005e48eb  e8a066f7ff           call 0x55af90
// 005e48f0  8d4c2410             lea ecx, [esp + 0x10]
// 005e48f4  c644243401           mov byte ptr [esp + 0x34], 1
// 005e48f9  ff1568248000         call dword ptr [0x802468]
// 005e48ff  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e4903  5f                   pop edi
// 005e4904  8bc6                 mov eax, esi
// 005e4906  5e                   pop esi
// 005e4907  64890d00000000       mov dword ptr fs:[0], ecx
// 005e490e  83c430               add esp, 0x30
// 005e4911  c3                   ret 

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct String;
extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

__forceinline String::String(const char* text) {
    stringConstruct(this, text);
}

__forceinline String::~String() {
    stringDestroy(this);
}

struct Joint {
    unsigned int words[34];
    Joint();
};

struct WeldJoint : Joint {
    WeldJoint();
};

__forceinline WeldJoint::WeldJoint() : Joint() {
    words[0] = 0x83e0bc;
}

struct Base {
    unsigned int words[77];
    Base(Joint*);
    ~Base();
    void setValue(const String&);
};

struct S : Base {
    S();
};

S::S() : Base(new WeldJoint) {
    words[0] = 0x83f24c;
    words[4] = 0x83f240;
    words[5] = 0x83f238;
    words[8] = 0x83f230;
    words[9] = 0x83f220;
    words[17] = 0x83f210;
    words[25] = 0x83f200;
    words[33] = 0x83f1f0;
    words[41] = 0x83f1e0;
    words[49] = 0x83f1d0;
    words[76] = 0x83f1b8;
    String name(reinterpret_cast<const char*>(0x83f28c));
    setValue(name);
}
