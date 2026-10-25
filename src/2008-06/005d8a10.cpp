// from server: 100% by king_originala
// roc 2008-06 005d8a10  unit: RBX::VPartInstance::?$FilteredSelection  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8a10
//
// 005d8a10  64a100000000         mov eax, dword ptr fs:[0]
// 005d8a16  6aff                 push -1
// 005d8a18  68e18a7c00           push 0x7c8ae1
// 005d8a1d  50                   push eax
// 005d8a1e  64892500000000       mov dword ptr fs:[0], esp
// 005d8a25  83ec24               sub esp, 0x24
// 005d8a28  56                   push esi
// 005d8a29  8bf1                 mov esi, ecx
// 005d8a2b  83beec01000000       cmp dword ptr [esi + 0x1ec], 0
// 005d8a32  0f85b8000000         jne 0x5d8af0
// 005d8a38  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 005d8a3f  0f84ab000000         je 0x5d8af0
// 005d8a45  688c338300           push 0x83338c
// 005d8a4a  8d4c2410             lea ecx, [esp + 0x10]
// 005d8a4e  ff1558248000         call dword ptr [0x802458]
// 005d8a54  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 005d8a5a  8d44240c             lea eax, [esp + 0xc]
// 005d8a5e  50                   push eax
// 005d8a5f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d8a67  e8e4eef7ff           call 0x557950
// 005d8a6c  85c0                 test eax, eax
// 005d8a6e  7407                 je 0x5d8a77
// 005d8a70  05e4000000           add eax, 0xe4
// 005d8a75  eb02                 jmp 0x5d8a79
// 005d8a77  33c0                 xor eax, eax
// 005d8a79  50                   push eax
// 005d8a7a  8d4c2408             lea ecx, [esp + 8]
// 005d8a7e  51                   push ecx
// 005d8a7f  e86cb8ffff           call 0x5d42f0
// 005d8a84  83c408               add esp, 8
// 005d8a87  8b10                 mov edx, dword ptr [eax]
// 005d8a89  83c004               add eax, 4
// 005d8a8c  50                   push eax
// 005d8a8d  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 005d8a93  c644243401           mov byte ptr [esp + 0x34], 1
// 005d8a98  8996ec010000         mov dword ptr [esi + 0x1ec], edx
// 005d8a9e  e80d9be2ff           call 0x4025b0
// 005d8aa3  8b442408             mov eax, dword ptr [esp + 8]
// 005d8aa7  c644243000           mov byte ptr [esp + 0x30], 0
// 005d8aac  85c0                 test eax, eax
// 005d8aae  742e                 je 0x5d8ade
// 005d8ab0  57                   push edi
// 005d8ab1  8bf8                 mov edi, eax
// 005d8ab3  83c004               add eax, 4
// 005d8ab6  83c9ff               or ecx, 0xffffffff
// 005d8ab9  f00fc108             lock xadd dword ptr [eax], ecx
// 005d8abd  751e                 jne 0x5d8add
// 005d8abf  8b17                 mov edx, dword ptr [edi]
// 005d8ac1  8b4204               mov eax, dword ptr [edx + 4]
// 005d8ac4  8bcf                 mov ecx, edi
// 005d8ac6  ffd0                 call eax
// 005d8ac8  8d4f08               lea ecx, [edi + 8]
// 005d8acb  83caff               or edx, 0xffffffff
// 005d8ace  f00fc111             lock xadd dword ptr [ecx], edx
// 005d8ad2  7509                 jne 0x5d8add
// 005d8ad4  8b07                 mov eax, dword ptr [edi]
// 005d8ad6  8b5008               mov edx, dword ptr [eax + 8]
// 005d8ad9  8bcf                 mov ecx, edi
// 005d8adb  ffd2                 call edx
// 005d8add  5f                   pop edi
// 005d8ade  8d4c240c             lea ecx, [esp + 0xc]
// 005d8ae2  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005d8aea  ff1568248000         call dword ptr [0x802468]
// 005d8af0  8b86ec010000         mov eax, dword ptr [esi + 0x1ec]
// 005d8af6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d8afa  5e                   pop esi
// 005d8afb  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8b02  83c430               add esp, 0x30
// 005d8b05  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;
extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    __forceinline String(const char*);
    __forceinline ~String();
};

__forceinline String::String(const char* text)
{
    stringConstruct(this, text);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Count {
    Control* control;
    Count& operator=(const Count&);
    __forceinline ~Count();
};

__forceinline Count::~Count()
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

struct Shared {
    void* pointer;
    Count count;
    __forceinline ~Shared();
};

__forceinline Shared::~Shared()
{
}

Shared __cdecl makeShared(void*);

struct Parent {
    char* find(const String&);
};

struct S {
    char padding0[0x104];
    Parent* parent;
    char padding1[0xe4];
    Shared cached;
    void* f();
};

void* S::f()
{
    if (!cached.pointer && parent) {
        String name("Head");
        char* object = parent->find(name);
        cached = makeShared(object ? object + 0xe4 : 0);
    }
    return cached.pointer;
}
