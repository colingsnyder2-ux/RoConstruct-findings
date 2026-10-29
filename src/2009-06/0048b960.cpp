// roc 2009-06 0048b960  unit: Ogre::RbxManualTextureLoader  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048b960
//
// 0048b960  6aff                 push -1
// 0048b962  68083a8600           push 0x863a08
// 0048b967  64a100000000         mov eax, dword ptr fs:[0]
// 0048b96d  50                   push eax
// 0048b96e  64892500000000       mov dword ptr fs:[0], esp
// 0048b975  51                   push ecx
// 0048b976  56                   push esi
// 0048b977  8bf1                 mov esi, ecx
// 0048b979  89742404             mov dword ptr [esp + 4], esi
// 0048b97d  8d4e20               lea ecx, [esi + 0x20]
// 0048b980  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048b988  ff15c4e48900         call dword ptr [0x89e4c4]
// 0048b98e  8bce                 mov ecx, esi
// 0048b990  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0048b998  ff15c4e48900         call dword ptr [0x89e4c4]
// 0048b99e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048b9a2  5e                   pop esi
// 0048b9a3  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b9aa  83c410               add esp, 0x10
// 0048b9ad  c3                   ret 
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