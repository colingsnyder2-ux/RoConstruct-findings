// from server: 100% by colin
// roc 2008-06 005806c0  unit: RBX::VVelocityMotor::?$FactoryProduct::Creator  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005806c0
//
// 005806c0  64a100000000         mov eax, dword ptr fs:[0]
// 005806c6  6aff                 push -1
// 005806c8  6868917d00           push 0x7d9168
// 005806cd  50                   push eax
// 005806ce  64892500000000       mov dword ptr fs:[0], esp
// 005806d5  83ec08               sub esp, 8
// 005806d8  56                   push esi
// 005806d9  8bf1                 mov esi, ecx
// 005806db  e8f0f6ffff           call 0x57fdd0
// 005806e0  85c0                 test eax, eax
// 005806e2  0f85ac000000         jne 0x580794
// 005806e8  53                   push ebx
// 005806e9  8d442408             lea eax, [esp + 8]
// 005806ed  57                   push edi
// 005806ee  50                   push eax
// 005806ef  e89cf0ffff           call 0x57f790
// 005806f4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005806f8  68c8539700           push 0x9753c8
// 005806fd  68b0dd5700           push 0x57ddb0
// 00580702  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0058070a  e8216cfdff           call 0x557330
// 0058070f  83c40c               add esp, 0xc
// 00580712  e849d1ffff           call 0x57d860
// 00580717  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0058071d  2b8e9c010000         sub ecx, dword ptr [esi + 0x19c]
// 00580723  8bf8                 mov edi, eax
// 00580725  c1f903               sar ecx, 3
// 00580728  3bf9                 cmp edi, ecx
// 0058072a  7206                 jb 0x580732
// 0058072c  ff1590288000         call dword ptr [0x802890]
// 00580732  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 00580738  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058073c  8d04fa               lea eax, [edx + edi*8]
// 0058073f  8d542410             lea edx, [esp + 0x10]
// 00580743  8908                 mov dword ptr [eax], ecx
// 00580745  52                   push edx
// 00580746  8d4804               lea ecx, [eax + 4]
// 00580749  e8621ee8ff           call 0x4025b0
// 0058074e  56                   push esi
// 0058074f  8bcb                 mov ecx, ebx
// 00580751  e89aa1fdff           call 0x55a8f0
// 00580756  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058075a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00580762  85f6                 test esi, esi
// 00580764  742a                 je 0x580790
// 00580766  8d4604               lea eax, [esi + 4]
// 00580769  83c9ff               or ecx, 0xffffffff
// 0058076c  f00fc108             lock xadd dword ptr [eax], ecx
// 00580770  751e                 jne 0x580790
// 00580772  8b16                 mov edx, dword ptr [esi]
// 00580774  8b4204               mov eax, dword ptr [edx + 4]
// 00580777  8bce                 mov ecx, esi
// 00580779  ffd0                 call eax
// 0058077b  8d4e08               lea ecx, [esi + 8]
// 0058077e  83caff               or edx, 0xffffffff
// 00580781  f00fc111             lock xadd dword ptr [ecx], edx
// 00580785  7509                 jne 0x580790
// 00580787  8b06                 mov eax, dword ptr [esi]
// 00580789  8b5008               mov edx, dword ptr [eax + 8]
// 0058078c  8bce                 mov ecx, esi
// 0058078e  ffd2                 call edx
// 00580790  5f                   pop edi
// 00580791  8bc3                 mov eax, ebx
// 00580793  5b                   pop ebx
// 00580794  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00580798  5e                   pop esi
// 00580799  64890d00000000       mov dword ptr fs:[0], ecx
// 005807a0  83c414               add esp, 0x14
// 005807a3  c3                   ret 

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
