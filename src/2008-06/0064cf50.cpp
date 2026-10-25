// from server: 100% by king_originala
// roc 2008-06 0064cf50  unit: RBX::ClumpStage  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064cf50
//
// 0064cf50  6aff                 push -1
// 0064cf52  6888b17d00           push 0x7db188
// 0064cf57  64a100000000         mov eax, dword ptr fs:[0]
// 0064cf5d  50                   push eax
// 0064cf5e  64892500000000       mov dword ptr fs:[0], esp
// 0064cf65  51                   push ecx
// 0064cf66  56                   push esi
// 0064cf67  8bf1                 mov esi, ecx
// 0064cf69  89742404             mov dword ptr [esp + 4], esi
// 0064cf6d  c7064cb18400         mov dword ptr [esi], 0x84b14c
// 0064cf73  8d4e10               lea ecx, [esi + 0x10]
// 0064cf76  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064cf7e  e8ade2ffff           call 0x64b230
// 0064cf83  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064cf86  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0064cf8e  5e                   pop esi
// 0064cf8f  85c9                 test ecx, ecx
// 0064cf91  7408                 je 0x64cf9b
// 0064cf93  8b01                 mov eax, dword ptr [ecx]
// 0064cf95  8b10                 mov edx, dword ptr [eax]
// 0064cf97  6a01                 push 1
// 0064cf99  ffd2                 call edx
// 0064cf9b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064cf9f  64890d00000000       mov dword ptr fs:[0], ecx
// 0064cfa6  83c410               add esp, 0x10
// 0064cfa9  c3                   ret 

struct Stage {
    virtual ~Stage();
};

struct StageOwner {
    unsigned int reserved0;
    Stage* owned;
    unsigned int reserved1;
    ~StageOwner();
};

inline StageOwner::~StageOwner()
{
    if (owned)
        delete owned;
}

struct Collection {
    ~Collection();
};

struct ClumpStage : StageOwner {
    Collection collection;
    virtual ~ClumpStage();
};

ClumpStage::~ClumpStage()
{
}
