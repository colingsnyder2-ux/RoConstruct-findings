// roc 2011-06 00937c40  unit: Ogre::VertexStreamer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00937c40
//
// 00937c40  6aff                 push -1
// 00937c42  68f81f9e00           push 0x9e1ff8
// 00937c47  64a100000000         mov eax, dword ptr fs:[0]
// 00937c4d  50                   push eax
// 00937c4e  64892500000000       mov dword ptr fs:[0], esp
// 00937c55  51                   push ecx
// 00937c56  56                   push esi
// 00937c57  8bf1                 mov esi, ecx
// 00937c59  89742404             mov dword ptr [esp + 4], esi
// 00937c5d  8d4e20               lea ecx, [esi + 0x20]
// 00937c60  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00937c68  ff15d004a400         call dword ptr [0xa404d0]
// 00937c6e  8bce                 mov ecx, esi
// 00937c70  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00937c78  ff15d004a400         call dword ptr [0xa404d0]
// 00937c7e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00937c82  5e                   pop esi
// 00937c83  64890d00000000       mov dword ptr fs:[0], ecx
// 00937c8a  83c410               add esp, 0x10
// 00937c8d  c3                   ret 
// copied from an identical function in another client (function ??1S@ns_ROCX00000b@@QAE@XZ)

namespace ns_ROCX00000b {
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
}
