// from server: 100% by tester
// roc 2008-06 0048f350  unit: RBX::VSpawnerService::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f350
//
// 0048f350  55                   push ebp
// 0048f351  8bec                 mov ebp, esp
// 0048f353  6aff                 push -1
// 0048f355  6890637c00           push 0x7c6390
// 0048f35a  64a100000000         mov eax, dword ptr fs:[0]
// 0048f360  50                   push eax
// 0048f361  64892500000000       mov dword ptr fs:[0], esp
// 0048f368  51                   push ecx
// 0048f369  53                   push ebx
// 0048f36a  56                   push esi
// 0048f36b  57                   push edi
// 0048f36c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048f36f  8bf1                 mov esi, ecx
// 0048f371  6a14                 push 0x14
// 0048f373  c70600000000         mov dword ptr [esi], 0
// 0048f379  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048f380  e89b152100           call 0x6a0920
// 0048f385  83c404               add esp, 4
// 0048f388  85c0                 test eax, eax
// 0048f38a  7419                 je 0x48f3a5
// 0048f38c  b901000000           mov ecx, 1
// 0048f391  894804               mov dword ptr [eax + 4], ecx
// 0048f394  894808               mov dword ptr [eax + 8], ecx
// 0048f397  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0048f39a  c70004188200         mov dword ptr [eax], 0x821804
// 0048f3a0  89480c               mov dword ptr [eax + 0xc], ecx
// 0048f3a3  eb02                 jmp 0x48f3a7
// 0048f3a5  33c0                 xor eax, eax
// 0048f3a7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048f3aa  8906                 mov dword ptr [esi], eax
// 0048f3ac  5f                   pop edi
// 0048f3ad  8bc6                 mov eax, esi
// 0048f3af  5e                   pop esi
// 0048f3b0  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f3b7  5b                   pop ebx
// 0048f3b8  8be5                 mov esp, ebp
// 0048f3ba  5d                   pop ebp
// 0048f3bb  c20800               ret 8

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};

inline void Deleter::operator()(void*) const {}

struct Control {
    void** vtable;
    int strong;
    int weak;
    void* object;
    Deleter deleter;

    Control(void*, const Deleter&);
};

inline Control::Control(void* p, const Deleter& d)
    : strong(1), weak(1), deleter(d)
{
    vtable = controlVtable;
    object = p;
}

struct S {
    Control* control;
    S(void*, Deleter);
};

S::S(void* p, Deleter d) : control(0)
{
    try {
        control = new Control(p, d);
    }
    catch (...) {
        d(p);
        throw;
    }
}
