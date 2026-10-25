// from server: 100% by colin
// roc 2008-06 005daa50  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005daa50
//
// 005daa50  64a100000000         mov eax, dword ptr fs:[0]
// 005daa56  6aff                 push -1
// 005daa58  6868917d00           push 0x7d9168
// 005daa5d  50                   push eax
// 005daa5e  64892500000000       mov dword ptr fs:[0], esp
// 005daa65  83ec08               sub esp, 8
// 005daa68  56                   push esi
// 005daa69  8bf1                 mov esi, ecx
// 005daa6b  e800f9ffff           call 0x5da370
// 005daa70  85c0                 test eax, eax
// 005daa72  0f85ac000000         jne 0x5dab24
// 005daa78  53                   push ebx
// 005daa79  8d442408             lea eax, [esp + 8]
// 005daa7d  57                   push edi
// 005daa7e  50                   push eax
// 005daa7f  e8fce7ffff           call 0x5d9280
// 005daa84  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005daa88  6860a29700           push 0x97a260
// 005daa8d  68707c5d00           push 0x5d7c70
// 005daa92  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005daa9a  e891c8f7ff           call 0x557330
// 005daa9f  83c40c               add esp, 0xc
// 005daaa2  e849ceffff           call 0x5d78f0
// 005daaa7  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 005daaad  2b8e9c010000         sub ecx, dword ptr [esi + 0x19c]
// 005daab3  8bf8                 mov edi, eax
// 005daab5  c1f903               sar ecx, 3
// 005daab8  3bf9                 cmp edi, ecx
// 005daaba  7206                 jb 0x5daac2
// 005daabc  ff1590288000         call dword ptr [0x802890]
// 005daac2  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 005daac8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005daacc  8d04fa               lea eax, [edx + edi*8]
// 005daacf  8d542410             lea edx, [esp + 0x10]
// 005daad3  8908                 mov dword ptr [eax], ecx
// 005daad5  52                   push edx
// 005daad6  8d4804               lea ecx, [eax + 4]
// 005daad9  e8d27ae2ff           call 0x4025b0
// 005daade  56                   push esi
// 005daadf  8bcb                 mov ecx, ebx
// 005daae1  e80afef7ff           call 0x55a8f0
// 005daae6  8b742410             mov esi, dword ptr [esp + 0x10]
// 005daaea  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005daaf2  85f6                 test esi, esi
// 005daaf4  742a                 je 0x5dab20
// 005daaf6  8d4604               lea eax, [esi + 4]
// 005daaf9  83c9ff               or ecx, 0xffffffff
// 005daafc  f00fc108             lock xadd dword ptr [eax], ecx
// 005dab00  751e                 jne 0x5dab20
// 005dab02  8b16                 mov edx, dword ptr [esi]
// 005dab04  8b4204               mov eax, dword ptr [edx + 4]
// 005dab07  8bce                 mov ecx, esi
// 005dab09  ffd0                 call eax
// 005dab0b  8d4e08               lea ecx, [esi + 8]
// 005dab0e  83caff               or edx, 0xffffffff
// 005dab11  f00fc111             lock xadd dword ptr [ecx], edx
// 005dab15  7509                 jne 0x5dab20
// 005dab17  8b06                 mov eax, dword ptr [esi]
// 005dab19  8b5008               mov edx, dword ptr [eax + 8]
// 005dab1c  8bce                 mov ecx, esi
// 005dab1e  ffd2                 call edx
// 005dab20  5f                   pop edi
// 005dab21  8bc3                 mov eax, ebx
// 005dab23  5b                   pop ebx
// 005dab24  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dab28  5e                   pop esi
// 005dab29  64890d00000000       mov dword ptr fs:[0], ecx
// 005dab30  83c414               add esp, 0x14
// 005dab33  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct S;

struct Ref {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void attach(S*);
    void release();
};

inline void Ref::release() {
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct RefSlot {
    Ref* value;
    RefSlot& operator=(const RefSlot&);
};

struct Pair {
    Ref* value;
    RefSlot owner;
    ~Pair();
};

inline Pair::~Pair() {
    if (owner.value)
        owner.value->release();
}

struct Entry {
    Ref* value;
    RefSlot owner;
};

struct S {
    char padding[0x19c];
    Entry* first;
    Entry* last;

    Ref* existing();
    Ref* create();
};

Pair __cdecl make_pair();
void __cdecl register_value(void (__cdecl*)(), void*);
void __cdecl cleanup_value();
extern char registration_data;
void* __cdecl func_0057d800();
extern "C" void (__cdecl* invalid_parameter_noinfo)();

Ref* S::create() {
    Ref* result = existing();
    if (!result) {
        Pair p = make_pair();
        result = p.value;
        register_value(cleanup_value, &registration_data);
        unsigned index = (unsigned)func_0057d800();
        if (index >= (unsigned)(last - first))
            invalid_parameter_noinfo();
        Entry& entry = first[index];
        entry.value = p.value;
        entry.owner = p.owner;
        result->attach(this);
    }
    return result;
}
