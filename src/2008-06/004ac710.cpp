// from server: 100% by tester
// roc 2008-06 004ac710  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac710
//
// 004ac710  55                   push ebp
// 004ac711  8bec                 mov ebp, esp
// 004ac713  6aff                 push -1
// 004ac715  68b0837c00           push 0x7c83b0
// 004ac71a  64a100000000         mov eax, dword ptr fs:[0]
// 004ac720  50                   push eax
// 004ac721  64892500000000       mov dword ptr fs:[0], esp
// 004ac728  51                   push ecx
// 004ac729  53                   push ebx
// 004ac72a  56                   push esi
// 004ac72b  57                   push edi
// 004ac72c  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ac72f  8bf1                 mov esi, ecx
// 004ac731  6a14                 push 0x14
// 004ac733  c70600000000         mov dword ptr [esi], 0
// 004ac739  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ac740  e8db411f00           call 0x6a0920
// 004ac745  83c404               add esp, 4
// 004ac748  85c0                 test eax, eax
// 004ac74a  7419                 je 0x4ac765
// 004ac74c  b901000000           mov ecx, 1
// 004ac751  894804               mov dword ptr [eax + 4], ecx
// 004ac754  894808               mov dword ptr [eax + 8], ecx
// 004ac757  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004ac75a  c700bc478200         mov dword ptr [eax], 0x8247bc
// 004ac760  89480c               mov dword ptr [eax + 0xc], ecx
// 004ac763  eb02                 jmp 0x4ac767
// 004ac765  33c0                 xor eax, eax
// 004ac767  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ac76a  8906                 mov dword ptr [esi], eax
// 004ac76c  5f                   pop edi
// 004ac76d  8bc6                 mov eax, esi
// 004ac76f  5e                   pop esi
// 004ac770  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac777  5b                   pop ebx
// 004ac778  8be5                 mov esp, ebp
// 004ac77a  5d                   pop ebp
// 004ac77b  c20800               ret 8

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
