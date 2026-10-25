// from server: 100% by tester
// roc 2008-06 0056b590  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b590
//
// 0056b590  55                   push ebp
// 0056b591  8bec                 mov ebp, esp
// 0056b593  6aff                 push -1
// 0056b595  68b0fa7c00           push 0x7cfab0
// 0056b59a  64a100000000         mov eax, dword ptr fs:[0]
// 0056b5a0  50                   push eax
// 0056b5a1  64892500000000       mov dword ptr fs:[0], esp
// 0056b5a8  51                   push ecx
// 0056b5a9  53                   push ebx
// 0056b5aa  56                   push esi
// 0056b5ab  57                   push edi
// 0056b5ac  8965f0               mov dword ptr [ebp - 0x10], esp
// 0056b5af  8bf1                 mov esi, ecx
// 0056b5b1  6a10                 push 0x10
// 0056b5b3  c70600000000         mov dword ptr [esi], 0
// 0056b5b9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0056b5c0  e85b531300           call 0x6a0920
// 0056b5c5  83c404               add esp, 4
// 0056b5c8  85c0                 test eax, eax
// 0056b5ca  7419                 je 0x56b5e5
// 0056b5cc  b901000000           mov ecx, 1
// 0056b5d1  894804               mov dword ptr [eax + 4], ecx
// 0056b5d4  894808               mov dword ptr [eax + 8], ecx
// 0056b5d7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0056b5da  c70014f68200         mov dword ptr [eax], 0x82f614
// 0056b5e0  89480c               mov dword ptr [eax + 0xc], ecx
// 0056b5e3  eb02                 jmp 0x56b5e7
// 0056b5e5  33c0                 xor eax, eax
// 0056b5e7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0056b5ea  8906                 mov dword ptr [esi], eax
// 0056b5ec  5f                   pop edi
// 0056b5ed  8bc6                 mov eax, esi
// 0056b5ef  5e                   pop esi
// 0056b5f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b5f7  5b                   pop ebx
// 0056b5f8  8be5                 mov esp, ebp
// 0056b5fa  5d                   pop ebp
// 0056b5fb  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    virtual ~Object();
};

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
        delete p;
        throw;
    }
}
