// from server: 100% by king_originala
// roc 2008-06 004971c0  unit: RBX::Network::Players  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004971c0
//
// 004971c0  6aff                 push -1
// 004971c2  6838077d00           push 0x7d0738
// 004971c7  64a100000000         mov eax, dword ptr fs:[0]
// 004971cd  50                   push eax
// 004971ce  64892500000000       mov dword ptr fs:[0], esp
// 004971d5  51                   push ecx
// 004971d6  56                   push esi
// 004971d7  8bf1                 mov esi, ecx
// 004971d9  57                   push edi
// 004971da  89742408             mov dword ptr [esp + 8], esi
// 004971de  8b7e08               mov edi, dword ptr [esi + 8]
// 004971e1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004971e9  85ff                 test edi, edi
// 004971eb  7410                 je 0x4971fd
// 004971ed  8bcf                 mov ecx, edi
// 004971ef  e8bcea0f00           call 0x595cb0
// 004971f4  57                   push edi
// 004971f5  e880942000           call 0x6a067a
// 004971fa  83c404               add esp, 4
// 004971fd  8b7604               mov esi, dword ptr [esi + 4]
// 00497200  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00497208  85f6                 test esi, esi
// 0049720a  742a                 je 0x497236
// 0049720c  8d4604               lea eax, [esi + 4]
// 0049720f  83c9ff               or ecx, 0xffffffff
// 00497212  f00fc108             lock xadd dword ptr [eax], ecx
// 00497216  751e                 jne 0x497236
// 00497218  8b16                 mov edx, dword ptr [esi]
// 0049721a  8b4204               mov eax, dword ptr [edx + 4]
// 0049721d  8bce                 mov ecx, esi
// 0049721f  ffd0                 call eax
// 00497221  8d4e08               lea ecx, [esi + 8]
// 00497224  83caff               or edx, 0xffffffff
// 00497227  f00fc111             lock xadd dword ptr [ecx], edx
// 0049722b  7509                 jne 0x497236
// 0049722d  8b06                 mov eax, dword ptr [esi]
// 0049722f  8b5008               mov edx, dword ptr [eax + 8]
// 00497232  8bce                 mov ecx, esi
// 00497234  ffd2                 call edx
// 00497236  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049723a  5f                   pop edi
// 0049723b  5e                   pop esi
// 0049723c  64890d00000000       mov dword ptr fs:[0], ecx
// 00497243  83c410               add esp, 0x10
// 00497246  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void __cdecl operator delete(void*);

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

struct Payload {
    ~Payload();
};

struct S {
    Shared shared;
    Payload* payload;
    ~S();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

S::~S()
{
    delete payload;
}
