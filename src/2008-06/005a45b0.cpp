// from server: 100% by king_originala
// roc 2008-06 005a45b0  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a45b0
//
// 005a45b0  6aff                 push -1
// 005a45b2  68e82c7d00           push 0x7d2ce8
// 005a45b7  64a100000000         mov eax, dword ptr fs:[0]
// 005a45bd  50                   push eax
// 005a45be  64892500000000       mov dword ptr fs:[0], esp
// 005a45c5  83ec14               sub esp, 0x14
// 005a45c8  56                   push esi
// 005a45c9  57                   push edi
// 005a45ca  8bf9                 mov edi, ecx
// 005a45cc  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 005a45cf  8b4744               mov eax, dword ptr [edi + 0x44]
// 005a45d2  89442408             mov dword ptr [esp + 8], eax
// 005a45d6  85c9                 test ecx, ecx
// 005a45d8  7409                 je 0x5a45e3
// 005a45da  8b11                 mov edx, dword ptr [ecx]
// 005a45dc  8b4208               mov eax, dword ptr [edx + 8]
// 005a45df  ffd0                 call eax
// 005a45e1  eb02                 jmp 0x5a45e5
// 005a45e3  33c0                 xor eax, eax
// 005a45e5  8944240c             mov dword ptr [esp + 0xc], eax
// 005a45e9  8b742430             mov esi, dword ptr [esp + 0x30]
// 005a45ed  8b16                 mov edx, dword ptr [esi]
// 005a45ef  8b5204               mov edx, dword ptr [edx + 4]
// 005a45f2  8d442408             lea eax, [esp + 8]
// 005a45f6  50                   push eax
// 005a45f7  6a01                 push 1
// 005a45f9  8bce                 mov ecx, esi
// 005a45fb  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005a4603  ffd2                 call edx
// 005a4605  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a4609  6a00                 push 0
// 005a460b  68b8819400           push 0x9481b8
// 005a4610  68fc919200           push 0x9291fc
// 005a4615  6a00                 push 0
// 005a4617  50                   push eax
// 005a4618  e8a9d10f00           call 0x6a17c6
// 005a461d  83c414               add esp, 0x14
// 005a4620  85c0                 test eax, eax
// 005a4622  751e                 jne 0x5a4642
// 005a4624  6834ba8000           push 0x80ba34
// 005a4629  8d4c2414             lea ecx, [esp + 0x14]
// 005a462d  ff1564288000         call dword ptr [0x802864]
// 005a4633  682c368d00           push 0x8d362c
// 005a4638  8d4c2414             lea ecx, [esp + 0x14]
// 005a463c  51                   push ecx
// 005a463d  e84acf0f00           call 0x6a158c
// 005a4642  8d542408             lea edx, [esp + 8]
// 005a4646  52                   push edx
// 005a4647  83c604               add esi, 4
// 005a464a  56                   push esi
// 005a464b  50                   push eax
// 005a464c  8bcf                 mov ecx, edi
// 005a464e  e87dfeffff           call 0x5a44d0
// 005a4653  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a4657  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a465f  85c9                 test ecx, ecx
// 005a4661  7408                 je 0x5a466b
// 005a4663  8b01                 mov eax, dword ptr [ecx]
// 005a4665  8b10                 mov edx, dword ptr [eax]
// 005a4667  6a01                 push 1
// 005a4669  ffd2                 call edx
// 005a466b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a466f  5f                   pop edi
// 005a4670  5e                   pop esi
// 005a4671  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4678  83c420               add esp, 0x20
// 005a467b  c20800               ret 8

struct Control {
    virtual void dispose(int);
    virtual void slot1();
    virtual Control* clone();

    static Control* copy(Control*);
};

inline Control* Control::copy(Control* source) {
    if (source)
        return source->clone();
    return 0;
}

struct Pair {
    void* value;
    Control* control;

    Pair(const Pair&);
    ~Pair();
};

inline Pair::Pair(const Pair& other) {
    Control* source = other.control;
    value = other.value;
    control = Control::copy(source);
}

inline Pair::~Pair() {
    if (control)
        control->dispose(1);
}

struct Receiver {
    virtual void slot0();
    virtual void set(int, const Pair*);
};

struct BadCast {
    unsigned char storage[12];
};

extern char baseType;
extern char workspaceType;
extern char badCastThrowInfo;

extern "C" void* __cdecl runtimeCast(
    void*, long, void*, void*, int);

extern void (__thiscall *constructBadCast)(BadCast*, const char*);

extern "C" __declspec(noreturn) void __stdcall throwException(
    void*, void*);

struct Function {
    unsigned char reserved[68];
    Pair bound;

    void invoke(void*, Receiver*);
    void dispatch(void*, void*, const Pair*);
};

void Function::invoke(void* object, Receiver* receiver) {
    Pair argument(bound);
    receiver->set(1, &argument);

    void* workspace = runtimeCast(
        object, 0, &baseType, &workspaceType, 0);

    if (!workspace) {
        BadCast exception;
        constructBadCast(&exception, "bad cast");
        throwException(&exception, &badCastThrowInfo);
    }

    dispatch(workspace, reinterpret_cast<char*>(receiver) + 4, &argument);
}
