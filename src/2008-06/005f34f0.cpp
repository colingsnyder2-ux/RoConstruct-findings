// from server: 100% by king_originala
// roc 2008-06 005f34f0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f34f0
//
// 005f34f0  55                   push ebp
// 005f34f1  8bec                 mov ebp, esp
// 005f34f3  6aff                 push -1
// 005f34f5  68b0737d00           push 0x7d73b0
// 005f34fa  64a100000000         mov eax, dword ptr fs:[0]
// 005f3500  50                   push eax
// 005f3501  64892500000000       mov dword ptr fs:[0], esp
// 005f3508  51                   push ecx
// 005f3509  53                   push ebx
// 005f350a  56                   push esi
// 005f350b  57                   push edi
// 005f350c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f350f  8bf1                 mov esi, ecx
// 005f3511  6a10                 push 0x10
// 005f3513  c70600000000         mov dword ptr [esi], 0
// 005f3519  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f3520  e8fbd30a00           call 0x6a0920
// 005f3525  83c404               add esp, 4
// 005f3528  85c0                 test eax, eax
// 005f352a  7419                 je 0x5f3545
// 005f352c  b901000000           mov ecx, 1
// 005f3531  894804               mov dword ptr [eax + 4], ecx
// 005f3534  894808               mov dword ptr [eax + 8], ecx
// 005f3537  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005f353a  c700b4088400         mov dword ptr [eax], 0x8408b4
// 005f3540  89480c               mov dword ptr [eax + 0xc], ecx
// 005f3543  eb02                 jmp 0x5f3547
// 005f3545  33c0                 xor eax, eax
// 005f3547  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f354a  8906                 mov dword ptr [esi], eax
// 005f354c  5f                   pop edi
// 005f354d  8bc6                 mov eax, esi
// 005f354f  5e                   pop esi
// 005f3550  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3557  5b                   pop ebx
// 005f3558  8be5                 mov esp, ebp
// 005f355a  5d                   pop ebp
// 005f355b  c20400               ret 4
// 005f355e  8b5508               mov edx, dword ptr [ebp + 8]
// 005f3561  52                   push edx
// 005f3562  e8a9f8ffff           call 0x5f2e10
// 005f3567  83c404               add esp, 4
// 005f356a  6a00                 push 0
// 005f356c  6a00                 push 0
// 005f356e  e819e00a00           call 0x6a158c

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    virtual ~Object();
};

namespace boost { template<class T> void checked_delete(T*); }

struct CountBase {
    long useCount;
    long weakCount;

    CountBase() : useCount(1), weakCount(1) {}
    virtual ~CountBase();
    virtual void dispose() = 0;
    virtual void destroy();
    virtual void* getDeleter(const void*) = 0;
};

struct Count : CountBase {
    Object* object;

    explicit Count(Object* p) : object(p) {}
    virtual ~Count();
    virtual void dispose();
    virtual void* getDeleter(const void*);
};

struct S {
    CountBase* count;
    explicit S(Object*);
};

S::S(Object* p) : count(0)
{
    try {
        count = new Count(p);
    }
    catch (...) {
        boost::checked_delete(p);
        throw;
    }
}
