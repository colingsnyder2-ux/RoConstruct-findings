// from server: 100% by king_originala
// roc 2008-06 005a4910  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4910
//
// 005a4910  6aff                 push -1
// 005a4912  68e82c7d00           push 0x7d2ce8
// 005a4917  64a100000000         mov eax, dword ptr fs:[0]
// 005a491d  50                   push eax
// 005a491e  64892500000000       mov dword ptr fs:[0], esp
// 005a4925  83ec14               sub esp, 0x14
// 005a4928  56                   push esi
// 005a4929  57                   push edi
// 005a492a  8bf9                 mov edi, ecx
// 005a492c  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 005a492f  8b4744               mov eax, dword ptr [edi + 0x44]
// 005a4932  89442408             mov dword ptr [esp + 8], eax
// 005a4936  85c9                 test ecx, ecx
// 005a4938  7409                 je 0x5a4943
// 005a493a  8b11                 mov edx, dword ptr [ecx]
// 005a493c  8b4208               mov eax, dword ptr [edx + 8]
// 005a493f  ffd0                 call eax
// 005a4941  eb02                 jmp 0x5a4945
// 005a4943  33c0                 xor eax, eax
// 005a4945  8944240c             mov dword ptr [esp + 0xc], eax
// 005a4949  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a494d  8b11                 mov edx, dword ptr [ecx]
// 005a494f  8b5204               mov edx, dword ptr [edx + 4]
// 005a4952  8d442408             lea eax, [esp + 8]
// 005a4956  50                   push eax
// 005a4957  6a01                 push 1
// 005a4959  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005a4961  ffd2                 call edx
// 005a4963  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a4967  6a00                 push 0
// 005a4969  68b8819400           push 0x9481b8
// 005a496e  68fc919200           push 0x9291fc
// 005a4973  6a00                 push 0
// 005a4975  50                   push eax
// 005a4976  e84bce0f00           call 0x6a17c6
// 005a497b  8bf0                 mov esi, eax
// 005a497d  83c414               add esp, 0x14
// 005a4980  85f6                 test esi, esi
// 005a4982  751e                 jne 0x5a49a2
// 005a4984  6834ba8000           push 0x80ba34
// 005a4989  8d4c2414             lea ecx, [esp + 0x14]
// 005a498d  ff1564288000         call dword ptr [0x802864]
// 005a4993  682c368d00           push 0x8d362c
// 005a4998  8d4c2414             lea ecx, [esp + 0x14]
// 005a499c  51                   push ecx
// 005a499d  e8eacb0f00           call 0x6a158c
// 005a49a2  8d4c2408             lea ecx, [esp + 8]
// 005a49a6  e805a2fcff           call 0x56ebb0
// 005a49ab  0fb610               movzx edx, byte ptr [eax]
// 005a49ae  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005a49b4  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 005a49b7  52                   push edx
// 005a49b8  8b1408               mov edx, dword ptr [eax + ecx]
// 005a49bb  03573c               add edx, dword ptr [edi + 0x3c]
// 005a49be  8b4738               mov eax, dword ptr [edi + 0x38]
// 005a49c1  8d8c3234010000       lea ecx, [edx + esi + 0x134]
// 005a49c8  ffd0                 call eax
// 005a49ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a49ce  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a49d6  85c9                 test ecx, ecx
// 005a49d8  7408                 je 0x5a49e2
// 005a49da  8b11                 mov edx, dword ptr [ecx]
// 005a49dc  8b02                 mov eax, dword ptr [edx]
// 005a49de  6a01                 push 1
// 005a49e0  ffd0                 call eax
// 005a49e2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a49e6  5f                   pop edi
// 005a49e7  5e                   pop esi
// 005a49e8  64890d00000000       mov dword ptr fs:[0], ecx
// 005a49ef  83c420               add esp, 0x20
// 005a49f2  c20800               ret 8

struct Control {
    virtual ~Control();
    virtual void reserved() = 0;
    virtual Control* clone() = 0;
};

struct Value {
    unsigned int value;
    Control* control;

    Value(unsigned int, Control*);
    ~Value();
    unsigned char* get();
};

inline Value::Value(unsigned int v, Control* c) : value(v) {
    Control* copy;
    if (c)
        copy = c->clone();
    else
        copy = 0;
    control = copy;
}

inline Value::~Value() {
    if (control)
        delete control;
}

struct Arguments {
    virtual void reserved() = 0;
    virtual void set(int, Value*) = 0;
};

struct BadCast {
    void* table;
    const char* message;
    int owned;
};

extern "C" BadCast* (__thiscall *constructBadCast)(BadCast*, const char*);
extern "C" void* __cdecl runtimeCast(void*, int, const void*, const void*, int);
extern "C" __declspec(noreturn) void __stdcall throwException(void*, const void*);

extern const unsigned char sourceType[];
extern const unsigned char destinationType[];
extern const unsigned char badCastThrowInfo[];

struct Base {
    unsigned char unused;
};

struct Component : virtual Base {
    void set(unsigned int);
};

struct Workspace {
    unsigned char padding[0x134];
    Component component;
};

struct Descriptor {
    typedef void (Component::*Function)(unsigned int);

    unsigned char padding[0x38];
    Function function;
    unsigned int value;
    Control* control;

    void invoke(void*, Arguments*);
};

void Descriptor::invoke(void* object, Arguments* arguments) {
    Value argument(value, control);
    arguments->set(1, &argument);

    Workspace* workspace = static_cast<Workspace*>(
        runtimeCast(object, 0, sourceType, destinationType, 0));

    if (!workspace) {
        BadCast exception;
        constructBadCast(&exception, "bad cast");
        throwException(&exception, badCastThrowInfo);
    }

    (workspace->component.*function)(*argument.get());
}
