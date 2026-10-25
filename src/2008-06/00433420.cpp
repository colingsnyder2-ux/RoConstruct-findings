// from server: 100% by king_originala
// roc 2008-06 00433420  unit: CObjectBrowser  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433420
//
// 00433420  6aff                 push -1
// 00433422  6863fe7b00           push 0x7bfe63
// 00433427  64a100000000         mov eax, dword ptr fs:[0]
// 0043342d  50                   push eax
// 0043342e  64892500000000       mov dword ptr fs:[0], esp
// 00433435  51                   push ecx
// 00433436  56                   push esi
// 00433437  8bf1                 mov esi, ecx
// 00433439  89742404             mov dword ptr [esp + 4], esi
// 0043343d  e85cdb2600           call 0x6a0f9e
// 00433442  8d4e58               lea ecx, [esi + 0x58]
// 00433445  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0043344d  c70694278100         mov dword ptr [esi], 0x812794
// 00433453  e8f8572d00           call 0x708c50
// 00433458  8d8e70010000         lea ecx, [esi + 0x170]
// 0043345e  c644241001           mov byte ptr [esp + 0x10], 1
// 00433463  e8e8572d00           call 0x708c50
// 00433468  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043346c  8bc6                 mov eax, esi
// 0043346e  5e                   pop esi
// 0043346f  64890d00000000       mov dword ptr fs:[0], ecx
// 00433476  83c410               add esp, 0x10
// 00433479  c3                   ret 

struct Window
{
    virtual ~Window();
    Window();

    char storage[0x54];
};

struct Splitter
{
    Splitter();
    ~Splitter();

    char storage[0x118];
};

struct CObjectBrowser : Window
{
    Splitter first;
    Splitter second;

    CObjectBrowser();
    virtual ~CObjectBrowser();
};

CObjectBrowser::CObjectBrowser()
{
}
