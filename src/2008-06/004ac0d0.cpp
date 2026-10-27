// from server: 100% by colin
// roc 2008-06 004ac0d0  unit: RBX::Network::Replicator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac0d0
//
// 004ac0d0  55                   push ebp
// 004ac0d1  8bec                 mov ebp, esp
// 004ac0d3  6aff                 push -1
// 004ac0d5  6830837c00           push 0x7c8330
// 004ac0da  64a100000000         mov eax, dword ptr fs:[0]
// 004ac0e0  50                   push eax
// 004ac0e1  64892500000000       mov dword ptr fs:[0], esp
// 004ac0e8  51                   push ecx
// 004ac0e9  53                   push ebx
// 004ac0ea  56                   push esi
// 004ac0eb  57                   push edi
// 004ac0ec  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac0ef  8bf1                 mov esi, ecx
// 004ac0f1  6a10                 push 0x10
// 004ac0f3  c70600000000         mov dword ptr [esi], 0
// 004ac0f9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac100  e81b481f00           call 0x6a0920
// 004ac105  83c404               add esp, 4
// 004ac108  85c0                 test eax, eax
// 004ac10a  7419                 je 0x4ac125
// 004ac10c  b901000000           mov ecx, 1
// 004ac111  894804               mov dword ptr [eax + 4], ecx
// 004ac114  894808               mov dword ptr [eax + 8], ecx
// 004ac117  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac11a  c7001c478200         mov dword ptr [eax], 0x82471c
// 004ac120  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac123  eb02                 jmp 0x4ac127
// 004ac125  33c0                 xor eax, eax
// 004ac127  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac12a  8906                 mov dword ptr [esi], eax
// 004ac12c  5f                   pop edi
// 004ac12d  8bc6                 mov eax, esi
// 004ac12f  5e                   pop esi
// 004ac130  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac137  5b                   pop ebx
// 004ac138  8be5                 mov esp, ebp
// 004ac13a  5d                   pop ebp
// 004ac13b  c20400               ret 4
// 004ac13e  8b5508               mov edx, dword ptr [ebp + 8]
// 004ac141  52                   push edx
// 004ac142  e829baf7ff           call 0x427b70
// 004ac147  83c404               add esp, 4
// 004ac14a  6a00                 push 0
// 004ac14c  6a00                 push 0
// 004ac14e  e839541f00           call 0x6a158c

// from server: 100% by tester
// roc 2008-06 004ac0d0  unit: RBX::Lua::LuaArguments  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac0d0
//
// 004ac0d0  55                   push ebp
// 0061f5a1  8bec                 mov ebp, esp
// 0061f5a3  6aff                 push -1
// 0061f5a5  68e0947d00           push 0x7d94e0
// 0061f5aa  64a100000000         mov eax, dword ptr fs:[0]
// 0061f5b0  50                   push eax
// 0061f5b1  64892500000000       mov dword ptr fs:[0], esp
// 0061f5b8  51                   push ecx
// 0061f5b9  53                   push ebx
// 0061f5ba  56                   push esi
// 0061f5bb  57                   push edi
// 0061f5bc  8965f0               mov dword ptr [ebp - 0x10], esp
// 0061f5bf  8bf1                 mov esi, ecx
// 0061f5c1  6a10                 push 0x10
// 0061f5c3  c70600000000         mov dword ptr [esi], 0
// 0061f5c9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0061f5d0  e84b130800           call 0x6a0920
// 0061f5d5  83c404               add esp, 4
// 0061f5d8  85c0                 test eax, eax
// 0061f5da  7419                 je 0x61f5f5
// 0061f5dc  b901000000           mov ecx, 1
// 0061f5e1  894804               mov dword ptr [eax + 4], ecx
// 0061f5e4  894808               mov dword ptr [eax + 8], ecx
// 0061f5e7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0061f5ea  c7003c468400         mov dword ptr [eax], 0x84463c
// 0061f5f0  89480c               mov dword ptr [eax + 0xc], ecx
// 0061f5f3  eb02                 jmp 0x61f5f7
// 0061f5f5  33c0                 xor eax, eax
// 0061f5f7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0061f5fa  8906                 mov dword ptr [esi], eax
// 0061f5fc  5f                   pop edi
// 0061f5fd  8bc6                 mov eax, esi
// 0061f5ff  5e                   pop esi
// 0061f600  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f607  5b                   pop ebx
// 0061f608  8be5                 mov esp, ebp
// 0061f60a  5d                   pop ebp
// 0061f60b  c20400               ret 4
// 0061f60e  8b5508               mov edx, dword ptr [ebp + 8]
// 0061f611  52                   push edx
// 0061f612  e8d9fdffff           call 0x61f3f0
// 0061f617  83c404               add esp, 4
// 0061f61a  6a00                 push 0
// 0061f61c  6a00                 push 0
// 0061f61e  e8691f0800           call 0x6a158c

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

extern void objectDestroy(void*);
S::S(Object* p) : count(0)
{
    try {
        count = new Count(p);
    }
    catch (...) {
        objectDestroy(p);
        throw;
    }
}
