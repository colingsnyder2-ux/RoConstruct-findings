// from server: 100% by king_originala
// roc 2008-06 0055d5e0  unit: RBX::MD5HasherImpl  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d5e0
//
// 0055d5e0  55                   push ebp
// 0055d5e1  8bec                 mov ebp, esp
// 0055d5e3  6aff                 push -1
// 0055d5e5  6880e87c00           push 0x7ce880
// 0055d5ea  64a100000000         mov eax, dword ptr fs:[0]
// 0055d5f0  50                   push eax
// 0055d5f1  64892500000000       mov dword ptr fs:[0], esp
// 0055d5f8  51                   push ecx
// 0055d5f9  53                   push ebx
// 0055d5fa  56                   push esi
// 0055d5fb  57                   push edi
// 0055d5fc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0055d5ff  8bf1                 mov esi, ecx
// 0055d601  6a10                 push 0x10
// 0055d603  c70600000000         mov dword ptr [esi], 0
// 0055d609  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0055d610  e80b331400           call 0x6a0920
// 0055d615  83c404               add esp, 4
// 0055d618  85c0                 test eax, eax
// 0055d61a  7419                 je 0x55d635
// 0055d61c  b901000000           mov ecx, 1
// 0055d621  894804               mov dword ptr [eax + 4], ecx
// 0055d624  894808               mov dword ptr [eax + 8], ecx
// 0055d627  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0055d62a  c700e8db8200         mov dword ptr [eax], 0x82dbe8
// 0055d630  89480c               mov dword ptr [eax + 0xc], ecx
// 0055d633  eb02                 jmp 0x55d637
// 0055d635  33c0                 xor eax, eax
// 0055d637  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0055d63a  8906                 mov dword ptr [esi], eax
// 0055d63c  5f                   pop edi
// 0055d63d  8bc6                 mov eax, esi
// 0055d63f  5e                   pop esi
// 0055d640  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d647  5b                   pop ebx
// 0055d648  8be5                 mov esp, ebp
// 0055d64a  5d                   pop ebp
// 0055d64b  c20400               ret 4
// 0055d64e  8b5508               mov edx, dword ptr [ebp + 8]
// 0055d651  52                   push edx
// 0055d652  e819850300           call 0x595b70
// 0055d657  83c404               add esp, 4
// 0055d65a  6a00                 push 0
// 0055d65c  6a00                 push 0
// 0055d65e  e8293f1400           call 0x6a158c

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
