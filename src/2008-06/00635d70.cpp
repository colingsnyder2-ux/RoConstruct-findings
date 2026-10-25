// from server: 100% by tester
// roc 2008-06 00635d70  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635d70
//
// 00635d70  55                   push ebp
// 00635d71  8bec                 mov ebp, esp
// 00635d73  6aff                 push -1
// 00635d75  6870a07d00           push 0x7da070
// 00635d7a  64a100000000         mov eax, dword ptr fs:[0]
// 00635d80  50                   push eax
// 00635d81  64892500000000       mov dword ptr fs:[0], esp
// 00635d88  51                   push ecx
// 00635d89  53                   push ebx
// 00635d8a  56                   push esi
// 00635d8b  57                   push edi
// 00635d8c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00635d8f  8bf1                 mov esi, ecx
// 00635d91  6a14                 push 0x14
// 00635d93  c70600000000         mov dword ptr [esi], 0
// 00635d99  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00635da0  e87bab0600           call 0x6a0920
// 00635da5  83c404               add esp, 4
// 00635da8  85c0                 test eax, eax
// 00635daa  7419                 je 0x635dc5
// 00635dac  b901000000           mov ecx, 1
// 00635db1  894804               mov dword ptr [eax + 4], ecx
// 00635db4  894808               mov dword ptr [eax + 8], ecx
// 00635db7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00635dba  c70050898400         mov dword ptr [eax], 0x848950
// 00635dc0  89480c               mov dword ptr [eax + 0xc], ecx
// 00635dc3  eb02                 jmp 0x635dc7
// 00635dc5  33c0                 xor eax, eax
// 00635dc7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00635dca  8906                 mov dword ptr [esi], eax
// 00635dcc  5f                   pop edi
// 00635dcd  8bc6                 mov eax, esi
// 00635dcf  5e                   pop esi
// 00635dd0  64890d00000000       mov dword ptr fs:[0], ecx
// 00635dd7  5b                   pop ebx
// 00635dd8  8be5                 mov esp, ebp
// 00635dda  5d                   pop ebp
// 00635ddb  c20800               ret 8

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
