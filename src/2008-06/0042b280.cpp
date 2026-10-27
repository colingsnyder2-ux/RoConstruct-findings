// from server: 100% by king_originala
// roc 2008-06 0042b280  unit: EventHandler  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b280
//
// 0042b280  55                   push ebp
// 0042b281  8bec                 mov ebp, esp
// 0042b283  6aff                 push -1
// 0042b285  6810f57b00           push 0x7bf510
// 0042b28a  64a100000000         mov eax, dword ptr fs:[0]
// 0042b290  50                   push eax
// 0042b291  64892500000000       mov dword ptr fs:[0], esp
// 0042b298  51                   push ecx
// 0042b299  53                   push ebx
// 0042b29a  56                   push esi
// 0042b29b  57                   push edi
// 0042b29c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0042b29f  8bf1                 mov esi, ecx
// 0042b2a1  6a10                 push 0x10
// 0042b2a3  c70600000000         mov dword ptr [esi], 0
// 0042b2a9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0042b2b0  e86b562700           call 0x6a0920
// 0042b2b5  83c404               add esp, 4
// 0042b2b8  85c0                 test eax, eax
// 0042b2ba  7419                 je 0x42b2d5
// 0042b2bc  b901000000           mov ecx, 1
// 0042b2c1  894804               mov dword ptr [eax + 4], ecx
// 0042b2c4  894808               mov dword ptr [eax + 8], ecx
// 0042b2c7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0042b2ca  c70024058100         mov dword ptr [eax], 0x810524
// 0042b2d0  89480c               mov dword ptr [eax + 0xc], ecx
// 0042b2d3  eb02                 jmp 0x42b2d7
// 0042b2d5  33c0                 xor eax, eax
// 0042b2d7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0042b2da  8906                 mov dword ptr [esi], eax
// 0042b2dc  5f                   pop edi
// 0042b2dd  8bc6                 mov eax, esi
// 0042b2df  5e                   pop esi
// 0042b2e0  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b2e7  5b                   pop ebx
// 0042b2e8  8be5                 mov esp, ebp
// 0042b2ea  5d                   pop ebp
// 0042b2eb  c20400               ret 4
// 0042b2ee  8b5508               mov edx, dword ptr [ebp + 8]
// 0042b2f1  52                   push edx
// 0042b2f2  e8e9fdffff           call 0x42b0e0
// 0042b2f7  83c404               add esp, 4
// 0042b2fa  6a00                 push 0
// 0042b2fc  6a00                 push 0
// 0042b2fe  e889622700           call 0x6a158c

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
