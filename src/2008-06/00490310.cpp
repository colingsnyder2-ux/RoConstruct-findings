// from server: 100% by tester
// roc 2008-06 00490310  unit: RBX::VSkin::?$FactoryProduct::Creator  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00490310
//
// 00490310  55                   push ebp
// 00490311  8bec                 mov ebp, esp
// 00490313  6aff                 push -1
// 00490315  6810647c00           push 0x7c6410
// 0049031a  64a100000000         mov eax, dword ptr fs:[0]
// 00490320  50                   push eax
// 00490321  64892500000000       mov dword ptr fs:[0], esp
// 00490328  51                   push ecx
// 00490329  53                   push ebx
// 0049032a  56                   push esi
// 0049032b  57                   push edi
// 0049032c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0049032f  8bf1                 mov esi, ecx
// 00490331  6a14                 push 0x14
// 00490333  c70600000000         mov dword ptr [esi], 0
// 00490339  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00490340  e8db052100           call 0x6a0920
// 00490345  83c404               add esp, 4
// 00490348  85c0                 test eax, eax
// 0049034a  7419                 je 0x490365
// 0049034c  b901000000           mov ecx, 1
// 00490351  894804               mov dword ptr [eax + 4], ecx
// 00490354  894808               mov dword ptr [eax + 8], ecx
// 00490357  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0049035a  c700141b8200         mov dword ptr [eax], 0x821b14
// 00490360  89480c               mov dword ptr [eax + 0xc], ecx
// 00490363  eb02                 jmp 0x490367
// 00490365  33c0                 xor eax, eax
// 00490367  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049036a  8906                 mov dword ptr [esi], eax
// 0049036c  5f                   pop edi
// 0049036d  8bc6                 mov eax, esi
// 0049036f  5e                   pop esi
// 00490370  64890d00000000       mov dword ptr fs:[0], ecx
// 00490377  5b                   pop ebx
// 00490378  8be5                 mov esp, ebp
// 0049037a  5d                   pop ebp
// 0049037b  c20800               ret 8
// 0049037e  8b5508               mov edx, dword ptr [ebp + 8]
// 00490381  52                   push edx
// 00490382  8d4d0c               lea ecx, [ebp + 0xc]
// 00490385  e8a65af7ff           call 0x405e30
// 0049038a  6a00                 push 0
// 0049038c  6a00                 push 0
// 0049038e  e8f9112100           call 0x6a158c

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
