// from server: 100% by king_originala
// roc 2008-06 005d8e10  unit: RBX::VPartInstance::?$FilteredSelection  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8e10
//
// 005d8e10  64a100000000         mov eax, dword ptr fs:[0]
// 005d8e16  6aff                 push -1
// 005d8e18  68e18a7c00           push 0x7c8ae1
// 005d8e1d  50                   push eax
// 005d8e1e  64892500000000       mov dword ptr fs:[0], esp
// 005d8e25  83ec24               sub esp, 0x24
// 005d8e28  56                   push esi
// 005d8e29  8bf1                 mov esi, ecx
// 005d8e2b  83be1402000000       cmp dword ptr [esi + 0x214], 0
// 005d8e32  0f85b8000000         jne 0x5d8ef0
// 005d8e38  83be0401000000       cmp dword ptr [esi + 0x104], 0
// 005d8e3f  0f84ab000000         je 0x5d8ef0
// 005d8e45  68d0c48300           push 0x83c4d0
// 005d8e4a  8d4c2410             lea ecx, [esp + 0x10]
// 005d8e4e  ff1558248000         call dword ptr [0x802458]
// 005d8e54  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 005d8e5a  8d44240c             lea eax, [esp + 0xc]
// 005d8e5e  50                   push eax
// 005d8e5f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d8e67  e8e4eaf7ff           call 0x557950
// 005d8e6c  85c0                 test eax, eax
// 005d8e6e  7407                 je 0x5d8e77
// 005d8e70  05e4000000           add eax, 0xe4
// 005d8e75  eb02                 jmp 0x5d8e79
// 005d8e77  33c0                 xor eax, eax
// 005d8e79  50                   push eax
// 005d8e7a  8d4c2408             lea ecx, [esp + 8]
// 005d8e7e  51                   push ecx
// 005d8e7f  e86cb4ffff           call 0x5d42f0
// 005d8e84  83c408               add esp, 8
// 005d8e87  8b10                 mov edx, dword ptr [eax]
// 005d8e89  83c004               add eax, 4
// 005d8e8c  50                   push eax
// 005d8e8d  8d8e18020000         lea ecx, [esi + 0x218]
// 005d8e93  c644243401           mov byte ptr [esp + 0x34], 1
// 005d8e98  899614020000         mov dword ptr [esi + 0x214], edx
// 005d8e9e  e80d97e2ff           call 0x4025b0
// 005d8ea3  8b442408             mov eax, dword ptr [esp + 8]
// 005d8ea7  c644243000           mov byte ptr [esp + 0x30], 0
// 005d8eac  85c0                 test eax, eax
// 005d8eae  742e                 je 0x5d8ede
// 005d8eb0  57                   push edi
// 005d8eb1  8bf8                 mov edi, eax
// 005d8eb3  83c004               add eax, 4
// 005d8eb6  83c9ff               or ecx, 0xffffffff
// 005d8eb9  f00fc108             lock xadd dword ptr [eax], ecx
// 005d8ebd  751e                 jne 0x5d8edd
// 005d8ebf  8b17                 mov edx, dword ptr [edi]
// 005d8ec1  8b4204               mov eax, dword ptr [edx + 4]
// 005d8ec4  8bcf                 mov ecx, edi
// 005d8ec6  ffd0                 call eax
// 005d8ec8  8d4f08               lea ecx, [edi + 8]
// 005d8ecb  83caff               or edx, 0xffffffff
// 005d8ece  f00fc111             lock xadd dword ptr [ecx], edx
// 005d8ed2  7509                 jne 0x5d8edd
// 005d8ed4  8b07                 mov eax, dword ptr [edi]
// 005d8ed6  8b5008               mov edx, dword ptr [eax + 8]
// 005d8ed9  8bcf                 mov ecx, edi
// 005d8edb  ffd2                 call edx
// 005d8edd  5f                   pop edi
// 005d8ede  8d4c240c             lea ecx, [esp + 0xc]
// 005d8ee2  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005d8eea  ff1568248000         call dword ptr [0x802468]
// 005d8ef0  8b8614020000         mov eax, dword ptr [esi + 0x214]
// 005d8ef6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d8efa  5e                   pop esi
// 005d8efb  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8f02  83c430               add esp, 0x30
// 005d8f05  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;
extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text) {
    string_construct(this, text);
}

inline String::~String() {
    string_destroy(this);
}

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle {
    Control* control;
    Handle& operator=(const Handle&);
    ~Handle();
};

__forceinline Handle::~Handle() {
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
    void* object;
    Handle handle;
    ~Shared();
};

__forceinline Shared::~Shared() {
}

struct Instance {
    void* find(const String&);
};

extern Shared __cdecl acquire(void*);

struct S {
    char padding0[0x104];
    Instance* parent;
    char padding1[0x10c];
    void* cached;
    Handle owner;
    void assign(const Shared&);
    void* f();
};

__forceinline void S::assign(const Shared& value) {
    cached = value.object;
    owner = value.handle;
}

void* S::f() {
    if (!cached && parent) {
        String name("Left Arm");
        void* found = parent->find(name);
        assign(acquire(found ? static_cast<char*>(found) + 0xe4 : 0));
    }
    return cached;
}
