// from server: 100% by king_originala
// roc 2008-06 004633b0  unit: Scintilla::CScintillaView  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004633b0
//
// 004633b0  6aff                 push -1
// 004633b2  681afa7b00           push 0x7bfa1a
// 004633b7  64a100000000         mov eax, dword ptr fs:[0]
// 004633bd  50                   push eax
// 004633be  64892500000000       mov dword ptr fs:[0], esp
// 004633c5  51                   push ecx
// 004633c6  56                   push esi
// 004633c7  68a0010000           push 0x1a0
// 004633cc  e84fd52300           call 0x6a0920
// 004633d1  8bf0                 mov esi, eax
// 004633d3  83c404               add esp, 4
// 004633d6  89742404             mov dword ptr [esp + 4], esi
// 004633da  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004633e2  85f6                 test esi, esi
// 004633e4  7429                 je 0x46340f
// 004633e6  8bce                 mov ecx, esi
// 004633e8  e85be02300           call 0x6a1448
// 004633ed  c706e4ac8100         mov dword ptr [esi], 0x81ace4
// 004633f3  c7869c01000000000000 mov dword ptr [esi + 0x19c], 0
// 004633fd  8bc6                 mov eax, esi
// 004633ff  5e                   pop esi
// 00463400  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00463404  64890d00000000       mov dword ptr fs:[0], ecx
// 0046340b  83c410               add esp, 0x10
// 0046340e  c3                   ret 
// 0046340f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00463413  33c0                 xor eax, eax
// 00463415  5e                   pop esi
// 00463416  64890d00000000       mov dword ptr fs:[0], ecx
// 0046341d  83c410               add esp, 0x10
// 00463420  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct BaseView {
    BaseView();
    virtual ~BaseView();
    unsigned char storage[0x198];
};

struct View : BaseView {
    View();
    virtual ~View();
    int state;
};

inline View::View() : state(0) {}

View* __cdecl CreateView()
{
    return new View;
}
