// from server: 100% by king_originala
// roc 2008-06 004336e0  unit: CMemberTreeView  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004336e0
//
// 004336e0  6aff                 push -1
// 004336e2  6878fe7b00           push 0x7bfe78
// 004336e7  64a100000000         mov eax, dword ptr fs:[0]
// 004336ed  50                   push eax
// 004336ee  64892500000000       mov dword ptr fs:[0], esp
// 004336f5  51                   push ecx
// 004336f6  56                   push esi
// 004336f7  8bf1                 mov esi, ecx
// 004336f9  89742404             mov dword ptr [esp + 4], esi
// 004336fd  c706b4298100         mov dword ptr [esi], 0x8129b4
// 00433703  c746602c298100       mov dword ptr [esi + 0x60], 0x81292c
// 0043370a  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00433710  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00433718  e80dd72600           call 0x6a0e2a
// 0043371d  8bce                 mov ecx, esi
// 0043371f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00433727  e8d4852a00           call 0x6dbd00
// 0043372c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00433730  5e                   pop esi
// 00433731  64890d00000000       mov dword ptr fs:[0], ecx
// 00433738  83c410               add esp, 0x10
// 0043373b  c3                   ret 

struct Primary {
    virtual ~Primary();
    char padding[0x5c];
};

struct Secondary {
    virtual ~Secondary();
    char padding[0x3c];
};

struct CXTTreeView : Primary, Secondary {
    virtual ~CXTTreeView();
};

struct Member {
    ~Member();
};

struct CMemberTreeView : CXTTreeView {
    Member member;
    virtual ~CMemberTreeView();
};

CMemberTreeView::~CMemberTreeView()
{
}
