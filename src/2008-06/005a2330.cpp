// from server: 100% by king_originala
// roc 2008-06 005a2330  unit: RBX::Workspace  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2330
//
// 005a2330  64a100000000         mov eax, dword ptr fs:[0]
// 005a2336  6aff                 push -1
// 005a2338  6868617c00           push 0x7c6168
// 005a233d  50                   push eax
// 005a233e  64892500000000       mov dword ptr fs:[0], esp
// 005a2345  56                   push esi
// 005a2346  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a234a  6a00                 push 0
// 005a234c  6850dd9200           push 0x92dd50
// 005a2351  687c909200           push 0x92907c
// 005a2356  6a00                 push 0
// 005a2358  50                   push eax
// 005a2359  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a2361  8bf0                 mov esi, eax
// 005a2363  e85ef40f00           call 0x6a17c6
// 005a2368  83c414               add esp, 0x14
// 005a236b  85c0                 test eax, eax
// 005a236d  7409                 je 0x5a2378
// 005a236f  8bc8                 mov ecx, eax
// 005a2371  e8fa68ffff           call 0x598c70
// 005a2376  eb0c                 jmp 0x5a2384
// 005a2378  6850195a00           push 0x5a1950
// 005a237d  8bce                 mov ecx, esi
// 005a237f  e8eca0ebff           call 0x45c470
// 005a2384  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a2388  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005a2390  85f6                 test esi, esi
// 005a2392  742a                 je 0x5a23be
// 005a2394  8d4604               lea eax, [esi + 4]
// 005a2397  83c9ff               or ecx, 0xffffffff
// 005a239a  f00fc108             lock xadd dword ptr [eax], ecx
// 005a239e  751e                 jne 0x5a23be
// 005a23a0  8b16                 mov edx, dword ptr [esi]
// 005a23a2  8b4204               mov eax, dword ptr [edx + 4]
// 005a23a5  8bce                 mov ecx, esi
// 005a23a7  ffd0                 call eax
// 005a23a9  8d4e08               lea ecx, [esi + 8]
// 005a23ac  83caff               or edx, 0xffffffff
// 005a23af  f00fc111             lock xadd dword ptr [ecx], edx
// 005a23b3  7509                 jne 0x5a23be
// 005a23b5  8b06                 mov eax, dword ptr [esi]
// 005a23b7  8b5008               mov edx, dword ptr [eax + 8]
// 005a23ba  8bce                 mov ecx, esi
// 005a23bc  ffd2                 call edx
// 005a23be  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a23c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005a23c9  5e                   pop esi
// 005a23ca  83c40c               add esp, 0xc
// 005a23cd  c3                   ret 

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
