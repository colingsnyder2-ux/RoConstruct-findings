// from server: 100% by king_originala
// roc 2008-06 0044d050  unit: CRobloxModule  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d050
//
// 0044d050  6aff                 push -1
// 0044d052  681b147c00           push 0x7c141b
// 0044d057  64a100000000         mov eax, dword ptr fs:[0]
// 0044d05d  50                   push eax
// 0044d05e  64892500000000       mov dword ptr fs:[0], esp
// 0044d065  51                   push ecx
// 0044d066  56                   push esi
// 0044d067  8bf1                 mov esi, ecx
// 0044d069  89742404             mov dword ptr [esp + 4], esi
// 0044d06d  8d4e2c               lea ecx, [esi + 0x2c]
// 0044d070  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0044d078  ff1568248000         call dword ptr [0x802468]
// 0044d07e  8d4e20               lea ecx, [esi + 0x20]
// 0044d081  c644241000           mov byte ptr [esp + 0x10], 0
// 0044d086  e8257c1400           call 0x594cb0
// 0044d08b  8bce                 mov ecx, esi
// 0044d08d  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0044d095  e836e7ffff           call 0x44b7d0
// 0044d09a  8b06                 mov eax, dword ptr [esi]
// 0044d09c  50                   push eax
// 0044d09d  e8d8352500           call 0x6a067a
// 0044d0a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044d0a6  83c404               add esp, 4
// 0044d0a9  5e                   pop esi
// 0044d0aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0044d0b1  83c410               add esp, 0x10
// 0044d0b4  c3                   ret 

extern "C" void (__thiscall *destroyString)(void *);
extern "C" void __cdecl releaseMemory(void *);

struct OwnedPointer {
    void *value;
    ~OwnedPointer();
};

struct Owner {
    OwnedPointer pointer;
    char reserved[28];
    void cleanup();
    ~Owner();
};

struct Lock {
    void *object;
    bool criticalSection;
    char reserved[7];
    ~Lock();
};

struct String {
    char storage[28];
    ~String();
};

struct CRobloxModule {
    Owner owner;
    Lock lock;
    String string;
    ~CRobloxModule();
};

__forceinline OwnedPointer::~OwnedPointer()
{
    releaseMemory(value);
}

__forceinline Owner::~Owner()
{
    cleanup();
}

__forceinline String::~String()
{
    destroyString(this);
}

CRobloxModule::~CRobloxModule()
{
}
