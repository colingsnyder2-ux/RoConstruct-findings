// from server: 100% by king_originala
// roc 2008-06 00493210  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00493210
//
// 00493210  6aff                 push -1
// 00493212  6868667c00           push 0x7c6668
// 00493217  64a100000000         mov eax, dword ptr fs:[0]
// 0049321d  50                   push eax
// 0049321e  64892500000000       mov dword ptr fs:[0], esp
// 00493225  51                   push ecx
// 00493226  56                   push esi
// 00493227  8bf1                 mov esi, ecx
// 00493229  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049322d  6a00                 push 0
// 0049322f  83ec14               sub esp, 0x14
// 00493232  8bc4                 mov eax, esp
// 00493234  8908                 mov dword ptr [eax], ecx
// 00493236  8b542434             mov edx, dword ptr [esp + 0x34]
// 0049323a  895004               mov dword ptr [eax + 4], edx
// 0049323d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00493241  894808               mov dword ptr [eax + 8], ecx
// 00493244  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00493248  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00493250  8964241c             mov dword ptr [esp + 0x1c], esp
// 00493254  85c9                 test ecx, ecx
// 00493256  740c                 je 0x493264
// 00493258  83c104               add ecx, 4
// 0049325b  ba01000000           mov edx, 1
// 00493260  f00fc111             lock xadd dword ptr [ecx], edx
// 00493264  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00493268  89480c               mov dword ptr [eax + 0xc], ecx
// 0049326b  8b542440             mov edx, dword ptr [esp + 0x40]
// 0049326f  895010               mov dword ptr [eax + 0x10], edx
// 00493272  8b442440             mov eax, dword ptr [esp + 0x40]
// 00493276  85c0                 test eax, eax
// 00493278  740c                 je 0x493286
// 0049327a  83c004               add eax, 4
// 0049327d  b901000000           mov ecx, 1
// 00493282  f00fc108             lock xadd dword ptr [eax], ecx
// 00493286  8bce                 mov ecx, esi
// 00493288  e813fcffff           call 0x492ea0
// 0049328d  8d4c241c             lea ecx, [esp + 0x1c]
// 00493291  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00493299  e8c2f9f8ff           call 0x422c60
// 0049329e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004932a2  8bc6                 mov eax, esi
// 004932a4  64890d00000000       mov dword ptr fs:[0], ecx
// 004932ab  5e                   pop esi
// 004932ac  83c410               add esp, 0x10
// 004932af  c21800               ret 0x18

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    long reserved;
    volatile long references;
    void addRef();
};

inline void Control::addRef()
{
    volatile long* count = &references;
    _ReadWriteBarrier();
    _InterlockedExchangeAdd(count, 1);
}

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->addRef();
}

struct Pair {
    Shared first;
    Shared second;
    ~Pair();
};

struct Data {
    int value;
    Pair pair;
};

struct S {
    S(Data, int);
    void initialize(Data, int);
};

S::S(Data data, int)
{
    initialize(data, 0);
}
