// from server: 100% by king_originala
// roc 2008-06 004333b0  unit: CClassTreeView  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004333b0
//
// 004333b0  6aff                 push -1
// 004333b2  6878fe7b00           push 0x7bfe78
// 004333b7  64a100000000         mov eax, dword ptr fs:[0]
// 004333bd  50                   push eax
// 004333be  64892500000000       mov dword ptr fs:[0], esp
// 004333c5  51                   push ecx
// 004333c6  56                   push esi
// 004333c7  8bf1                 mov esi, ecx
// 004333c9  89742404             mov dword ptr [esp + 4], esi
// 004333cd  c706ec258100         mov dword ptr [esi], 0x8125ec
// 004333d3  c7466064258100       mov dword ptr [esi + 0x60], 0x812564
// 004333da  8d8ea0000000         lea ecx, [esi + 0xa0]
// 004333e0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004333e8  e83dda2600           call 0x6a0e2a
// 004333ed  8bce                 mov ecx, esi
// 004333ef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004333f7  e804892a00           call 0x6dbd00
// 004333fc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00433400  5e                   pop esi
// 00433401  64890d00000000       mov dword ptr fs:[0], ecx
// 00433408  83c410               add esp, 0x10
// 0043340b  c3                   ret 

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

struct Base : Primary, Secondary
{
    virtual ~Base();
};

struct Member
{
    ~Member();
};

struct CClassTreeView : Base
{
    Member member;
    virtual ~CClassTreeView();
};

CClassTreeView::~CClassTreeView()
{
}
