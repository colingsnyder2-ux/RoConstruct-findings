// from server: 100% by tester
// roc 2008-06 0049a310  unit: RBX::Network::VClient::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a310
//
// 0049a310  55                   push ebp
// 0049a311  8bec                 mov ebp, esp
// 0049a313  6aff                 push -1
// 0049a315  68f06f7c00           push 0x7c6ff0
// 0049a31a  64a100000000         mov eax, dword ptr fs:[0]
// 0049a320  50                   push eax
// 0049a321  64892500000000       mov dword ptr fs:[0], esp
// 0049a328  51                   push ecx
// 0049a329  53                   push ebx
// 0049a32a  56                   push esi
// 0049a32b  57                   push edi
// 0049a32c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0049a32f  8bf1                 mov esi, ecx
// 0049a331  6a14                 push 0x14
// 0049a333  c70600000000         mov dword ptr [esi], 0
// 0049a339  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0049a340  e8db652000           call 0x6a0920
// 0049a345  83c404               add esp, 4
// 0049a348  85c0                 test eax, eax
// 0049a34a  7419                 je 0x49a365
// 0049a34c  b901000000           mov ecx, 1
// 0049a351  894804               mov dword ptr [eax + 4], ecx
// 0049a354  894808               mov dword ptr [eax + 8], ecx
// 0049a357  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0049a35a  c7003c288200         mov dword ptr [eax], 0x82283c
// 0049a360  89480c               mov dword ptr [eax + 0xc], ecx
// 0049a363  eb02                 jmp 0x49a367
// 0049a365  33c0                 xor eax, eax
// 0049a367  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049a36a  8906                 mov dword ptr [esi], eax
// 0049a36c  5f                   pop edi
// 0049a36d  8bc6                 mov eax, esi
// 0049a36f  5e                   pop esi
// 0049a370  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a377  5b                   pop ebx
// 0049a378  8be5                 mov esp, ebp
// 0049a37a  5d                   pop ebp
// 0049a37b  c20800               ret 8
// 0049a37e  8b5508               mov edx, dword ptr [ebp + 8]
// 0049a381  52                   push edx
// 0049a382  8d4d0c               lea ecx, [ebp + 0xc]
// 0049a385  e8a6baf6ff           call 0x405e30
// 0049a38a  6a00                 push 0
// 0049a38c  6a00                 push 0
// 0049a38e  e8f9712000           call 0x6a158c

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
