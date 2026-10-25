// from server: 100% by king_originala
// roc 2008-06 0049d140  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049d140
//
// 0049d140  6aff                 push -1
// 0049d142  6870737c00           push 0x7c7370
// 0049d147  64a100000000         mov eax, dword ptr fs:[0]
// 0049d14d  50                   push eax
// 0049d14e  64892500000000       mov dword ptr fs:[0], esp
// 0049d155  51                   push ecx
// 0049d156  56                   push esi
// 0049d157  8bf1                 mov esi, ecx
// 0049d159  89742404             mov dword ptr [esp + 4], esi
// 0049d15d  8d4e20               lea ecx, [esi + 0x20]
// 0049d160  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049d168  e8437b0f00           call 0x594cb0
// 0049d16d  8bce                 mov ecx, esi
// 0049d16f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0049d177  e854ebffff           call 0x49bcd0
// 0049d17c  8b06                 mov eax, dword ptr [esi]
// 0049d17e  50                   push eax
// 0049d17f  e8f6342000           call 0x6a067a
// 0049d184  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049d188  83c404               add esp, 4
// 0049d18b  5e                   pop esi
// 0049d18c  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d193  83c410               add esp, 0x10
// 0049d196  c3                   ret 

extern "C" void __cdecl releaseMemory(void *);

struct Pointer {
    void *value;
    __forceinline ~Pointer();
};

struct Base {
    Pointer pointer;
    char padding[28];
    void cleanup();
    __forceinline ~Base();
};

struct Member {
    void *object;
    bool criticalSection;
    ~Member();
};

struct S : Base {
    Member member;
    ~S();
};

__forceinline Pointer::~Pointer()
{
    releaseMemory(value);
}

__forceinline Base::~Base()
{
    cleanup();
}

S::~S()
{
}
