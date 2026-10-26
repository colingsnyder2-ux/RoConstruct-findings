// from server: 100% by tester
// roc 2008-06 00635fd0  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635fd0
//
// 00635fd0  55                   push ebp
// 00635fd1  8bec                 mov ebp, esp
// 00635fd3  6aff                 push -1
// 00635fd5  6880a07d00           push 0x7da080
// 00635fda  64a100000000         mov eax, dword ptr fs:[0]
// 00635fe0  50                   push eax
// 00635fe1  64892500000000       mov dword ptr fs:[0], esp
// 00635fe8  51                   push ecx
// 00635fe9  53                   push ebx
// 00635fea  56                   push esi
// 00635feb  57                   push edi
// 00635fec  8965f0               mov dword ptr [ebp - 0x10], esp
// 00635fef  8bf1                 mov esi, ecx
// 00635ff1  6a14                 push 0x14
// 00635ff3  c70600000000         mov dword ptr [esi], 0
// 00635ff9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00636000  e81ba90600           call 0x6a0920
// 00636005  83c404               add esp, 4
// 00636008  85c0                 test eax, eax
// 0063600a  7419                 je 0x636025
// 0063600c  b901000000           mov ecx, 1
// 00636011  894804               mov dword ptr [eax + 4], ecx
// 00636014  894808               mov dword ptr [eax + 8], ecx
// 00636017  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0063601a  c700308a8400         mov dword ptr [eax], 0x848a30
// 00636020  89480c               mov dword ptr [eax + 0xc], ecx
// 00636023  eb02                 jmp 0x636027
// 00636025  33c0                 xor eax, eax
// 00636027  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0063602a  8906                 mov dword ptr [esi], eax
// 0063602c  5f                   pop edi
// 0063602d  8bc6                 mov eax, esi
// 0063602f  5e                   pop esi
// 00636030  64890d00000000       mov dword ptr fs:[0], ecx
// 00636037  5b                   pop ebx
// 00636038  8be5                 mov esp, ebp
// 0063603a  5d                   pop ebp
// 0063603b  c20800               ret 8
// 0063603e  8b5508               mov edx, dword ptr [ebp + 8]
// 00636041  52                   push edx
// 00636042  8d4d0c               lea ecx, [ebp + 0xc]
// 00636045  e8e6fddcff           call 0x405e30
// 0063604a  6a00                 push 0
// 0063604c  6a00                 push 0
// 0063604e  e839b50600           call 0x6a158c

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
