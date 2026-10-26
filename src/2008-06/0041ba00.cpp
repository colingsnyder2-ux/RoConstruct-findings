// from server: 100% by tester
// roc 2008-06 0041ba00  unit: VDHTMLWindowService::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ba00
//
// 0041ba00  55                   push ebp
// 0041ba01  8bec                 mov ebp, esp
// 0041ba03  6aff                 push -1
// 0041ba05  68b0e07b00           push 0x7be0b0
// 0041ba0a  64a100000000         mov eax, dword ptr fs:[0]
// 0041ba10  50                   push eax
// 0041ba11  64892500000000       mov dword ptr fs:[0], esp
// 0041ba18  51                   push ecx
// 0041ba19  53                   push ebx
// 0041ba1a  56                   push esi
// 0041ba1b  57                   push edi
// 0041ba1c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041ba1f  8bf1                 mov esi, ecx
// 0041ba21  6a14                 push 0x14
// 0041ba23  c70600000000         mov dword ptr [esi], 0
// 0041ba29  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041ba30  e8eb4e2800           call 0x6a0920
// 0041ba35  83c404               add esp, 4
// 0041ba38  85c0                 test eax, eax
// 0041ba3a  7419                 je 0x41ba55
// 0041ba3c  b901000000           mov ecx, 1
// 0041ba41  894804               mov dword ptr [eax + 4], ecx
// 0041ba44  894808               mov dword ptr [eax + 8], ecx
// 0041ba47  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041ba4a  c70010ee8000         mov dword ptr [eax], 0x80ee10
// 0041ba50  89480c               mov dword ptr [eax + 0xc], ecx
// 0041ba53  eb02                 jmp 0x41ba57
// 0041ba55  33c0                 xor eax, eax
// 0041ba57  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041ba5a  8906                 mov dword ptr [esi], eax
// 0041ba5c  5f                   pop edi
// 0041ba5d  8bc6                 mov eax, esi
// 0041ba5f  5e                   pop esi
// 0041ba60  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ba67  5b                   pop ebx
// 0041ba68  8be5                 mov esp, ebp
// 0041ba6a  5d                   pop ebp
// 0041ba6b  c20800               ret 8
// 0041ba6e  8b5508               mov edx, dword ptr [ebp + 8]
// 0041ba71  52                   push edx
// 0041ba72  8d4d0c               lea ecx, [ebp + 0xc]
// 0041ba75  e8b6a3feff           call 0x405e30
// 0041ba7a  6a00                 push 0
// 0041ba7c  6a00                 push 0
// 0041ba7e  e8095b2800           call 0x6a158c

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
