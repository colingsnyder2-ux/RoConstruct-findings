// from server: 100% by tester
// roc 2008-06 00574630  unit: RBX::TextDisplay  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574630
//
// 00574630  6aff                 push -1
// 00574632  6868817d00           push 0x7d8168
// 00574637  64a100000000         mov eax, dword ptr fs:[0]
// 0057463d  50                   push eax
// 0057463e  64892500000000       mov dword ptr fs:[0], esp
// 00574645  51                   push ecx
// 00574646  56                   push esi
// 00574647  8bf1                 mov esi, ecx
// 00574649  89742404             mov dword ptr [esp + 4], esi
// 0057464d  8d8e44010000         lea ecx, [esi + 0x144]
// 00574653  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057465b  ff1568248000         call dword ptr [0x802468]
// 00574661  8bce                 mov ecx, esi
// 00574663  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0057466b  e8d0cee9ff           call 0x411540
// 00574670  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574674  5e                   pop esi
// 00574675  64890d00000000       mov dword ptr fs:[0], ecx
// 0057467c  83c410               add esp, 0x10
// 0057467f  c3                   ret 

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
