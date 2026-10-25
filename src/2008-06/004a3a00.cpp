// from server: 100% by tester
// roc 2008-06 004a3a00  unit: RBX::VMessage::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3a00
//
// 004a3a00  55                   push ebp
// 004a3a01  8bec                 mov ebp, esp
// 004a3a03  6aff                 push -1
// 004a3a05  68f07c7c00           push 0x7c7cf0
// 004a3a0a  64a100000000         mov eax, dword ptr fs:[0]
// 004a3a10  50                   push eax
// 004a3a11  64892500000000       mov dword ptr fs:[0], esp
// 004a3a18  51                   push ecx
// 004a3a19  53                   push ebx
// 004a3a1a  56                   push esi
// 004a3a1b  57                   push edi
// 004a3a1c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004a3a1f  8bf1                 mov esi, ecx
// 004a3a21  6a14                 push 0x14
// 004a3a23  c70600000000         mov dword ptr [esi], 0
// 004a3a29  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004a3a30  e8ebce1f00           call 0x6a0920
// 004a3a35  83c404               add esp, 4
// 004a3a38  85c0                 test eax, eax
// 004a3a3a  7419                 je 0x4a3a55
// 004a3a3c  b901000000           mov ecx, 1
// 004a3a41  894804               mov dword ptr [eax + 4], ecx
// 004a3a44  894808               mov dword ptr [eax + 8], ecx
// 004a3a47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a3a4a  c700a8378200         mov dword ptr [eax], 0x8237a8
// 004a3a50  89480c               mov dword ptr [eax + 0xc], ecx
// 004a3a53  eb02                 jmp 0x4a3a57
// 004a3a55  33c0                 xor eax, eax
// 004a3a57  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004a3a5a  8906                 mov dword ptr [esi], eax
// 004a3a5c  5f                   pop edi
// 004a3a5d  8bc6                 mov eax, esi
// 004a3a5f  5e                   pop esi
// 004a3a60  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3a67  5b                   pop ebx
// 004a3a68  8be5                 mov esp, ebp
// 004a3a6a  5d                   pop ebp
// 004a3a6b  c20800               ret 8

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
