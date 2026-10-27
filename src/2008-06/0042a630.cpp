// from server: 100% by tester
// roc 2008-06 0042a630  unit: CopyVerb  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a630
//
// 0042a630  55                   push ebp
// 00414821  8bec                 mov ebp, esp
// 00414823  6aff                 push -1
// 00414825  6860d97b00           push 0x7bd960
// 0041482a  64a100000000         mov eax, dword ptr fs:[0]
// 00414830  50                   push eax
// 00414831  64892500000000       mov dword ptr fs:[0], esp
// 00414838  51                   push ecx
// 00414839  53                   push ebx
// 0041483a  56                   push esi
// 0041483b  57                   push edi
// 0041483c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041483f  8bf1                 mov esi, ecx
// 00414841  6a14                 push 0x14
// 00414843  c70600000000         mov dword ptr [esi], 0
// 00414849  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00414850  e8cbc02800           call 0x6a0920
// 00414855  83c404               add esp, 4
// 00414858  85c0                 test eax, eax
// 0041485a  7419                 je 0x414875
// 0041485c  b901000000           mov ecx, 1
// 00414861  894804               mov dword ptr [eax + 4], ecx
// 00414864  894808               mov dword ptr [eax + 8], ecx
// 00414867  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041486a  c700b4e98000         mov dword ptr [eax], 0x80e9b4
// 00414870  89480c               mov dword ptr [eax + 0xc], ecx
// 00414873  eb02                 jmp 0x414877
// 00414875  33c0                 xor eax, eax
// 00414877  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041487a  8906                 mov dword ptr [esi], eax
// 0041487c  5f                   pop edi
// 0041487d  8bc6                 mov eax, esi
// 0041487f  5e                   pop esi
// 00414880  64890d00000000       mov dword ptr fs:[0], ecx
// 00414887  5b                   pop ebx
// 00414888  8be5                 mov esp, ebp
// 0041488a  5d                   pop ebp
// 0041488b  c20800               ret 8
// 0041488e  8b5508               mov edx, dword ptr [ebp + 8]
// 00414891  52                   push edx
// 00414892  8d4d0c               lea ecx, [ebp + 0xc]
// 00414895  e89615ffff           call 0x405e30
// 0041489a  6a00                 push 0
// 0041489c  6a00                 push 0
// 0041489e  e8e9cc2800           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

extern void deleterCall(void*);
struct Deleter {
    void operator()(void*) const;
};

inline void Deleter::operator()(void* p) const { deleterCall(p); }

struct Control {
    void** vtable;
    int strong;
    int weak;
    void* object;

    Control(void*, const Deleter&);
};

inline Control::Control(void* p, const Deleter& d)
    : strong(1), weak(1)
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
