// from server: 100% by tester
// roc 2008-06 0049b8e0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b8e0
//
// 0049b8e0  6aff                 push -1
// 0049b8e2  68e82c7d00           push 0x7d2ce8
// 0049b8e7  64a100000000         mov eax, dword ptr fs:[0]
// 0049b8ed  50                   push eax
// 0049b8ee  64892500000000       mov dword ptr fs:[0], esp
// 0049b8f5  83ec14               sub esp, 0x14
// 0049b8f8  56                   push esi
// 0049b8f9  57                   push edi
// 0049b8fa  8bf9                 mov edi, ecx
// 0049b8fc  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0049b8ff  8b4740               mov eax, dword ptr [edi + 0x40]
// 0049b902  89442408             mov dword ptr [esp + 8], eax
// 0049b906  85c9                 test ecx, ecx
// 0049b908  7409                 je 0x49b913
// 0049b90a  8b11                 mov edx, dword ptr [ecx]
// 0049b90c  8b4208               mov eax, dword ptr [edx + 8]
// 0049b90f  ffd0                 call eax
// 0049b911  eb02                 jmp 0x49b915
// 0049b913  33c0                 xor eax, eax
// 0049b915  8944240c             mov dword ptr [esp + 0xc], eax
// 0049b919  8b742430             mov esi, dword ptr [esp + 0x30]
// 0049b91d  8b16                 mov edx, dword ptr [esi]
// 0049b91f  8b5204               mov edx, dword ptr [edx + 4]
// 0049b922  8d442408             lea eax, [esp + 8]
// 0049b926  50                   push eax
// 0049b927  6a01                 push 1
// 0049b929  8bce                 mov ecx, esi
// 0049b92b  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0049b933  ffd2                 call edx
// 0049b935  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049b939  6a00                 push 0
// 0049b93b  68187c9300           push 0x937c18
// 0049b940  68fc919200           push 0x9291fc
// 0049b945  6a00                 push 0
// 0049b947  50                   push eax
// 0049b948  e8795e2000           call 0x6a17c6
// 0049b94d  83c414               add esp, 0x14
// 0049b950  85c0                 test eax, eax
// 0049b952  751e                 jne 0x49b972
// 0049b954  6834ba8000           push 0x80ba34
// 0049b959  8d4c2414             lea ecx, [esp + 0x14]
// 0049b95d  ff1564288000         call dword ptr [0x802864]
// 0049b963  682c368d00           push 0x8d362c
// 0049b968  8d4c2414             lea ecx, [esp + 0x14]
// 0049b96c  51                   push ecx
// 0049b96d  e81a5c2000           call 0x6a158c
// 0049b972  8d542408             lea edx, [esp + 8]
// 0049b976  52                   push edx
// 0049b977  83c604               add esi, 4
// 0049b97a  56                   push esi
// 0049b97b  50                   push eax
// 0049b97c  8bcf                 mov ecx, edi
// 0049b97e  e88dfeffff           call 0x49b810
// 0049b983  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049b987  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0049b98f  85c9                 test ecx, ecx
// 0049b991  7408                 je 0x49b99b
// 0049b993  8b01                 mov eax, dword ptr [ecx]
// 0049b995  8b10                 mov edx, dword ptr [eax]
// 0049b997  6a01                 push 1
// 0049b999  ffd2                 call edx
// 0049b99b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049b99f  5f                   pop edi
// 0049b9a0  5e                   pop esi
// 0049b9a1  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b9a8  83c420               add esp, 0x20
// 0049b9ab  c20800               ret 8

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
