// from server: 100% by king_originala
// roc 2008-06 00579100  unit: RBX::VDataModel::?$BoundFuncDesc  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00579100
//
// 00579100  6aff                 push -1
// 00579102  68e82c7d00           push 0x7d2ce8
// 00579107  64a100000000         mov eax, dword ptr fs:[0]
// 0057910d  50                   push eax
// 0057910e  64892500000000       mov dword ptr fs:[0], esp
// 00579115  83ec14               sub esp, 0x14
// 00579118  56                   push esi
// 00579119  57                   push edi
// 0057911a  8bf9                 mov edi, ecx
// 0057911c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0057911f  8b4740               mov eax, dword ptr [edi + 0x40]
// 00579122  89442408             mov dword ptr [esp + 8], eax
// 00579126  85c9                 test ecx, ecx
// 00579128  7409                 je 0x579133
// 0057912a  8b11                 mov edx, dword ptr [ecx]
// 0057912c  8b4208               mov eax, dword ptr [edx + 8]
// 0057912f  ffd0                 call eax
// 00579131  eb02                 jmp 0x579135
// 00579133  33c0                 xor eax, eax
// 00579135  8944240c             mov dword ptr [esp + 0xc], eax
// 00579139  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057913d  8b16                 mov edx, dword ptr [esi]
// 0057913f  8b5204               mov edx, dword ptr [edx + 4]
// 00579142  8d442408             lea eax, [esp + 8]
// 00579146  50                   push eax
// 00579147  6a01                 push 1
// 00579149  8bce                 mov ecx, esi
// 0057914b  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00579153  ffd2                 call edx
// 00579155  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00579159  6a00                 push 0
// 0057915b  68a0e89200           push 0x92e8a0
// 00579160  68fc919200           push 0x9291fc
// 00579165  6a00                 push 0
// 00579167  50                   push eax
// 00579168  e859861200           call 0x6a17c6
// 0057916d  83c414               add esp, 0x14
// 00579170  85c0                 test eax, eax
// 00579172  751e                 jne 0x579192
// 00579174  6834ba8000           push 0x80ba34
// 00579179  8d4c2414             lea ecx, [esp + 0x14]
// 0057917d  ff1564288000         call dword ptr [0x802864]
// 00579183  682c368d00           push 0x8d362c
// 00579188  8d4c2414             lea ecx, [esp + 0x14]
// 0057918c  51                   push ecx
// 0057918d  e8fa831200           call 0x6a158c
// 00579192  8d542408             lea edx, [esp + 8]
// 00579196  52                   push edx
// 00579197  83c604               add esi, 4
// 0057919a  56                   push esi
// 0057919b  50                   push eax
// 0057919c  8bcf                 mov ecx, edi
// 0057919e  e89dfeffff           call 0x579040
// 005791a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005791a7  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005791af  85c9                 test ecx, ecx
// 005791b1  7408                 je 0x5791bb
// 005791b3  8b01                 mov eax, dword ptr [ecx]
// 005791b5  8b10                 mov edx, dword ptr [eax]
// 005791b7  6a01                 push 1
// 005791b9  ffd2                 call edx
// 005791bb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005791bf  5f                   pop edi
// 005791c0  5e                   pop esi
// 005791c1  64890d00000000       mov dword ptr fs:[0], ecx
// 005791c8  83c420               add esp, 0x20
// 005791cb  c20800               ret 8

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern "C" __declspec(noreturn) void __stdcall ThrowObject(void*, void*);

namespace std {
    struct bad_cast {
        char storage[12];
        bad_cast(const char*);
    };
}

extern void (__thiscall *badCastConstructor)(std::bad_cast*, const char*);

__forceinline std::bad_cast::bad_cast(const char* message) {
    badCastConstructor(this, message);
}

struct Value {
    virtual ~Value();
    virtual void unused();
    virtual Value* clone();
};

__forceinline Value* cloneValue(Value* value) {
    if (value)
        return value->clone();
    return 0;
}

struct Argument {
    void* value;
    Value* owner;

    Argument(void*, Value*);
    ~Argument();
};

__forceinline Argument::Argument(void* p, Value* q) : value(p) {
    owner = cloneValue(q);
}

__forceinline Argument::~Argument() {
    if (owner)
        delete owner;
}

struct Input {
    virtual void unused();
    virtual void get(int, Argument*);
};

struct S {
    char padding[64];
    void* value;
    Value* owner;

    void invoke(void*, void*, Argument*);
    void f(void*, Input*);
};

void S::f(void* object, Input* input) {
    Argument argument(value, owner);
    input->get(1, &argument);

    void* result = __RTDynamicCast(
        object, 0,
        reinterpret_cast<void*>(0x9291fc),
        reinterpret_cast<void*>(0x92e8a0),
        0);

    if (!result) {
        std::bad_cast error("bad cast");
        ThrowObject(&error, reinterpret_cast<void*>(0x8d362c));
    }

    invoke(result, reinterpret_cast<char*>(input) + 4, &argument);
}
