// from server: 100% by colin
// roc 2008-06 0055a300  unit: RBX::VInstance::?$BoundFuncDesc  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055a300
//
// 0055a300  53                   push ebx
// 0055a301  56                   push esi
// 0055a302  8bf1                 mov esi, ecx
// 0055a304  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0055a308  e8b3550100           call 0x56f8c0
// 0055a30d  8b10                 mov edx, dword ptr [eax]
// 0055a30f  83ec08               sub esp, 8
// 0055a312  8bcc                 mov ecx, esp
// 0055a314  8911                 mov dword ptr [ecx], edx
// 0055a316  8b4004               mov eax, dword ptr [eax + 4]
// 0055a319  8964241c             mov dword ptr [esp + 0x1c], esp
// 0055a31d  894104               mov dword ptr [ecx + 4], eax
// 0055a320  85c0                 test eax, eax
// 0055a322  740c                 je 0x55a330
// 0055a324  83c004               add eax, 4
// 0055a327  b901000000           mov ecx, 1
// 0055a32c  f00fc108             lock xadd dword ptr [eax], ecx
// 0055a330  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0055a333  034c2414             add ecx, dword ptr [esp + 0x14]
// 0055a337  8b5638               mov edx, dword ptr [esi + 0x38]
// 0055a33a  ffd2                 call edx
// 0055a33c  8ad8                 mov bl, al
// 0055a33e  e8ed280100           call 0x56cc30
// 0055a343  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055a347  6a08                 push 8
// 0055a349  8901                 mov dword ptr [ecx], eax
// 0055a34b  8d7104               lea esi, [ecx + 4]
// 0055a34e  e8cd651400           call 0x6a0920
// 0055a353  83c404               add esp, 4
// 0055a356  85c0                 test eax, eax
// 0055a358  740b                 je 0x55a365
// 0055a35a  c70084ba8000         mov dword ptr [eax], 0x80ba84
// 0055a360  885804               mov byte ptr [eax + 4], bl
// 0055a363  eb02                 jmp 0x55a367
// 0055a365  33c0                 xor eax, eax
// 0055a367  8d542414             lea edx, [esp + 0x14]
// 0055a36b  8bc8                 mov ecx, eax
// 0055a36d  3bd6                 cmp edx, esi
// 0055a36f  7404                 je 0x55a375
// 0055a371  8b0e                 mov ecx, dword ptr [esi]
// 0055a373  8906                 mov dword ptr [esi], eax
// 0055a375  85c9                 test ecx, ecx
// 0055a377  7408                 je 0x55a381
// 0055a379  8b01                 mov eax, dword ptr [ecx]
// 0055a37b  8b10                 mov edx, dword ptr [eax]
// 0055a37d  6a01                 push 1
// 0055a37f  ffd2                 call edx
// 0055a381  5e                   pop esi
// 0055a382  5b                   pop ebx
// 0055a383  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);
extern void* __cdecl getType();

struct Control {
    void* table;
    volatile long references;
};

struct Argument {
    void* object;
    Control* control;
    Argument(const Argument&);
};

inline Argument::Argument(const Argument& other)
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* count = &control->references;
        _InterlockedIncrement(count);
    }
}

struct Arguments {
    const Argument& get();
};

struct Value {
    virtual ~Value();
};

struct BooleanValue : Value {
    bool value;
    BooleanValue(bool);
    virtual ~BooleanValue();
};

inline BooleanValue::BooleanValue(bool v) : value(v) {}

struct Owner {
    Value* pointer;
    explicit Owner(Value*);
    ~Owner();
    void transfer(Owner&);
};

inline Owner::Owner(Value* p) : pointer(p) {}

inline Owner::~Owner() {
    if (pointer)
        delete pointer;
}

inline void Owner::transfer(Owner& other) {
    if (&other != this) {
        Value* previous = pointer;
        pointer = other.pointer;
        other.pointer = previous;
    }
}

struct Result {
    void* type;
    Owner value;
};

struct Descriptor {
    unsigned char padding[56];
    bool (__thiscall* callback)(void*, Argument);
    int adjustment;
    void invoke(void*, Result*, Arguments*);
};

void Descriptor::invoke(void* object, Result* result, Arguments* arguments) {
    bool value = callback(
        static_cast<char*>(object) + adjustment,
        arguments->get());
    result->type = getType();
    Owner& destination = result->value;
    Owner temporary(new BooleanValue(value));
    destination.transfer(temporary);
}
