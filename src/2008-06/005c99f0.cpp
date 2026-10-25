// from server: 100% by tester
// roc 2008-06 005c99f0  unit: VProfilingItem::?$BoundFuncDesc  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c99f0
//
// 005c99f0  6aff                 push -1
// 005c99f2  68e82c7d00           push 0x7d2ce8
// 005c99f7  64a100000000         mov eax, dword ptr fs:[0]
// 005c99fd  50                   push eax
// 005c99fe  64892500000000       mov dword ptr fs:[0], esp
// 005c9a05  83ec14               sub esp, 0x14
// 005c9a08  56                   push esi
// 005c9a09  57                   push edi
// 005c9a0a  8bf9                 mov edi, ecx
// 005c9a0c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 005c9a0f  8b4740               mov eax, dword ptr [edi + 0x40]
// 005c9a12  89442408             mov dword ptr [esp + 8], eax
// 005c9a16  85c9                 test ecx, ecx
// 005c9a18  7409                 je 0x5c9a23
// 005c9a1a  8b11                 mov edx, dword ptr [ecx]
// 005c9a1c  8b4208               mov eax, dword ptr [edx + 8]
// 005c9a1f  ffd0                 call eax
// 005c9a21  eb02                 jmp 0x5c9a25
// 005c9a23  33c0                 xor eax, eax
// 005c9a25  8944240c             mov dword ptr [esp + 0xc], eax
// 005c9a29  8b742430             mov esi, dword ptr [esp + 0x30]
// 005c9a2d  8b16                 mov edx, dword ptr [esi]
// 005c9a2f  8b5204               mov edx, dword ptr [edx + 4]
// 005c9a32  8d442408             lea eax, [esp + 8]
// 005c9a36  50                   push eax
// 005c9a37  6a01                 push 1
// 005c9a39  8bce                 mov ecx, esi
// 005c9a3b  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005c9a43  ffd2                 call edx
// 005c9a45  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005c9a49  6a00                 push 0
// 005c9a4b  681c0f9500           push 0x950f1c
// 005c9a50  68fc919200           push 0x9291fc
// 005c9a55  6a00                 push 0
// 005c9a57  50                   push eax
// 005c9a58  e8697d0d00           call 0x6a17c6
// 005c9a5d  83c414               add esp, 0x14
// 005c9a60  85c0                 test eax, eax
// 005c9a62  751e                 jne 0x5c9a82
// 005c9a64  6834ba8000           push 0x80ba34
// 005c9a69  8d4c2414             lea ecx, [esp + 0x14]
// 005c9a6d  ff1564288000         call dword ptr [0x802864]
// 005c9a73  682c368d00           push 0x8d362c
// 005c9a78  8d4c2414             lea ecx, [esp + 0x14]
// 005c9a7c  51                   push ecx
// 005c9a7d  e80a7b0d00           call 0x6a158c
// 005c9a82  8d542408             lea edx, [esp + 8]
// 005c9a86  52                   push edx
// 005c9a87  83c604               add esi, 4
// 005c9a8a  56                   push esi
// 005c9a8b  50                   push eax
// 005c9a8c  8bcf                 mov ecx, edi
// 005c9a8e  e8bdfeffff           call 0x5c9950
// 005c9a93  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9a97  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005c9a9f  85c9                 test ecx, ecx
// 005c9aa1  7408                 je 0x5c9aab
// 005c9aa3  8b01                 mov eax, dword ptr [ecx]
// 005c9aa5  8b10                 mov edx, dword ptr [eax]
// 005c9aa7  6a01                 push 1
// 005c9aa9  ffd2                 call edx
// 005c9aab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c9aaf  5f                   pop edi
// 005c9ab0  5e                   pop esi
// 005c9ab1  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9ab8  83c420               add esp, 0x20
// 005c9abb  c20800               ret 8

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
