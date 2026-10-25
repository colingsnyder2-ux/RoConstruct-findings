// from server: 100% by tester
// roc 2008-06 005c1170  unit: RBX::VFlagStand::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1170
//
// 005c1170  55                   push ebp
// 005c1171  8bec                 mov ebp, esp
// 005c1173  6aff                 push -1
// 005c1175  6890457d00           push 0x7d4590
// 005c117a  64a100000000         mov eax, dword ptr fs:[0]
// 005c1180  50                   push eax
// 005c1181  64892500000000       mov dword ptr fs:[0], esp
// 005c1188  51                   push ecx
// 005c1189  53                   push ebx
// 005c118a  56                   push esi
// 005c118b  57                   push edi
// 005c118c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005c118f  8bf1                 mov esi, ecx
// 005c1191  6a14                 push 0x14
// 005c1193  c70600000000         mov dword ptr [esi], 0
// 005c1199  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005c11a0  e87bf70d00           call 0x6a0920
// 005c11a5  83c404               add esp, 4
// 005c11a8  85c0                 test eax, eax
// 005c11aa  7419                 je 0x5c11c5
// 005c11ac  b901000000           mov ecx, 1
// 005c11b1  894804               mov dword ptr [eax + 4], ecx
// 005c11b4  894808               mov dword ptr [eax + 8], ecx
// 005c11b7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c11ba  c70088888300         mov dword ptr [eax], 0x838888
// 005c11c0  89480c               mov dword ptr [eax + 0xc], ecx
// 005c11c3  eb02                 jmp 0x5c11c7
// 005c11c5  33c0                 xor eax, eax
// 005c11c7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005c11ca  8906                 mov dword ptr [esi], eax
// 005c11cc  5f                   pop edi
// 005c11cd  8bc6                 mov eax, esi
// 005c11cf  5e                   pop esi
// 005c11d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005c11d7  5b                   pop ebx
// 005c11d8  8be5                 mov esp, ebp
// 005c11da  5d                   pop ebp
// 005c11db  c20800               ret 8

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
