// roc 2009-12 0049a6b0  unit: Ogre::RbxMeshPartAdapter::??fillVertices::?L::FileLoader  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049a6b0
//
// 0049a6b0  6aff                 push -1
// 0049a6b2  687c3c9300           push 0x933c7c
// 0049a6b7  64a100000000         mov eax, dword ptr fs:[0]
// 0049a6bd  50                   push eax
// 0049a6be  64892500000000       mov dword ptr fs:[0], esp
// 0049a6c5  51                   push ecx
// 0049a6c6  56                   push esi
// 0049a6c7  8bf1                 mov esi, ecx
// 0049a6c9  89742404             mov dword ptr [esp + 4], esi
// 0049a6cd  8d4e20               lea ecx, [esi + 0x20]
// 0049a6d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049a6d8  ff15ecbc9800         call dword ptr [0x98bcec]
// 0049a6de  8d4e04               lea ecx, [esi + 4]
// 0049a6e1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0049a6e9  ff15e4b69800         call dword ptr [0x98b6e4]
// 0049a6ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049a6f3  5e                   pop esi
// 0049a6f4  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a6fb  83c410               add esp, 0x10
// 0049a6fe  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern void (__thiscall *destroy_string)(void *);

struct String
{
    char storage[28];
    ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct S
{
    int prefix;
    String first;
    String second;
    ~S();
};

S::~S()
{
}