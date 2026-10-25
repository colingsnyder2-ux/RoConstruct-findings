// from server: 100% by king_originala
// roc 2008-06 00460000  unit: Scintilla::CScintillaCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460000
//
// 00460000  6aff                 push -1
// 00460002  68d8307c00           push 0x7c30d8
// 00460007  64a100000000         mov eax, dword ptr fs:[0]
// 0046000d  50                   push eax
// 0046000e  64892500000000       mov dword ptr fs:[0], esp
// 00460015  51                   push ecx
// 00460016  56                   push esi
// 00460017  8bf1                 mov esi, ecx
// 00460019  89742404             mov dword ptr [esp + 4], esi
// 0046001d  c70654a78100         mov dword ptr [esi], 0x81a754
// 00460023  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046002b  e8d4062400           call 0x6a0704
// 00460030  8bce                 mov ecx, esi
// 00460032  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0046003a  e837102400           call 0x6a1076
// 0046003f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00460043  5e                   pop esi
// 00460044  64890d00000000       mov dword ptr fs:[0], ecx
// 0046004b  83c410               add esp, 0x10
// 0046004e  c3                   ret 

struct Base {
    virtual ~Base();
    void cleanup();
};

struct S : Base {
    virtual ~S();
};

S::~S()
{
    cleanup();
}
