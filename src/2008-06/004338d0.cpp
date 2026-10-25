// from server: 100% by king_originala
// roc 2008-06 004338d0  unit: CDeclarationView  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004338d0
//
// 004338d0  6aff                 push -1
// 004338d2  6878fe7b00           push 0x7bfe78
// 004338d7  64a100000000         mov eax, dword ptr fs:[0]
// 004338dd  50                   push eax
// 004338de  64892500000000       mov dword ptr fs:[0], esp
// 004338e5  51                   push ecx
// 004338e6  56                   push esi
// 004338e7  8bf1                 mov esi, ecx
// 004338e9  89742404             mov dword ptr [esp + 4], esi
// 004338ed  e8de832a00           call 0x6dbcd0
// 004338f2  8d8ea0000000         lea ecx, [esi + 0xa0]
// 004338f8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00433900  c706ec258100         mov dword ptr [esi], 0x8125ec
// 00433906  c7466064258100       mov dword ptr [esi + 0x60], 0x812564
// 0043390d  e836d52600           call 0x6a0e48
// 00433912  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00433916  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 00433920  8bc6                 mov eax, esi
// 00433922  5e                   pop esi
// 00433923  64890d00000000       mov dword ptr fs:[0], ecx
// 0043392a  83c410               add esp, 0x10
// 0043392d  c3                   ret 

struct Primary {
    virtual ~Primary();
    char padding[0x5c];
};

struct Secondary {
    virtual ~Secondary();
    char padding[0x3c];
};

struct Base : Primary, Secondary {
    Base();
    virtual ~Base();
};

struct Member {
    Member();
    ~Member();
    char storage[8];
};

struct CDeclarationView : Base {
    Member member;
    int value;

    CDeclarationView();
    virtual ~CDeclarationView();
};

CDeclarationView::CDeclarationView()
    : Base(), member(), value(0)
{
}
