// from server: 100% by tester
// roc 2008-06 00635150  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635150
//
// 00635150  55                   push ebp
// 00635151  8bec                 mov ebp, esp
// 00635153  6aff                 push -1
// 00635155  6820a07d00           push 0x7da020
// 0063515a  64a100000000         mov eax, dword ptr fs:[0]
// 00635160  50                   push eax
// 00635161  64892500000000       mov dword ptr fs:[0], esp
// 00635168  51                   push ecx
// 00635169  53                   push ebx
// 0063516a  56                   push esi
// 0063516b  57                   push edi
// 0063516c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0063516f  8bf1                 mov esi, ecx
// 00635171  6a14                 push 0x14
// 00635173  c70600000000         mov dword ptr [esi], 0
// 00635179  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00635180  e89bb70600           call 0x6a0920
// 00635185  83c404               add esp, 4
// 00635188  85c0                 test eax, eax
// 0063518a  7419                 je 0x6351a5
// 0063518c  b901000000           mov ecx, 1
// 00635191  894804               mov dword ptr [eax + 4], ecx
// 00635194  894808               mov dword ptr [eax + 8], ecx
// 00635197  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0063519a  c700f0848400         mov dword ptr [eax], 0x8484f0
// 006351a0  89480c               mov dword ptr [eax + 0xc], ecx
// 006351a3  eb02                 jmp 0x6351a7
// 006351a5  33c0                 xor eax, eax
// 006351a7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006351aa  8906                 mov dword ptr [esi], eax
// 006351ac  5f                   pop edi
// 006351ad  8bc6                 mov eax, esi
// 006351af  5e                   pop esi
// 006351b0  64890d00000000       mov dword ptr fs:[0], ecx
// 006351b7  5b                   pop ebx
// 006351b8  8be5                 mov esp, ebp
// 006351ba  5d                   pop ebp
// 006351bb  c20800               ret 8

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
