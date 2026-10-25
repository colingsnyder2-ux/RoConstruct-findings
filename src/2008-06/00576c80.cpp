// from server: 100% by tester
// roc 2008-06 00576c80  unit: RBX::DataModel  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576c80
//
// 00576c80  55                   push ebp
// 00576c81  8bec                 mov ebp, esp
// 00576c83  6aff                 push -1
// 00576c85  6870067d00           push 0x7d0670
// 00576c8a  64a100000000         mov eax, dword ptr fs:[0]
// 00576c90  50                   push eax
// 00576c91  64892500000000       mov dword ptr fs:[0], esp
// 00576c98  51                   push ecx
// 00576c99  53                   push ebx
// 00576c9a  56                   push esi
// 00576c9b  57                   push edi
// 00576c9c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00576c9f  8bf1                 mov esi, ecx
// 00576ca1  6a10                 push 0x10
// 00576ca3  c70600000000         mov dword ptr [esi], 0
// 00576ca9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00576cb0  e86b9c1200           call 0x6a0920
// 00576cb5  83c404               add esp, 4
// 00576cb8  85c0                 test eax, eax
// 00576cba  7419                 je 0x576cd5
// 00576cbc  b901000000           mov ecx, 1
// 00576cc1  894804               mov dword ptr [eax + 4], ecx
// 00576cc4  894808               mov dword ptr [eax + 8], ecx
// 00576cc7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00576cca  c700acfd8200         mov dword ptr [eax], 0x82fdac
// 00576cd0  89480c               mov dword ptr [eax + 0xc], ecx
// 00576cd3  eb02                 jmp 0x576cd7
// 00576cd5  33c0                 xor eax, eax
// 00576cd7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00576cda  8906                 mov dword ptr [esi], eax
// 00576cdc  5f                   pop edi
// 00576cdd  8bc6                 mov eax, esi
// 00576cdf  5e                   pop esi
// 00576ce0  64890d00000000       mov dword ptr fs:[0], ecx
// 00576ce7  5b                   pop ebx
// 00576ce8  8be5                 mov esp, ebp
// 00576cea  5d                   pop ebp
// 00576ceb  c20400               ret 4

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
