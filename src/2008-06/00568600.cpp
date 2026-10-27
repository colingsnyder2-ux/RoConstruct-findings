// from server: 100% by king_originala
// roc 2008-06 00568600  unit: boost::thread_resource_error  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568600
//
// 00568600  55                   push ebp
// 00568601  8bec                 mov ebp, esp
// 00568603  6aff                 push -1
// 00568605  6870f67c00           push 0x7cf670
// 0056860a  64a100000000         mov eax, dword ptr fs:[0]
// 00568610  50                   push eax
// 00568611  64892500000000       mov dword ptr fs:[0], esp
// 00568618  51                   push ecx
// 00568619  53                   push ebx
// 0056861a  56                   push esi
// 0056861b  57                   push edi
// 0056861c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0056861f  8bf1                 mov esi, ecx
// 00568621  6a14                 push 0x14
// 00568623  c70600000000         mov dword ptr [esi], 0
// 00568629  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00568630  e8eb821300           call 0x6a0920
// 00568635  83c404               add esp, 4
// 00568638  85c0                 test eax, eax
// 0056863a  7419                 je 0x568655
// 0056863c  b901000000           mov ecx, 1
// 00568641  894804               mov dword ptr [eax + 4], ecx
// 00568644  894808               mov dword ptr [eax + 8], ecx
// 00568647  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0056864a  c70028f08200         mov dword ptr [eax], 0x82f028
// 00568650  89480c               mov dword ptr [eax + 0xc], ecx
// 00568653  eb02                 jmp 0x568657
// 00568655  33c0                 xor eax, eax
// 00568657  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0056865a  8906                 mov dword ptr [esi], eax
// 0056865c  5f                   pop edi
// 0056865d  8bc6                 mov eax, esi
// 0056865f  5e                   pop esi
// 00568660  64890d00000000       mov dword ptr fs:[0], ecx
// 00568667  5b                   pop ebx
// 00568668  8be5                 mov esp, ebp
// 0056866a  5d                   pop ebp
// 0056866b  c20800               ret 8
// 0056866e  8b5508               mov edx, dword ptr [ebp + 8]
// 00568671  52                   push edx
// 00568672  8d4d0c               lea ecx, [ebp + 0xc]
// 00568675  e8b6d7e9ff           call 0x405e30
// 0056867a  6a00                 push 0
// 0056867c  6a00                 push 0
// 0056867e  e8098f1300           call 0x6a158c

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
