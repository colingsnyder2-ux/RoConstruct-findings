// roc 2010-06 008d5370  unit: Ogre::VertexStreamer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d5370
//
// 008d5370  6aff                 push -1
// 008d5372  68d8099a00           push 0x9a09d8
// 008d5377  64a100000000         mov eax, dword ptr fs:[0]
// 008d537d  50                   push eax
// 008d537e  64892500000000       mov dword ptr fs:[0], esp
// 008d5385  51                   push ecx
// 008d5386  56                   push esi
// 008d5387  8bf1                 mov esi, ecx
// 008d5389  89742404             mov dword ptr [esp + 4], esi
// 008d538d  8d4e20               lea ecx, [esi + 0x20]
// 008d5390  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008d5398  ff1500a49e00         call dword ptr [0x9ea400]
// 008d539e  8bce                 mov ecx, esi
// 008d53a0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008d53a8  ff1500a49e00         call dword ptr [0x9ea400]
// 008d53ae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d53b2  5e                   pop esi
// 008d53b3  64890d00000000       mov dword ptr fs:[0], ecx
// 008d53ba  83c410               add esp, 0x10
// 008d53bd  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern void (__thiscall *destroy_string)(void*);

struct StringStorage {
    char storage[32];
    ~StringStorage();
};

inline StringStorage::~StringStorage()
{
    destroy_string(this);
}

struct S {
    StringStorage first;
    StringStorage second;
    ~S();
};

S::~S()
{
}