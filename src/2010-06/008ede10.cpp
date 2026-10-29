// roc 2010-06 008ede10  unit: Ogre::RbxMeshPartAdapter::??fillVertices::?P::FileLoader  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ede10
//
// 008ede10  6aff                 push -1
// 008ede12  68bc5f9800           push 0x985fbc
// 008ede17  64a100000000         mov eax, dword ptr fs:[0]
// 008ede1d  50                   push eax
// 008ede1e  64892500000000       mov dword ptr fs:[0], esp
// 008ede25  51                   push ecx
// 008ede26  56                   push esi
// 008ede27  8bf1                 mov esi, ecx
// 008ede29  89742404             mov dword ptr [esp + 4], esi
// 008ede2d  8d4e20               lea ecx, [esi + 0x20]
// 008ede30  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008ede38  ff150cb89e00         call dword ptr [0x9eb80c]
// 008ede3e  8d4e04               lea ecx, [esi + 4]
// 008ede41  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008ede49  ff1500a49e00         call dword ptr [0x9ea400]
// 008ede4f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ede53  5e                   pop esi
// 008ede54  64890d00000000       mov dword ptr fs:[0], ecx
// 008ede5b  83c410               add esp, 0x10
// 008ede5e  c3                   ret 
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