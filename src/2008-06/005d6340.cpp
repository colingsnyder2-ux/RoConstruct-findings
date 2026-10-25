// from server: 100% by king_originala
// roc 2008-06 005d6340  unit: RBX::Teams  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6340
//
// 005d6340  64a100000000         mov eax, dword ptr fs:[0]
// 005d6346  6aff                 push -1
// 005d6348  6868917d00           push 0x7d9168
// 005d634d  50                   push eax
// 005d634e  64892500000000       mov dword ptr fs:[0], esp
// 005d6355  83ec08               sub esp, 8
// 005d6358  56                   push esi
// 005d6359  57                   push edi
// 005d635a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005d635e  6a00                 push 0
// 005d6360  68ec579400           push 0x9457ec
// 005d6365  687c909200           push 0x92907c
// 005d636a  6a00                 push 0
// 005d636c  57                   push edi
// 005d636d  8bf1                 mov esi, ecx
// 005d636f  e852b40c00           call 0x6a17c6
// 005d6374  83c414               add esp, 0x14
// 005d6377  85c0                 test eax, eax
// 005d6379  7467                 je 0x5d63e2
// 005d637b  8d8e30010000         lea ecx, [esi + 0x130]
// 005d6381  e84a4aecff           call 0x49add0
// 005d6386  8bf0                 mov esi, eax
// 005d6388  8d442408             lea eax, [esp + 8]
// 005d638c  57                   push edi
// 005d638d  50                   push eax
// 005d638e  e8ad260400           call 0x618a40
// 005d6393  83c408               add esp, 8
// 005d6396  8b0e                 mov ecx, dword ptr [esi]
// 005d6398  50                   push eax
// 005d6399  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005d63a1  e86a9de4ff           call 0x420110
// 005d63a6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d63aa  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005d63b2  85c0                 test eax, eax
// 005d63b4  742c                 je 0x5d63e2
// 005d63b6  8bf0                 mov esi, eax
// 005d63b8  83c004               add eax, 4
// 005d63bb  83c9ff               or ecx, 0xffffffff
// 005d63be  f00fc108             lock xadd dword ptr [eax], ecx
// 005d63c2  751e                 jne 0x5d63e2
// 005d63c4  8b16                 mov edx, dword ptr [esi]
// 005d63c6  8b4204               mov eax, dword ptr [edx + 4]
// 005d63c9  8bce                 mov ecx, esi
// 005d63cb  ffd0                 call eax
// 005d63cd  8d4e08               lea ecx, [esi + 8]
// 005d63d0  83caff               or edx, 0xffffffff
// 005d63d3  f00fc111             lock xadd dword ptr [ecx], edx
// 005d63d7  7509                 jne 0x5d63e2
// 005d63d9  8b06                 mov eax, dword ptr [esi]
// 005d63db  8b5008               mov edx, dword ptr [eax + 8]
// 005d63de  8bce                 mov ecx, esi
// 005d63e0  ffd2                 call edx
// 005d63e2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d63e6  5f                   pop edi
// 005d63e7  5e                   pop esi
// 005d63e8  64890d00000000       mov dword ptr fs:[0], ecx
// 005d63ef  83c414               add esp, 0x14
// 005d63f2  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instanceType;
extern char teamType;

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Shared __cdecl makeShared(void*);

struct Slot {
    void fire(const Shared&);
};

struct Holder {
    Slot* slot;
};

struct Signal {
    Holder* get();
};

struct Teams {
    char padding[0x130];
    Signal signal;
    void notify(void*);
};

void Teams::notify(void* object)
{
    if (__RTDynamicCast(object, 0, &instanceType, &teamType, 0)) {
        Holder* holder = signal.get();
        holder->slot->fire(makeShared(object));
    }
}
