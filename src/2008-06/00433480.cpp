// from server: 100% by king_originala
// roc 2008-06 00433480  unit: CObjectBrowser  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433480
//
// 00433480  6aff                 push -1
// 00433482  6863fe7b00           push 0x7bfe63
// 00433487  64a100000000         mov eax, dword ptr fs:[0]
// 0043348d  50                   push eax
// 0043348e  64892500000000       mov dword ptr fs:[0], esp
// 00433495  51                   push ecx
// 00433496  56                   push esi
// 00433497  8bf1                 mov esi, ecx
// 00433499  89742404             mov dword ptr [esp + 4], esi
// 0043349d  c70694278100         mov dword ptr [esi], 0x812794
// 004334a3  8d8e70010000         lea ecx, [esi + 0x170]
// 004334a9  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004334b1  e8ca4d2d00           call 0x708280
// 004334b6  8d4e58               lea ecx, [esi + 0x58]
// 004334b9  c644241000           mov byte ptr [esp + 0x10], 0
// 004334be  e8bd4d2d00           call 0x708280
// 004334c3  8bce                 mov ecx, esi
// 004334c5  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004334cd  e8c6da2600           call 0x6a0f98
// 004334d2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004334d6  5e                   pop esi
// 004334d7  64890d00000000       mov dword ptr fs:[0], ecx
// 004334de  83c410               add esp, 0x10
// 004334e1  c3                   ret 

struct Base
{
    virtual ~Base();
    char padding[0x54];
};

struct Member
{
    char storage[0x118];
    ~Member();
};

struct CObjectBrowser : Base
{
    Member first;
    Member second;
    virtual ~CObjectBrowser();
};

CObjectBrowser::~CObjectBrowser()
{
}
