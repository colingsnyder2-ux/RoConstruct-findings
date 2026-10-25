// from server: 100% by king_originala
// roc 2008-06 00636430  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636430
//
// 00636430  6aff                 push -1
// 00636432  68a8647c00           push 0x7c64a8
// 00636437  64a100000000         mov eax, dword ptr fs:[0]
// 0063643d  50                   push eax
// 0063643e  64892500000000       mov dword ptr fs:[0], esp
// 00636445  83ec18               sub esp, 0x18
// 00636448  57                   push edi
// 00636449  8bf9                 mov edi, ecx
// 0063644b  6a01                 push 1
// 0063644d  8d4c2408             lea ecx, [esp + 8]
// 00636451  e81a4ddeff           call 0x41b170
// 00636456  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063645a  2b442410             sub eax, dword ptr [esp + 0x10]
// 0063645e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00636466  c1f802               sar eax, 2
// 00636469  85c0                 test eax, eax
// 0063646b  7706                 ja 0x636473
// 0063646d  ff1590288000         call dword ptr [0x802890]
// 00636473  56                   push esi
// 00636474  8b742414             mov esi, dword ptr [esp + 0x14]
// 00636478  6a10                 push 0x10
// 0063647a  e8a1a40600           call 0x6a0920
// 0063647f  83c404               add esp, 4
// 00636482  85c0                 test eax, eax
// 00636484  740f                 je 0x636495
// 00636486  dd442430             fld qword ptr [esp + 0x30]
// 0063648a  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 00636490  dd5808               fstp qword ptr [eax + 8]
// 00636493  eb02                 jmp 0x636497
// 00636495  33c0                 xor eax, eax
// 00636497  8d542430             lea edx, [esp + 0x30]
// 0063649b  8bc8                 mov ecx, eax
// 0063649d  3bd6                 cmp edx, esi
// 0063649f  7404                 je 0x6364a5
// 006364a1  8b0e                 mov ecx, dword ptr [esi]
// 006364a3  8906                 mov dword ptr [esi], eax
// 006364a5  5e                   pop esi
// 006364a6  85c9                 test ecx, ecx
// 006364a8  7408                 je 0x6364b2
// 006364aa  8b01                 mov eax, dword ptr [ecx]
// 006364ac  8b10                 mov edx, dword ptr [eax]
// 006364ae  6a01                 push 1
// 006364b0  ffd2                 call edx
// 006364b2  8b0f                 mov ecx, dword ptr [edi]
// 006364b4  8b01                 mov eax, dword ptr [ecx]
// 006364b6  8b4004               mov eax, dword ptr [eax + 4]
// 006364b9  8d542404             lea edx, [esp + 4]
// 006364bd  52                   push edx
// 006364be  ffd0                 call eax
// 006364c0  8d4c2404             lea ecx, [esp + 4]
// 006364c4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 006364cc  e84f4adeff           call 0x41af20
// 006364d1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006364d5  5f                   pop edi
// 006364d6  64890d00000000       mov dword ptr fs:[0], ecx
// 006364dd  83c424               add esp, 0x24
// 006364e0  c20800               ret 8

extern "C" void (__cdecl* invalid_parameter_noinfo)();
void* __cdecl operator new(unsigned int);

struct Value {
    Value(double);
    virtual ~Value();
    double number;
};

inline Value::Value(double n) : number(n)
{
}

struct Buffer {
    unsigned int state[3];
    Value** first;
    Value** last;
    Value** limit;

    Buffer(unsigned int);
    ~Buffer();
};

struct Receiver {
    virtual ~Receiver();
    virtual void apply(Buffer&);
};

struct S {
    Receiver* receiver;
    void f(double);
};

void S::f(double number)
{
    Buffer values(1);

    if (static_cast<unsigned int>(values.last - values.first) <= 0U)
        invalid_parameter_noinfo();

    Value** slot = values.first;
    Value* replacement = new Value(number);

    Value* previous = replacement;
    if (static_cast<void*>(&number) != static_cast<void*>(slot)) {
        previous = *slot;
        *slot = replacement;
    }

    if (previous)
        delete previous;

    receiver->apply(values);
}
