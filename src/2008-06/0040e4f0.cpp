// from server: 100% by colin
// roc 2008-06 0040e4f0  unit: CNullDoc  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e4f0
//
// 0040e4f0  6aff                 push -1
// 0040e4f2  681afa7b00           push 0x7bfa1a
// 0040e4f7  64a100000000         mov eax, dword ptr fs:[0]
// 0040e4fd  50                   push eax
// 0040e4fe  64892500000000       mov dword ptr fs:[0], esp
// 0040e505  51                   push ecx
// 0040e506  56                   push esi
// 0040e507  6a58                 push 0x58
// 0040e509  e812242900           call 0x6a0920
// 0040e50e  8bf0                 mov esi, eax
// 0040e510  83c404               add esp, 4
// 0040e513  89742404             mov dword ptr [esp + 4], esi
// 0040e517  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040e51f  85f6                 test esi, esi
// 0040e521  7426                 je 0x40e549
// 0040e523  8bce                 mov ecx, esi
// 0040e525  e856242900           call 0x6a0980
// 0040e52a  c706c4d28000         mov dword ptr [esi], 0x80d2c4
// 0040e530  c7465400000000       mov dword ptr [esi + 0x54], 0
// 0040e537  8bc6                 mov eax, esi
// 0040e539  5e                   pop esi
// 0040e53a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040e53e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e545  83c410               add esp, 0x10
// 0040e548  c3                   ret 
// 0040e549  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e54d  33c0                 xor eax, eax
// 0040e54f  5e                   pop esi
// 0040e550  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e557  83c410               add esp, 0x10
// 0040e55a  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct BaseView {
    BaseView();
    virtual ~BaseView();
    unsigned char storage[0x50];
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
