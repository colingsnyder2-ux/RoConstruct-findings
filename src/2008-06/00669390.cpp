// from server: 100% by king_originala
// roc 2008-06 00669390  unit: RBX::TreeStage  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669390
//
// 00669390  6aff                 push -1
// 00669392  684ec37d00           push 0x7dc34e
// 00669397  64a100000000         mov eax, dword ptr fs:[0]
// 0066939d  50                   push eax
// 0066939e  64892500000000       mov dword ptr fs:[0], esp
// 006693a5  51                   push ecx
// 006693a6  56                   push esi
// 006693a7  8bf1                 mov esi, ecx
// 006693a9  89742404             mov dword ptr [esp + 4], esi
// 006693ad  c70694cf8400         mov dword ptr [esi], 0x84cf94
// 006693b3  8d4e58               lea ecx, [esi + 0x58]
// 006693b6  c744241002000000     mov dword ptr [esp + 0x10], 2
// 006693be  e86d1efeff           call 0x64b230
// 006693c3  8d4e38               lea ecx, [esi + 0x38]
// 006693c6  c644241001           mov byte ptr [esp + 0x10], 1
// 006693cb  e8601efeff           call 0x64b230
// 006693d0  8d4e18               lea ecx, [esi + 0x18]
// 006693d3  c644241000           mov byte ptr [esp + 0x10], 0
// 006693d8  e8531efeff           call 0x64b230
// 006693dd  8b4e08               mov ecx, dword ptr [esi + 8]
// 006693e0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006693e8  5e                   pop esi
// 006693e9  85c9                 test ecx, ecx
// 006693eb  7408                 je 0x6693f5
// 006693ed  8b01                 mov eax, dword ptr [ecx]
// 006693ef  8b10                 mov edx, dword ptr [eax]
// 006693f1  6a01                 push 1
// 006693f3  ffd2                 call edx
// 006693f5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006693f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00669400  83c410               add esp, 0x10
// 00669403  c3                   ret 

struct Resource {
    virtual ~Resource();
};

struct Owner {
    Resource* pointer;
    ~Owner();
};

__forceinline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

struct StageData {
    unsigned char data[32];
    ~StageData();
};

struct TreeStage {
    virtual ~TreeStage();

    unsigned int reserved;
    Owner owner;
    unsigned char padding[12];
    StageData first;
    StageData second;
    StageData third;
};

TreeStage::~TreeStage()
{
}
