// roc 2009-12 00525390  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00525390
//
// 00525390  6aff                 push -1
// 00525392  6818859400           push 0x948518
// 00525397  64a100000000         mov eax, dword ptr fs:[0]
// 0052539d  50                   push eax
// 0052539e  64892500000000       mov dword ptr fs:[0], esp
// 005253a5  51                   push ecx
// 005253a6  56                   push esi
// 005253a7  8bf1                 mov esi, ecx
// 005253a9  89742404             mov dword ptr [esp + 4], esi
// 005253ad  8d4e20               lea ecx, [esi + 0x20]
// 005253b0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005253b8  ff15e4b69800         call dword ptr [0x98b6e4]
// 005253be  8bce                 mov ecx, esi
// 005253c0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005253c8  ff15e4b69800         call dword ptr [0x98b6e4]
// 005253ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005253d2  5e                   pop esi
// 005253d3  64890d00000000       mov dword ptr fs:[0], ecx
// 005253da  83c410               add esp, 0x10
// 005253dd  c3                   ret 
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