// from server: 100% by king_originala
// roc 2008-06 005f3460  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3460
//
// 005f3460  55                   push ebp
// 005f3461  8bec                 mov ebp, esp
// 005f3463  6aff                 push -1
// 005f3465  68a0737d00           push 0x7d73a0
// 005f346a  64a100000000         mov eax, dword ptr fs:[0]
// 005f3470  50                   push eax
// 005f3471  64892500000000       mov dword ptr fs:[0], esp
// 005f3478  51                   push ecx
// 005f3479  53                   push ebx
// 005f347a  56                   push esi
// 005f347b  57                   push edi
// 005f347c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f347f  8bf1                 mov esi, ecx
// 005f3481  6a10                 push 0x10
// 005f3483  c70600000000         mov dword ptr [esi], 0
// 005f3489  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f3490  e88bd40a00           call 0x6a0920
// 005f3495  83c404               add esp, 4
// 005f3498  85c0                 test eax, eax
// 005f349a  7419                 je 0x5f34b5
// 005f349c  b901000000           mov ecx, 1
// 005f34a1  894804               mov dword ptr [eax + 4], ecx
// 005f34a4  894808               mov dword ptr [eax + 8], ecx
// 005f34a7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005f34aa  c700a0088400         mov dword ptr [eax], 0x8408a0
// 005f34b0  89480c               mov dword ptr [eax + 0xc], ecx
// 005f34b3  eb02                 jmp 0x5f34b7
// 005f34b5  33c0                 xor eax, eax
// 005f34b7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f34ba  8906                 mov dword ptr [esi], eax
// 005f34bc  5f                   pop edi
// 005f34bd  8bc6                 mov eax, esi
// 005f34bf  5e                   pop esi
// 005f34c0  64890d00000000       mov dword ptr fs:[0], ecx
// 005f34c7  5b                   pop ebx
// 005f34c8  8be5                 mov esp, ebp
// 005f34ca  5d                   pop ebp
// 005f34cb  c20400               ret 4
// 005f34ce  8b5508               mov edx, dword ptr [ebp + 8]
// 005f34d1  52                   push edx
// 005f34d2  e819f9ffff           call 0x5f2df0
// 005f34d7  83c404               add esp, 4
// 005f34da  6a00                 push 0
// 005f34dc  6a00                 push 0
// 005f34de  e8a9e00a00           call 0x6a158c





typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Object {
    ~Object();
};

struct CountBase {
    long strong;
    long weak;

    CountBase();
    virtual ~CountBase();
    virtual void dispose() = 0;
    virtual void destroy();
    virtual void* get_deleter(const void*) = 0;
};

struct CountImpl : CountBase {
    Object* object;

    CountImpl(Object*);
    virtual ~CountImpl();
    virtual void dispose();
    virtual void* get_deleter(const void*);
};

struct S {
    CountBase* count;
    S(Object*);
};

__forceinline CountBase::CountBase() : strong(1), weak(1) {}

__forceinline CountImpl::CountImpl(Object* p) : object(p) {}

S::S(Object* p) : count(0) {
    try {
        count = new CountImpl(p);
    } catch (...) {
        delete p;
        throw;
    }
}
