// from server: 100% by king_originala
// roc 2008-06 00656d20  unit: RBX::ArrowPanel  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656d20
//
// 00656d20  55                   push ebp
// 00656d21  8bec                 mov ebp, esp
// 00656d23  6aff                 push -1
// 00656d25  68c0bb7d00           push 0x7dbbc0
// 00656d2a  64a100000000         mov eax, dword ptr fs:[0]
// 00656d30  50                   push eax
// 00656d31  64892500000000       mov dword ptr fs:[0], esp
// 00656d38  51                   push ecx
// 00656d39  53                   push ebx
// 00656d3a  56                   push esi
// 00656d3b  57                   push edi
// 00656d3c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00656d3f  8bf1                 mov esi, ecx
// 00656d41  6a14                 push 0x14
// 00656d43  c70600000000         mov dword ptr [esi], 0
// 00656d49  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00656d50  e8cb9b0400           call 0x6a0920
// 00656d55  83c404               add esp, 4
// 00656d58  85c0                 test eax, eax
// 00656d5a  7419                 je 0x656d75
// 00656d5c  b901000000           mov ecx, 1
// 00656d61  894804               mov dword ptr [eax + 4], ecx
// 00656d64  894808               mov dword ptr [eax + 8], ecx
// 00656d67  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00656d6a  c70060bf8400         mov dword ptr [eax], 0x84bf60
// 00656d70  89480c               mov dword ptr [eax + 0xc], ecx
// 00656d73  eb02                 jmp 0x656d77
// 00656d75  33c0                 xor eax, eax
// 00656d77  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00656d7a  8906                 mov dword ptr [esi], eax
// 00656d7c  5f                   pop edi
// 00656d7d  8bc6                 mov eax, esi
// 00656d7f  5e                   pop esi
// 00656d80  64890d00000000       mov dword ptr fs:[0], ecx
// 00656d87  5b                   pop ebx
// 00656d88  8be5                 mov esp, ebp
// 00656d8a  5d                   pop ebp
// 00656d8b  c20800               ret 8
// 00656d8e  8b5508               mov edx, dword ptr [ebp + 8]
// 00656d91  52                   push edx
// 00656d92  8d4d0c               lea ecx, [ebp + 0xc]
// 00656d95  e896f0daff           call 0x405e30
// 00656d9a  6a00                 push 0
// 00656d9c  6a00                 push 0
// 00656d9e  e8e9a70400           call 0x6a158c

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Deleter {
    void operator()(void*) const;
};

struct CountBase {
    int strong;
    int weak;

    CountBase();
    virtual ~CountBase();
    virtual void dispose() = 0;
    virtual void destroy();
    virtual void* get_deleter(const void*) = 0;
};

inline CountBase::CountBase() : strong(1), weak(1) {}

struct Count : CountBase {
    void* pointer;
    Deleter deleter;

    Count(void*, Deleter);
    virtual ~Count();
    virtual void dispose();
    virtual void* get_deleter(const void*);
};

inline Count::Count(void* p, Deleter d) : pointer(p), deleter(d) {}

struct S {
    CountBase* count;
    S(void*, Deleter);
};

S::S(void* p, Deleter d) : count(0)
{
    try {
        count = new Count(p, d);
    }
    catch (...) {
        d(p);
        throw;
    }
}
