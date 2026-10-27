// from server: 100% by king_originala
// roc 2008-06 00600e80  unit: RBX::VTool::?$BoundPropGetSet  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600e80
//
// 00600e80  55                   push ebp
// 00600e81  8bec                 mov ebp, esp
// 00600e83  6aff                 push -1
// 00600e85  6870827d00           push 0x7d8270
// 00600e8a  64a100000000         mov eax, dword ptr fs:[0]
// 00600e90  50                   push eax
// 00600e91  64892500000000       mov dword ptr fs:[0], esp
// 00600e98  51                   push ecx
// 00600e99  53                   push ebx
// 00600e9a  56                   push esi
// 00600e9b  57                   push edi
// 00600e9c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00600e9f  8bf1                 mov esi, ecx
// 00600ea1  6a14                 push 0x14
// 00600ea3  c70600000000         mov dword ptr [esi], 0
// 00600ea9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00600eb0  e86bfa0900           call 0x6a0920
// 00600eb5  83c404               add esp, 4
// 00600eb8  85c0                 test eax, eax
// 00600eba  7419                 je 0x600ed5
// 00600ebc  b901000000           mov ecx, 1
// 00600ec1  894804               mov dword ptr [eax + 4], ecx
// 00600ec4  894808               mov dword ptr [eax + 8], ecx
// 00600ec7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00600eca  c700b01f8400         mov dword ptr [eax], 0x841fb0
// 00600ed0  89480c               mov dword ptr [eax + 0xc], ecx
// 00600ed3  eb02                 jmp 0x600ed7
// 00600ed5  33c0                 xor eax, eax
// 00600ed7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00600eda  8906                 mov dword ptr [esi], eax
// 00600edc  5f                   pop edi
// 00600edd  8bc6                 mov eax, esi
// 00600edf  5e                   pop esi
// 00600ee0  64890d00000000       mov dword ptr fs:[0], ecx
// 00600ee7  5b                   pop ebx
// 00600ee8  8be5                 mov esp, ebp
// 00600eea  5d                   pop ebp
// 00600eeb  c20800               ret 8
// 00600eee  8b5508               mov edx, dword ptr [ebp + 8]
// 00600ef1  52                   push edx
// 00600ef2  8d4d0c               lea ecx, [ebp + 0xc]
// 00600ef5  e8364fe0ff           call 0x405e30
// 00600efa  6a00                 push 0
// 00600efc  6a00                 push 0
// 00600efe  e889060a00           call 0x6a158c

#pragma optimize("y", off)

void* __cdecl operator new(unsigned int);
extern void* controlVtable[];

struct Deleter {
    void operator()(void*) const;
};



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
