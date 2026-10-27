// from server: 100% by king_originala
// roc 2008-06 00452790  unit: CRobloxDoc  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00452790
//
// 00452790  55                   push ebp
// 00452791  8bec                 mov ebp, esp
// 00452793  6aff                 push -1
// 00452795  68801e7c00           push 0x7c1e80
// 0045279a  64a100000000         mov eax, dword ptr fs:[0]
// 004527a0  50                   push eax
// 004527a1  64892500000000       mov dword ptr fs:[0], esp
// 004527a8  51                   push ecx
// 004527a9  53                   push ebx
// 004527aa  56                   push esi
// 004527ab  57                   push edi
// 004527ac  8965f0               mov dword ptr [ebp - 0x10], esp
// 004527af  8bf1                 mov esi, ecx
// 004527b1  6a14                 push 0x14
// 004527b3  c70600000000         mov dword ptr [esi], 0
// 004527b9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004527c0  e85be12400           call 0x6a0920
// 004527c5  83c404               add esp, 4
// 004527c8  85c0                 test eax, eax
// 004527ca  7419                 je 0x4527e5
// 004527cc  b901000000           mov ecx, 1
// 004527d1  894804               mov dword ptr [eax + 4], ecx
// 004527d4  894808               mov dword ptr [eax + 8], ecx
// 004527d7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004527da  c700647e8100         mov dword ptr [eax], 0x817e64
// 004527e0  89480c               mov dword ptr [eax + 0xc], ecx
// 004527e3  eb02                 jmp 0x4527e7
// 004527e5  33c0                 xor eax, eax
// 004527e7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004527ea  8906                 mov dword ptr [esi], eax
// 004527ec  5f                   pop edi
// 004527ed  8bc6                 mov eax, esi
// 004527ef  5e                   pop esi
// 004527f0  64890d00000000       mov dword ptr fs:[0], ecx
// 004527f7  5b                   pop ebx
// 004527f8  8be5                 mov esp, ebp
// 004527fa  5d                   pop ebp
// 004527fb  c20800               ret 8
// 004527fe  8b5508               mov edx, dword ptr [ebp + 8]
// 00452801  52                   push edx
// 00452802  8d4d0c               lea ecx, [ebp + 0xc]
// 00452805  e82636fbff           call 0x405e30
// 0045280a  6a00                 push 0
// 0045280c  6a00                 push 0
// 0045280e  e879ed2400           call 0x6a158c

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
