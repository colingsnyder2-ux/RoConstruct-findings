// from server: 100% by king_originala
// roc 2008-06 00595640  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595640
//
// 00595640  55                   push ebp
// 00595641  8bec                 mov ebp, esp
// 00595643  6aff                 push -1
// 00595645  6870207d00           push 0x7d2070
// 0059564a  64a100000000         mov eax, dword ptr fs:[0]
// 00595650  50                   push eax
// 00595651  64892500000000       mov dword ptr fs:[0], esp
// 00595658  51                   push ecx
// 00595659  53                   push ebx
// 0059565a  56                   push esi
// 0059565b  57                   push edi
// 0059565c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0059565f  8bf1                 mov esi, ecx
// 00595661  6a10                 push 0x10
// 00595663  c70600000000         mov dword ptr [esi], 0
// 00595669  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00595670  e8abb21000           call 0x6a0920
// 00595675  83c404               add esp, 4
// 00595678  85c0                 test eax, eax
// 0059567a  7419                 je 0x595695
// 0059567c  b901000000           mov ecx, 1
// 00595681  894804               mov dword ptr [eax + 4], ecx
// 00595684  894808               mov dword ptr [eax + 8], ecx
// 00595687  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0059568a  c700d4228300         mov dword ptr [eax], 0x8322d4
// 00595690  89480c               mov dword ptr [eax + 0xc], ecx
// 00595693  eb02                 jmp 0x595697
// 00595695  33c0                 xor eax, eax
// 00595697  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0059569a  8906                 mov dword ptr [esi], eax
// 0059569c  5f                   pop edi
// 0059569d  8bc6                 mov eax, esi
// 0059569f  5e                   pop esi
// 005956a0  64890d00000000       mov dword ptr fs:[0], ecx
// 005956a7  5b                   pop ebx
// 005956a8  8be5                 mov esp, ebp
// 005956aa  5d                   pop ebp
// 005956ab  c20400               ret 4
// 005956ae  8b5508               mov edx, dword ptr [ebp + 8]
// 005956b1  52                   push edx
// 005956b2  e859ffffff           call 0x595610
// 005956b7  83c404               add esp, 4
// 005956ba  6a00                 push 0
// 005956bc  6a00                 push 0
// 005956be  e8c9be1000           call 0x6a158c

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
