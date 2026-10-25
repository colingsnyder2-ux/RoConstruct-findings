// from server: 100% by colin
// roc 2008-06 00492020  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492020
//
// 00492020  64a100000000         mov eax, dword ptr fs:[0]
// 00492026  6aff                 push -1
// 00492028  6868917d00           push 0x7d9168
// 0049202d  50                   push eax
// 0049202e  64892500000000       mov dword ptr fs:[0], esp
// 00492035  83ec08               sub esp, 8
// 00492038  56                   push esi
// 00492039  8bf1                 mov esi, ecx
// 0049203b  e8d0eeffff           call 0x490f10
// 00492040  85c0                 test eax, eax
// 00492042  0f85ac000000         jne 0x4920f4
// 00492048  53                   push ebx
// 00492049  8d442408             lea eax, [esp + 8]
// 0049204d  57                   push edi
// 0049204e  50                   push eax
// 0049204f  e89c9cffff           call 0x48bcf0
// 00492054  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00492058  68ecfb9600           push 0x96fbec
// 0049205d  6850ad4800           push 0x48ad50
// 00492062  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0049206a  e8c1520c00           call 0x557330
// 0049206f  83c40c               add esp, 0xc
// 00492072  e88983ffff           call 0x48a400
// 00492077  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0049207d  2b8e9c010000         sub ecx, dword ptr [esi + 0x19c]
// 00492083  8bf8                 mov edi, eax
// 00492085  c1f903               sar ecx, 3
// 00492088  3bf9                 cmp edi, ecx
// 0049208a  7206                 jb 0x492092
// 0049208c  ff1590288000         call dword ptr [0x802890]
// 00492092  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 00492098  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049209c  8d04fa               lea eax, [edx + edi*8]
// 0049209f  8d542410             lea edx, [esp + 0x10]
// 004920a3  8908                 mov dword ptr [eax], ecx
// 004920a5  52                   push edx
// 004920a6  8d4804               lea ecx, [eax + 4]
// 004920a9  e80205f7ff           call 0x4025b0
// 004920ae  56                   push esi
// 004920af  8bcb                 mov ecx, ebx
// 004920b1  e83a880c00           call 0x55a8f0
// 004920b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 004920ba  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004920c2  85f6                 test esi, esi
// 004920c4  742a                 je 0x4920f0
// 004920c6  8d4604               lea eax, [esi + 4]
// 004920c9  83c9ff               or ecx, 0xffffffff
// 004920cc  f00fc108             lock xadd dword ptr [eax], ecx
// 004920d0  751e                 jne 0x4920f0
// 004920d2  8b16                 mov edx, dword ptr [esi]
// 004920d4  8b4204               mov eax, dword ptr [edx + 4]
// 004920d7  8bce                 mov ecx, esi
// 004920d9  ffd0                 call eax
// 004920db  8d4e08               lea ecx, [esi + 8]
// 004920de  83caff               or edx, 0xffffffff
// 004920e1  f00fc111             lock xadd dword ptr [ecx], edx
// 004920e5  7509                 jne 0x4920f0
// 004920e7  8b06                 mov eax, dword ptr [esi]
// 004920e9  8b5008               mov edx, dword ptr [eax + 8]
// 004920ec  8bce                 mov ecx, esi
// 004920ee  ffd2                 call edx
// 004920f0  5f                   pop edi
// 004920f1  8bc3                 mov eax, ebx
// 004920f3  5b                   pop ebx
// 004920f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004920f8  5e                   pop esi
// 004920f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00492100  83c414               add esp, 0x14
// 00492103  c3                   ret 

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
