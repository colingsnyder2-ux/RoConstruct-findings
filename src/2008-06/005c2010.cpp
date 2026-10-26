// from server: 100% by king_originala
// roc 2008-06 005c2010  unit: RBX::VBodyThrust::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2010
//
// 005c2010  55                   push ebp
// 005c2011  8bec                 mov ebp, esp
// 005c2013  6aff                 push -1
// 005c2015  68f0457d00           push 0x7d45f0
// 005c201a  64a100000000         mov eax, dword ptr fs:[0]
// 005c2020  50                   push eax
// 005c2021  64892500000000       mov dword ptr fs:[0], esp
// 005c2028  51                   push ecx
// 005c2029  53                   push ebx
// 005c202a  56                   push esi
// 005c202b  57                   push edi
// 005c202c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c202f  8bf1                 mov esi, ecx
// 005c2031  6a14                 push 0x14
// 005c2033  c70600000000         mov dword ptr [esi], 0
// 005c2039  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c2040  e8dbe80d00           call 0x6a0920
// 005c2045  83c404               add esp, 4
// 005c2048  85c0                 test eax, eax
// 005c204a  7419                 je 0x5c2065
// 005c204c  b901000000           mov ecx, 1
// 005c2051  894804               mov dword ptr [eax + 4], ecx
// 005c2054  894808               mov dword ptr [eax + 8], ecx
// 005c2057  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c205a  c70030898300         mov dword ptr [eax], 0x838930
// 005c2060  89480c               mov dword ptr [eax + 0xc], ecx
// 005c2063  eb02                 jmp 0x5c2067
// 005c2065  33c0                 xor eax, eax
// 005c2067  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c206a  8906                 mov dword ptr [esi], eax
// 005c206c  5f                   pop edi
// 005c206d  8bc6                 mov eax, esi
// 005c206f  5e                   pop esi
// 005c2070  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2077  5b                   pop ebx
// 005c2078  8be5                 mov esp, ebp
// 005c207a  5d                   pop ebp
// 005c207b  c20800               ret 8
// 005c207e  8b5508               mov edx, dword ptr [ebp + 8]
// 005c2081  52                   push edx
// 005c2082  8d4d0c               lea ecx, [ebp + 0xc]
// 005c2085  e8a63de4ff           call 0x405e30
// 005c208a  6a00                 push 0
// 005c208c  6a00                 push 0
// 005c208e  e8f9f40d00           call 0x6a158c

typedef unsigned int size_t;
void* __cdecl operator new(size_t);

struct Deleter {
    void operator()(void*) const;
};

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    virtual void* get_deleter(const void*);

    long uses;
    long weak;
    void* object;
    Deleter deleter;

    Control(void* p, Deleter d)
        : uses(1), weak(1), object(p), deleter(d) {}
};

struct S {
    Control* control;
    S(void*, Deleter);
};

S::S(void* p, Deleter d) : control(0)
{
    try {
        control = new Control(p, d);
    } catch (...) {
        d(p);
        throw;
    }
}
