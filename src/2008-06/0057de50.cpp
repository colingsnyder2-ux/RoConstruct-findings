// from server: 100% by king_originala
// roc 2008-06 0057de50  unit: RBX::WatchCameraCommand  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057de50
//
// 0057de50  55                   push ebp
// 0057de51  8bec                 mov ebp, esp
// 0057de53  6aff                 push -1
// 0057de55  68800f7d00           push 0x7d0f80
// 0057de5a  64a100000000         mov eax, dword ptr fs:[0]
// 0057de60  50                   push eax
// 0057de61  64892500000000       mov dword ptr fs:[0], esp
// 0057de68  51                   push ecx
// 0057de69  53                   push ebx
// 0057de6a  56                   push esi
// 0057de6b  57                   push edi
// 0057de6c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0057de6f  8bf1                 mov esi, ecx
// 0057de71  6a14                 push 0x14
// 0057de73  c70600000000         mov dword ptr [esi], 0
// 0057de79  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0057de80  e89b2a1200           call 0x6a0920
// 0057de85  83c404               add esp, 4
// 0057de88  85c0                 test eax, eax
// 0057de8a  7419                 je 0x57dea5
// 0057de8c  b901000000           mov ecx, 1
// 0057de91  894804               mov dword ptr [eax + 4], ecx
// 0057de94  894808               mov dword ptr [eax + 8], ecx
// 0057de97  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0057de9a  c70020078300         mov dword ptr [eax], 0x830720
// 0057dea0  89480c               mov dword ptr [eax + 0xc], ecx
// 0057dea3  eb02                 jmp 0x57dea7
// 0057dea5  33c0                 xor eax, eax
// 0057dea7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0057deaa  8906                 mov dword ptr [esi], eax
// 0057deac  5f                   pop edi
// 0057dead  8bc6                 mov eax, esi
// 0057deaf  5e                   pop esi
// 0057deb0  64890d00000000       mov dword ptr fs:[0], ecx
// 0057deb7  5b                   pop ebx
// 0057deb8  8be5                 mov esp, ebp
// 0057deba  5d                   pop ebp
// 0057debb  c20800               ret 8
// 0057debe  8b5508               mov edx, dword ptr [ebp + 8]
// 0057dec1  52                   push edx
// 0057dec2  8d4d0c               lea ecx, [ebp + 0xc]
// 0057dec5  e8667fe8ff           call 0x405e30
// 0057deca  6a00                 push 0
// 0057decc  6a00                 push 0
// 0057dece  e8b9361200           call 0x6a158c

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
