// from server: 100% by king_originala
// roc 2008-06 00467770  unit: DxUserInput  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467770
//
// 00467770  6aff                 push -1
// 00467772  68eb357c00           push 0x7c35eb
// 00467777  64a100000000         mov eax, dword ptr fs:[0]
// 0046777d  50                   push eax
// 0046777e  64892500000000       mov dword ptr fs:[0], esp
// 00467785  51                   push ecx
// 00467786  56                   push esi
// 00467787  8bf1                 mov esi, ecx
// 00467789  89742404             mov dword ptr [esp + 4], esi
// 0046778d  8b4624               mov eax, dword ptr [esi + 0x24]
// 00467790  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00467798  85c0                 test eax, eax
// 0046779a  742c                 je 0x4677c8
// 0046779c  83c004               add eax, 4
// 0046779f  50                   push eax
// 004677a0  ff15ac218000         call dword ptr [0x8021ac]
// 004677a6  85c0                 test eax, eax
// 004677a8  7517                 jne 0x4677c1
// 004677aa  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004677ad  e8de35ffff           call 0x45ad90
// 004677b2  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004677b5  85c9                 test ecx, ecx
// 004677b7  7408                 je 0x4677c1
// 004677b9  8b01                 mov eax, dword ptr [ecx]
// 004677bb  8b10                 mov edx, dword ptr [eax]
// 004677bd  6a01                 push 1
// 004677bf  ffd2                 call edx
// 004677c1  c7462400000000       mov dword ptr [esi + 0x24], 0
// 004677c8  8d4e04               lea ecx, [esi + 4]
// 004677cb  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004677d3  ff1568248000         call dword ptr [0x802468]
// 004677d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004677dd  5e                   pop esi
// 004677de  64890d00000000       mov dword ptr fs:[0], ecx
// 004677e5  83c410               add esp, 0x10
// 004677e8  c3                   ret 

extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

typedef void (__thiscall *StringDestructor)(void *);
extern StringDestructor destroyString;

struct StringStorage {
    char storage[32];
    ~StringStorage() { destroyString(this); }
};

struct Control {
    virtual ~Control();
    volatile long references;
    void dispose();
};

struct S_func_00467770 {
    char pad0[4];
    StringStorage text;
    Control *control;

    ~S_func_00467770();
};

S_func_00467770::~S_func_00467770()
{
    if (control) {
        if (InterlockedDecrement(&control->references) == 0) {
            control->dispose();
            if (control)
                delete control;
        }
        control = 0;
    }
}
