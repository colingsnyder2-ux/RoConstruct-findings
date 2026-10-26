// from server: 100% by tester
// roc 2008-06 00593d90  unit: RBX::Lua::FunctionRef  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00593d90
//
// 00593d90  55                   push ebp
// 00593d91  8bec                 mov ebp, esp
// 00593d93  6aff                 push -1
// 00593d95  68001f7d00           push 0x7d1f00
// 00593d9a  64a100000000         mov eax, dword ptr fs:[0]
// 00593da0  50                   push eax
// 00593da1  64892500000000       mov dword ptr fs:[0], esp
// 00593da8  51                   push ecx
// 00593da9  53                   push ebx
// 00593daa  56                   push esi
// 00593dab  57                   push edi
// 00593dac  8965f0               mov dword ptr [ebp - 0x10], esp
// 00593daf  8bf1                 mov esi, ecx
// 00593db1  6a10                 push 0x10
// 00593db3  c70600000000         mov dword ptr [esi], 0
// 00593db9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00593dc0  e85bcb1000           call 0x6a0920
// 00593dc5  83c404               add esp, 4
// 00593dc8  85c0                 test eax, eax
// 00593dca  7419                 je 0x593de5
// 00593dcc  b901000000           mov ecx, 1
// 00593dd1  894804               mov dword ptr [eax + 4], ecx
// 00593dd4  894808               mov dword ptr [eax + 8], ecx
// 00593dd7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00593dda  c70044228300         mov dword ptr [eax], 0x832244
// 00593de0  89480c               mov dword ptr [eax + 0xc], ecx
// 00593de3  eb02                 jmp 0x593de7
// 00593de5  33c0                 xor eax, eax
// 00593de7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00593dea  8906                 mov dword ptr [esi], eax
// 00593dec  5f                   pop edi
// 00593ded  8bc6                 mov eax, esi
// 00593def  5e                   pop esi
// 00593df0  64890d00000000       mov dword ptr fs:[0], ecx
// 00593df7  5b                   pop ebx
// 00593df8  8be5                 mov esp, ebp
// 00593dfa  5d                   pop ebp
// 00593dfb  c20400               ret 4
// 00593dfe  8b5508               mov edx, dword ptr [ebp + 8]
// 00593e01  52                   push edx
// 00593e02  e8d929feff           call 0x5767e0
// 00593e07  83c404               add esp, 4
// 00593e0a  6a00                 push 0
// 00593e0c  6a00                 push 0
// 00593e0e  e879d71000           call 0x6a158c

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
