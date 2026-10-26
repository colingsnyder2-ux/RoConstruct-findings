// from server: 100% by tester
// roc 2008-06 004b5d20  unit: RBX::Network::VClient::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5d20
//
// 004b5d20  55                   push ebp
// 004b5d21  8bec                 mov ebp, esp
// 004b5d23  6aff                 push -1
// 004b5d25  68208a7c00           push 0x7c8a20
// 004b5d2a  64a100000000         mov eax, dword ptr fs:[0]
// 004b5d30  50                   push eax
// 004b5d31  64892500000000       mov dword ptr fs:[0], esp
// 004b5d38  51                   push ecx
// 004b5d39  53                   push ebx
// 004b5d3a  56                   push esi
// 004b5d3b  57                   push edi
// 004b5d3c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004b5d3f  8bf1                 mov esi, ecx
// 004b5d41  6a10                 push 0x10
// 004b5d43  c70600000000         mov dword ptr [esi], 0
// 004b5d49  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b5d50  e8cbab1e00           call 0x6a0920
// 004b5d55  83c404               add esp, 4
// 004b5d58  85c0                 test eax, eax
// 004b5d5a  7419                 je 0x4b5d75
// 004b5d5c  b901000000           mov ecx, 1
// 004b5d61  894804               mov dword ptr [eax + 4], ecx
// 004b5d64  894808               mov dword ptr [eax + 8], ecx
// 004b5d67  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b5d6a  c70008478200         mov dword ptr [eax], 0x824708
// 004b5d70  89480c               mov dword ptr [eax + 0xc], ecx
// 004b5d73  eb02                 jmp 0x4b5d77
// 004b5d75  33c0                 xor eax, eax
// 004b5d77  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004b5d7a  8906                 mov dword ptr [esi], eax
// 004b5d7c  5f                   pop edi
// 004b5d7d  8bc6                 mov eax, esi
// 004b5d7f  5e                   pop esi
// 004b5d80  64890d00000000       mov dword ptr fs:[0], ecx
// 004b5d87  5b                   pop ebx
// 004b5d88  8be5                 mov esp, ebp
// 004b5d8a  5d                   pop ebp
// 004b5d8b  c20400               ret 4
// 004b5d8e  8b5508               mov edx, dword ptr [ebp + 8]
// 004b5d91  52                   push edx
// 004b5d92  e869f4ffff           call 0x4b5200
// 004b5d97  83c404               add esp, 4
// 004b5d9a  6a00                 push 0
// 004b5d9c  6a00                 push 0
// 004b5d9e  e8e9b71e00           call 0x6a158c

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
