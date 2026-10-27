// from server: 100% by king_originala
// roc 2008-06 00576810  unit: RBX::DataModel  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576810
//
// 00576810  55                   push ebp
// 00576811  8bec                 mov ebp, esp
// 00576813  6aff                 push -1
// 00576815  6860067d00           push 0x7d0660
// 0057681a  64a100000000         mov eax, dword ptr fs:[0]
// 00576820  50                   push eax
// 00576821  64892500000000       mov dword ptr fs:[0], esp
// 00576828  51                   push ecx
// 00576829  53                   push ebx
// 0057682a  56                   push esi
// 0057682b  57                   push edi
// 0057682c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0057682f  8bf1                 mov esi, ecx
// 00576831  6a14                 push 0x14
// 00576833  c70600000000         mov dword ptr [esi], 0
// 00576839  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00576840  e8dba01200           call 0x6a0920
// 00576845  83c404               add esp, 4
// 00576848  85c0                 test eax, eax
// 0057684a  7419                 je 0x576865
// 0057684c  b901000000           mov ecx, 1
// 00576851  894804               mov dword ptr [eax + 4], ecx
// 00576854  894808               mov dword ptr [eax + 8], ecx
// 00576857  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0057685a  c700fcfd8200         mov dword ptr [eax], 0x82fdfc
// 00576860  89480c               mov dword ptr [eax + 0xc], ecx
// 00576863  eb02                 jmp 0x576867
// 00576865  33c0                 xor eax, eax
// 00576867  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0057686a  8906                 mov dword ptr [esi], eax
// 0057686c  5f                   pop edi
// 0057686d  8bc6                 mov eax, esi
// 0057686f  5e                   pop esi
// 00576870  64890d00000000       mov dword ptr fs:[0], ecx
// 00576877  5b                   pop ebx
// 00576878  8be5                 mov esp, ebp
// 0057687a  5d                   pop ebp
// 0057687b  c20800               ret 8
// 0057687e  8b5508               mov edx, dword ptr [ebp + 8]
// 00576881  52                   push edx
// 00576882  8d4d0c               lea ecx, [ebp + 0xc]
// 00576885  e8a6f5e8ff           call 0x405e30
// 0057688a  6a00                 push 0
// 0057688c  6a00                 push 0
// 0057688e  e8f9ac1200           call 0x6a158c

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
