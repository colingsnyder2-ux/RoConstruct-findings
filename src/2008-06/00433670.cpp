// from server: 100% by king_originala
// roc 2008-06 00433670  unit: CMemberTreeView  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433670
//
// 00433670  6aff                 push -1
// 00433672  6878fe7b00           push 0x7bfe78
// 00433677  64a100000000         mov eax, dword ptr fs:[0]
// 0043367d  50                   push eax
// 0043367e  64892500000000       mov dword ptr fs:[0], esp
// 00433685  51                   push ecx
// 00433686  56                   push esi
// 00433687  8bf1                 mov esi, ecx
// 00433689  89742404             mov dword ptr [esp + 4], esi
// 0043368d  e83e862a00           call 0x6dbcd0
// 00433692  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00433698  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004336a0  c706b4298100         mov dword ptr [esi], 0x8129b4
// 004336a6  c746602c298100       mov dword ptr [esi + 0x60], 0x81292c
// 004336ad  e896d72600           call 0x6a0e48
// 004336b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004336b6  c686a800000001       mov byte ptr [esi + 0xa8], 1
// 004336bd  c786ac00000000000000 mov dword ptr [esi + 0xac], 0
// 004336c7  8bc6                 mov eax, esi
// 004336c9  5e                   pop esi
// 004336ca  64890d00000000       mov dword ptr fs:[0], ecx
// 004336d1  83c410               add esp, 0x10
// 004336d4  c3                   ret 

struct Primary
{
    virtual ~Primary();
    char padding[0x5c];
};

struct Secondary
{
    virtual ~Secondary();
    char padding[0x3c];
};

struct CXTTreeCtrlBase : Primary, Secondary
{
    CXTTreeCtrlBase();
    virtual ~CXTTreeCtrlBase();
};

struct Member
{
    Member();
    ~Member();
    char storage[8];
};

struct CMemberTreeView : CXTTreeCtrlBase
{
    CMemberTreeView();
    virtual ~CMemberTreeView();

    Member member;
    bool enabled;
    int value;
};

CMemberTreeView::CMemberTreeView()
{
    enabled = true;
    value = 0;
}
