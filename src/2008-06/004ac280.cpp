// from server: 100% by king_originala
// roc 2008-06 004ac280  unit: RBX::Network::Replicator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac280
//
// 004ac280  55                   push ebp
// 004ac281  8bec                 mov ebp, esp
// 004ac283  6aff                 push -1
// 004ac285  6860837c00           push 0x7c8360
// 004ac28a  64a100000000         mov eax, dword ptr fs:[0]
// 004ac290  50                   push eax
// 004ac291  64892500000000       mov dword ptr fs:[0], esp
// 004ac298  51                   push ecx
// 004ac299  53                   push ebx
// 004ac29a  56                   push esi
// 004ac29b  57                   push edi
// 004ac29c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac29f  8bf1                 mov esi, ecx
// 004ac2a1  6a10                 push 0x10
// 004ac2a3  c70600000000         mov dword ptr [esi], 0
// 004ac2a9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac2b0  e86b461f00           call 0x6a0920
// 004ac2b5  83c404               add esp, 4
// 004ac2b8  85c0                 test eax, eax
// 004ac2ba  7419                 je 0x4ac2d5
// 004ac2bc  b901000000           mov ecx, 1
// 004ac2c1  894804               mov dword ptr [eax + 4], ecx
// 004ac2c4  894808               mov dword ptr [eax + 8], ecx
// 004ac2c7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac2ca  c70058478200         mov dword ptr [eax], 0x824758
// 004ac2d0  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac2d3  eb02                 jmp 0x4ac2d7
// 004ac2d5  33c0                 xor eax, eax
// 004ac2d7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac2da  8906                 mov dword ptr [esi], eax
// 004ac2dc  5f                   pop edi
// 004ac2dd  8bc6                 mov eax, esi
// 004ac2df  5e                   pop esi
// 004ac2e0  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac2e7  5b                   pop ebx
// 004ac2e8  8be5                 mov esp, ebp
// 004ac2ea  5d                   pop ebp
// 004ac2eb  c20400               ret 4
// 004ac2ee  8b5508               mov edx, dword ptr [ebp + 8]
// 004ac2f1  52                   push edx
// 004ac2f2  e879b8f7ff           call 0x427b70
// 004ac2f7  83c404               add esp, 4
// 004ac2fa  6a00                 push 0
// 004ac2fc  6a00                 push 0
// 004ac2fe  e889521f00           call 0x6a158c

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
