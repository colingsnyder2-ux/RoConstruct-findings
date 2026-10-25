// from server: 100% by tester
// roc 2008-06 0049b160  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b160
//
// 0049b160  6aff                 push -1
// 0049b162  68e82c7d00           push 0x7d2ce8
// 0049b167  64a100000000         mov eax, dword ptr fs:[0]
// 0049b16d  50                   push eax
// 0049b16e  64892500000000       mov dword ptr fs:[0], esp
// 0049b175  83ec14               sub esp, 0x14
// 0049b178  56                   push esi
// 0049b179  57                   push edi
// 0049b17a  8bf9                 mov edi, ecx
// 0049b17c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0049b17f  8b4740               mov eax, dword ptr [edi + 0x40]
// 0049b182  89442408             mov dword ptr [esp + 8], eax
// 0049b186  85c9                 test ecx, ecx
// 0049b188  7409                 je 0x49b193
// 0049b18a  8b11                 mov edx, dword ptr [ecx]
// 0049b18c  8b4208               mov eax, dword ptr [edx + 8]
// 0049b18f  ffd0                 call eax
// 0049b191  eb02                 jmp 0x49b195
// 0049b193  33c0                 xor eax, eax
// 0049b195  8944240c             mov dword ptr [esp + 0xc], eax
// 0049b199  8b742430             mov esi, dword ptr [esp + 0x30]
// 0049b19d  8b16                 mov edx, dword ptr [esi]
// 0049b19f  8b5204               mov edx, dword ptr [edx + 4]
// 0049b1a2  8d442408             lea eax, [esp + 8]
// 0049b1a6  50                   push eax
// 0049b1a7  6a01                 push 1
// 0049b1a9  8bce                 mov ecx, esi
// 0049b1ab  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0049b1b3  ffd2                 call edx
// 0049b1b5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049b1b9  6a00                 push 0
// 0049b1bb  68187c9300           push 0x937c18
// 0049b1c0  68fc919200           push 0x9291fc
// 0049b1c5  6a00                 push 0
// 0049b1c7  50                   push eax
// 0049b1c8  e8f9652000           call 0x6a17c6
// 0049b1cd  83c414               add esp, 0x14
// 0049b1d0  85c0                 test eax, eax
// 0049b1d2  751e                 jne 0x49b1f2
// 0049b1d4  6834ba8000           push 0x80ba34
// 0049b1d9  8d4c2414             lea ecx, [esp + 0x14]
// 0049b1dd  ff1564288000         call dword ptr [0x802864]
// 0049b1e3  682c368d00           push 0x8d362c
// 0049b1e8  8d4c2414             lea ecx, [esp + 0x14]
// 0049b1ec  51                   push ecx
// 0049b1ed  e89a632000           call 0x6a158c
// 0049b1f2  8d542408             lea edx, [esp + 8]
// 0049b1f6  52                   push edx
// 0049b1f7  83c604               add esi, 4
// 0049b1fa  56                   push esi
// 0049b1fb  50                   push eax
// 0049b1fc  8bcf                 mov ecx, edi
// 0049b1fe  e8adfeffff           call 0x49b0b0
// 0049b203  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049b207  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0049b20f  85c9                 test ecx, ecx
// 0049b211  7408                 je 0x49b21b
// 0049b213  8b01                 mov eax, dword ptr [ecx]
// 0049b215  8b10                 mov edx, dword ptr [eax]
// 0049b217  6a01                 push 1
// 0049b219  ffd2                 call edx
// 0049b21b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049b21f  5f                   pop edi
// 0049b220  5e                   pop esi
// 0049b221  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b228  83c420               add esp, 0x20
// 0049b22b  c20800               ret 8

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
