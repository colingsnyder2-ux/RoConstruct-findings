// from server: 100% by king_originala
// roc 2008-06 005d8b10  unit: RBX::VPartInstance::?$FilteredSelection  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8b10
//
// 005d8b10  64a100000000         mov eax, dword ptr fs:[0]
// 005d8b16  6aff                 push -1
// 005d8b18  68e18a7c00           push 0x7c8ae1
// 005d8b1d  50                   push eax
// 005d8b1e  64892500000000       mov dword ptr fs:[0], esp
// 005d8b25  83ec24               sub esp, 0x24
// 005d8b28  56                   push esi
// 005d8b29  8bf1                 mov esi, ecx
// 005d8b2b  83bef401000000       cmp dword ptr [esi + 0x1f4], 0
// 005d8b32  0f85b8000000         jne 0x5d8bf0
// 005d8b38  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 005d8b3f  0f84ab000000         je 0x5d8bf0
// 005d8b45  681c2a8300           push 0x832a1c
// 005d8b4a  8d4c2410             lea ecx, [esp + 0x10]
// 005d8b4e  ff1558248000         call dword ptr [0x802458]
// 005d8b54  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 005d8b5a  8d44240c             lea eax, [esp + 0xc]
// 005d8b5e  50                   push eax
// 005d8b5f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d8b67  e8e4edf7ff           call 0x557950
// 005d8b6c  85c0                 test eax, eax
// 005d8b6e  7407                 je 0x5d8b77
// 005d8b70  05e4000000           add eax, 0xe4
// 005d8b75  eb02                 jmp 0x5d8b79
// 005d8b77  33c0                 xor eax, eax
// 005d8b79  50                   push eax
// 005d8b7a  8d4c2408             lea ecx, [esp + 8]
// 005d8b7e  51                   push ecx
// 005d8b7f  e86cb7ffff           call 0x5d42f0
// 005d8b84  83c408               add esp, 8
// 005d8b87  8b10                 mov edx, dword ptr [eax]
// 005d8b89  83c004               add eax, 4
// 005d8b8c  50                   push eax
// 005d8b8d  8d8ef8010000         lea ecx, [esi + 0x1f8]
// 005d8b93  c644243401           mov byte ptr [esp + 0x34], 1
// 005d8b98  8996f4010000         mov dword ptr [esi + 0x1f4], edx
// 005d8b9e  e80d9ae2ff           call 0x4025b0
// 005d8ba3  8b442408             mov eax, dword ptr [esp + 8]
// 005d8ba7  c644243000           mov byte ptr [esp + 0x30], 0
// 005d8bac  85c0                 test eax, eax
// 005d8bae  742e                 je 0x5d8bde
// 005d8bb0  57                   push edi
// 005d8bb1  8bf8                 mov edi, eax
// 005d8bb3  83c004               add eax, 4
// 005d8bb6  83c9ff               or ecx, 0xffffffff
// 005d8bb9  f00fc108             lock xadd dword ptr [eax], ecx
// 005d8bbd  751e                 jne 0x5d8bdd
// 005d8bbf  8b17                 mov edx, dword ptr [edi]
// 005d8bc1  8b4204               mov eax, dword ptr [edx + 4]
// 005d8bc4  8bcf                 mov ecx, edi
// 005d8bc6  ffd0                 call eax
// 005d8bc8  8d4f08               lea ecx, [edi + 8]
// 005d8bcb  83caff               or edx, 0xffffffff
// 005d8bce  f00fc111             lock xadd dword ptr [ecx], edx
// 005d8bd2  7509                 jne 0x5d8bdd
// 005d8bd4  8b07                 mov eax, dword ptr [edi]
// 005d8bd6  8b5008               mov edx, dword ptr [eax + 8]
// 005d8bd9  8bcf                 mov ecx, edi
// 005d8bdb  ffd2                 call edx
// 005d8bdd  5f                   pop edi
// 005d8bde  8d4c240c             lea ecx, [esp + 0xc]
// 005d8be2  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005d8bea  ff1568248000         call dword ptr [0x802468]
// 005d8bf0  8b86f4010000         mov eax, dword ptr [esi + 0x1f4]
// 005d8bf6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d8bfa  5e                   pop esi
// 005d8bfb  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8c02  83c430               add esp, 0x30
// 005d8c05  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;

extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
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
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
};

struct Pair {
    void* pointer;
    Reference reference;

    Pair& operator=(const Pair&);
    ~Pair();
};

__forceinline Pair& Pair::operator=(const Pair& other)
{
    pointer = other.pointer;
    reference = other.reference;
    return *this;
}

__forceinline Pair::~Pair()
{
    if (reference.control) {
        Control* p = reference.control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Parent {
    void* find(const String&);
};

Pair __cdecl makePair(void*);

struct S {
    unsigned char padding0[0x104];
    Parent* parent;
    unsigned char padding1[0xec];
    Pair cached;

    void* get();
};

void* S::get()
{
    if (!cached.pointer && parent) {
        String name("Torso");
        void* found = parent->find(name);
        cached = makePair(found ? static_cast<unsigned char*>(found) + 0xe4 : 0);
    }
    return cached.pointer;
}
