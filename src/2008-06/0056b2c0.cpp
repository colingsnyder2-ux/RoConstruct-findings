// from server: 100% by king_originala
// roc 2008-06 0056b2c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b2c0
//
// 0056b2c0  55                   push ebp
// 0056b2c1  8bec                 mov ebp, esp
// 0056b2c3  6aff                 push -1
// 0056b2c5  6860fa7c00           push 0x7cfa60
// 0056b2ca  64a100000000         mov eax, dword ptr fs:[0]
// 0056b2d0  50                   push eax
// 0056b2d1  64892500000000       mov dword ptr fs:[0], esp
// 0056b2d8  51                   push ecx
// 0056b2d9  53                   push ebx
// 0056b2da  56                   push esi
// 0056b2db  57                   push edi
// 0056b2dc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0056b2df  8bf1                 mov esi, ecx
// 0056b2e1  6a10                 push 0x10
// 0056b2e3  c70600000000         mov dword ptr [esi], 0
// 0056b2e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0056b2f0  e82b561300           call 0x6a0920
// 0056b2f5  83c404               add esp, 4
// 0056b2f8  85c0                 test eax, eax
// 0056b2fa  7419                 je 0x56b315
// 0056b2fc  b901000000           mov ecx, 1
// 0056b301  894804               mov dword ptr [eax + 4], ecx
// 0056b304  894808               mov dword ptr [eax + 8], ecx
// 0056b307  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0056b30a  c700f4f58200         mov dword ptr [eax], 0x82f5f4
// 0056b310  89480c               mov dword ptr [eax + 0xc], ecx
// 0056b313  eb02                 jmp 0x56b317
// 0056b315  33c0                 xor eax, eax
// 0056b317  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0056b31a  8906                 mov dword ptr [esi], eax
// 0056b31c  5f                   pop edi
// 0056b31d  8bc6                 mov eax, esi
// 0056b31f  5e                   pop esi
// 0056b320  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b327  5b                   pop ebx
// 0056b328  8be5                 mov esp, ebp
// 0056b32a  5d                   pop ebp
// 0056b32b  c20400               ret 4
// 0056b32e  8b5508               mov edx, dword ptr [ebp + 8]
// 0056b331  52                   push edx
// 0056b332  e869ffffff           call 0x56b2a0
// 0056b337  83c404               add esp, 4
// 0056b33a  6a00                 push 0
// 0056b33c  6a00                 push 0
// 0056b33e  e849621300           call 0x6a158c

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
