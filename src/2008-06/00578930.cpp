// from server: 100% by colin
// roc 2008-06 00578930  unit: RBX::VTool::?$FactoryProduct::Creator  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578930
//
// 00578930  64a100000000         mov eax, dword ptr fs:[0]
// 00578936  6aff                 push -1
// 00578938  6868917d00           push 0x7d9168
// 0057893d  50                   push eax
// 0057893e  64892500000000       mov dword ptr fs:[0], esp
// 00578945  83ec08               sub esp, 8
// 00578948  56                   push esi
// 00578949  8bf1                 mov esi, ecx
// 0057894b  e8e0fbffff           call 0x578530
// 00578950  85c0                 test eax, eax
// 00578952  0f85ac000000         jne 0x578a04
// 00578958  53                   push ebx
// 00578959  8d442408             lea eax, [esp + 8]
// 0057895d  57                   push edi
// 0057895e  50                   push eax
// 0057895f  e84ce8ffff           call 0x5771b0
// 00578964  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00578968  6810529700           push 0x975210
// 0057896d  6800685700           push 0x576800
// 00578972  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0057897a  e8b1e9fdff           call 0x557330
// 0057897f  83c40c               add esp, 0xc
// 00578982  e8a9ccffff           call 0x575630
// 00578987  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0057898d  2b8e9c010000         sub ecx, dword ptr [esi + 0x19c]
// 00578993  8bf8                 mov edi, eax
// 00578995  c1f903               sar ecx, 3
// 00578998  3bf9                 cmp edi, ecx
// 0057899a  7206                 jb 0x5789a2
// 0057899c  ff1590288000         call dword ptr [0x802890]
// 005789a2  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 005789a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005789ac  8d04fa               lea eax, [edx + edi*8]
// 005789af  8d542410             lea edx, [esp + 0x10]
// 005789b3  8908                 mov dword ptr [eax], ecx
// 005789b5  52                   push edx
// 005789b6  8d4804               lea ecx, [eax + 4]
// 005789b9  e8f29be8ff           call 0x4025b0
// 005789be  56                   push esi
// 005789bf  8bcb                 mov ecx, ebx
// 005789c1  e82a1ffeff           call 0x55a8f0
// 005789c6  8b742410             mov esi, dword ptr [esp + 0x10]
// 005789ca  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005789d2  85f6                 test esi, esi
// 005789d4  742a                 je 0x578a00
// 005789d6  8d4604               lea eax, [esi + 4]
// 005789d9  83c9ff               or ecx, 0xffffffff
// 005789dc  f00fc108             lock xadd dword ptr [eax], ecx
// 005789e0  751e                 jne 0x578a00
// 005789e2  8b16                 mov edx, dword ptr [esi]
// 005789e4  8b4204               mov eax, dword ptr [edx + 4]
// 005789e7  8bce                 mov ecx, esi
// 005789e9  ffd0                 call eax
// 005789eb  8d4e08               lea ecx, [esi + 8]
// 005789ee  83caff               or edx, 0xffffffff
// 005789f1  f00fc111             lock xadd dword ptr [ecx], edx
// 005789f5  7509                 jne 0x578a00
// 005789f7  8b06                 mov eax, dword ptr [esi]
// 005789f9  8b5008               mov edx, dword ptr [eax + 8]
// 005789fc  8bce                 mov ecx, esi
// 005789fe  ffd2                 call edx
// 00578a00  5f                   pop edi
// 00578a01  8bc3                 mov eax, ebx
// 00578a03  5b                   pop ebx
// 00578a04  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00578a08  5e                   pop esi
// 00578a09  64890d00000000       mov dword ptr fs:[0], ecx
// 00578a10  83c414               add esp, 0x14
// 00578a13  c3                   ret 

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
