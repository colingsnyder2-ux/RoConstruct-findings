// from server: 100% by king_originala
// roc 2008-06 005a2290  unit: RBX::Workspace  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2290
//
// 005a2290  64a100000000         mov eax, dword ptr fs:[0]
// 005a2296  6aff                 push -1
// 005a2298  6868617c00           push 0x7c6168
// 005a229d  50                   push eax
// 005a229e  64892500000000       mov dword ptr fs:[0], esp
// 005a22a5  56                   push esi
// 005a22a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a22aa  6a00                 push 0
// 005a22ac  6850dd9200           push 0x92dd50
// 005a22b1  687c909200           push 0x92907c
// 005a22b6  6a00                 push 0
// 005a22b8  50                   push eax
// 005a22b9  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a22c1  8bf0                 mov esi, eax
// 005a22c3  e8fef40f00           call 0x6a17c6
// 005a22c8  83c414               add esp, 0x14
// 005a22cb  85c0                 test eax, eax
// 005a22cd  7409                 je 0x5a22d8
// 005a22cf  8bc8                 mov ecx, eax
// 005a22d1  e8ba69ffff           call 0x598c90
// 005a22d6  eb0c                 jmp 0x5a22e4
// 005a22d8  6810195a00           push 0x5a1910
// 005a22dd  8bce                 mov ecx, esi
// 005a22df  e88ca1ebff           call 0x45c470
// 005a22e4  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a22e8  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005a22f0  85f6                 test esi, esi
// 005a22f2  742a                 je 0x5a231e
// 005a22f4  8d4604               lea eax, [esi + 4]
// 005a22f7  83c9ff               or ecx, 0xffffffff
// 005a22fa  f00fc108             lock xadd dword ptr [eax], ecx
// 005a22fe  751e                 jne 0x5a231e
// 005a2300  8b16                 mov edx, dword ptr [esi]
// 005a2302  8b4204               mov eax, dword ptr [edx + 4]
// 005a2305  8bce                 mov ecx, esi
// 005a2307  ffd0                 call eax
// 005a2309  8d4e08               lea ecx, [esi + 8]
// 005a230c  83caff               or edx, 0xffffffff
// 005a230f  f00fc111             lock xadd dword ptr [ecx], edx
// 005a2313  7509                 jne 0x5a231e
// 005a2315  8b06                 mov eax, dword ptr [esi]
// 005a2317  8b5008               mov edx, dword ptr [eax + 8]
// 005a231a  8bce                 mov ecx, esi
// 005a231c  ffd2                 call edx
// 005a231e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a2322  64890d00000000       mov dword ptr fs:[0], ecx
// 005a2329  5e                   pop esi
// 005a232a  83c40c               add esp, 0xc
// 005a232d  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern char instanceType;
extern char partType;

extern "C" void* __cdecl castObject(void*, long, void*, void*, int);
void __cdecl callback();

struct Instance {
    void fallback(void (__cdecl*)());
};

struct Part {
    void process();
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Instance* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared() {
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

void __cdecl function_005a2330(Shared value) {
    Instance* instance = value.pointer;
    Part* part = static_cast<Part*>(
        castObject(instance, 0, &instanceType, &partType, 0));
    if (part)
        part->process();
    else
        instance->fallback(callback);
}
