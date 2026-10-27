// from server: 100% by king_originala
// roc 2008-06 00596110  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596110
//
// 00596110  55                   push ebp
// 00596111  8bec                 mov ebp, esp
// 00596113  6aff                 push -1
// 00596115  68b0217d00           push 0x7d21b0
// 0059611a  64a100000000         mov eax, dword ptr fs:[0]
// 00596120  50                   push eax
// 00596121  64892500000000       mov dword ptr fs:[0], esp
// 00596128  51                   push ecx
// 00596129  53                   push ebx
// 0059612a  56                   push esi
// 0059612b  57                   push edi
// 0059612c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0059612f  8bf1                 mov esi, ecx
// 00596131  6a10                 push 0x10
// 00596133  c70600000000         mov dword ptr [esi], 0
// 00596139  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00596140  e8dba71000           call 0x6a0920
// 00596145  83c404               add esp, 4
// 00596148  85c0                 test eax, eax
// 0059614a  7419                 je 0x596165
// 0059614c  b901000000           mov ecx, 1
// 00596151  894804               mov dword ptr [eax + 4], ecx
// 00596154  894808               mov dword ptr [eax + 8], ecx
// 00596157  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0059615a  c700f4228300         mov dword ptr [eax], 0x8322f4
// 00596160  89480c               mov dword ptr [eax + 0xc], ecx
// 00596163  eb02                 jmp 0x596167
// 00596165  33c0                 xor eax, eax
// 00596167  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0059616a  8906                 mov dword ptr [esi], eax
// 0059616c  5f                   pop edi
// 0059616d  8bc6                 mov eax, esi
// 0059616f  5e                   pop esi
// 00596170  64890d00000000       mov dword ptr fs:[0], ecx
// 00596177  5b                   pop ebx
// 00596178  8be5                 mov esp, ebp
// 0059617a  5d                   pop ebp
// 0059617b  c20400               ret 4
// 0059617e  8b5508               mov edx, dword ptr [ebp + 8]
// 00596181  52                   push edx
// 00596182  e8c9faffff           call 0x595c50
// 00596187  83c404               add esp, 4
// 0059618a  6a00                 push 0
// 0059618c  6a00                 push 0
// 0059618e  e8f9b31000           call 0x6a158c

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
