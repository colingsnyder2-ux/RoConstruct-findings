// from server: 100% by ivan-grebe
// roc 2008-06 005ff520  unit: RBX::Mouse  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ff520
//
// 005ff520  6aff                 push -1
// 005ff522  68c8d37b00           push 0x7bd3c8
// 005ff527  64a100000000         mov eax, dword ptr fs:[0]
// 005ff52d  50                   push eax
// 005ff52e  64892500000000       mov dword ptr fs:[0], esp
// 005ff535  51                   push ecx
// 005ff536  56                   push esi
// 005ff537  8bf1                 mov esi, ecx
// 005ff539  89742404             mov dword ptr [esp + 4], esi
// 005ff53d  8d8e44010000         lea ecx, [esi + 0x144]
// 005ff543  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ff54b  ff1568248000         call dword ptr [0x802468]
// 005ff551  8bce                 mov ecx, esi
// 005ff553  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ff55b  e8e0aff5ff           call 0x55a540
// 005ff560  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff564  5e                   pop esi
// 005ff565  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff56c  83c410               add esp, 0x10
// 005ff56f  c3                   ret 

typedef void (__thiscall *StringDestructor)(void *);
typedef void (__cdecl *FreeFunction)(void *);

extern StringDestructor destroyString;
extern FreeFunction releaseMemory;

struct StringStorage
{
    char storage[28];
    ~StringStorage();
};

inline StringStorage::~StringStorage()
{
    destroyString(this);
}

struct Base
{
    char storage[0x144];
    ~Base();
};

struct S : Base
{
    StringStorage text;
    __declspec(noinline) ~S();
    void *destroy(unsigned int flags);
};

S::~S()
{
}

void *S::destroy(unsigned int flags)
{
    this->~S();
    if (flags & 1)
        releaseMemory(this);
    return this;
}
