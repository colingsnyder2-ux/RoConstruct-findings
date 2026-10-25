// from server: 100% by king_originala
// roc 2008-06 004b42e0  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b42e0
//
// 004b42e0  6aff                 push -1
// 004b42e2  68e82c7d00           push 0x7d2ce8
// 004b42e7  64a100000000         mov eax, dword ptr fs:[0]
// 004b42ed  50                   push eax
// 004b42ee  64892500000000       mov dword ptr fs:[0], esp
// 004b42f5  83ec14               sub esp, 0x14
// 004b42f8  56                   push esi
// 004b42f9  57                   push edi
// 004b42fa  8bf9                 mov edi, ecx
// 004b42fc  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004b42ff  8b4740               mov eax, dword ptr [edi + 0x40]
// 004b4302  89442408             mov dword ptr [esp + 8], eax
// 004b4306  85c9                 test ecx, ecx
// 004b4308  7409                 je 0x4b4313
// 004b430a  8b11                 mov edx, dword ptr [ecx]
// 004b430c  8b4208               mov eax, dword ptr [edx + 8]
// 004b430f  ffd0                 call eax
// 004b4311  eb02                 jmp 0x4b4315
// 004b4313  33c0                 xor eax, eax
// 004b4315  8944240c             mov dword ptr [esp + 0xc], eax
// 004b4319  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b431d  8b11                 mov edx, dword ptr [ecx]
// 004b431f  8b5204               mov edx, dword ptr [edx + 4]
// 004b4322  8d442408             lea eax, [esp + 8]
// 004b4326  50                   push eax
// 004b4327  6a01                 push 1
// 004b4329  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004b4331  ffd2                 call edx
// 004b4333  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004b4337  6a00                 push 0
// 004b4339  68388d9300           push 0x938d38
// 004b433e  68fc919200           push 0x9291fc
// 004b4343  6a00                 push 0
// 004b4345  50                   push eax
// 004b4346  e87bd41e00           call 0x6a17c6
// 004b434b  8bf0                 mov esi, eax
// 004b434d  83c414               add esp, 0x14
// 004b4350  85f6                 test esi, esi
// 004b4352  751e                 jne 0x4b4372
// 004b4354  6834ba8000           push 0x80ba34
// 004b4359  8d4c2414             lea ecx, [esp + 0x14]
// 004b435d  ff1564288000         call dword ptr [0x802864]
// 004b4363  682c368d00           push 0x8d362c
// 004b4368  8d4c2414             lea ecx, [esp + 0x14]
// 004b436c  51                   push ecx
// 004b436d  e81ad21e00           call 0x6a158c
// 004b4372  8d4c2408             lea ecx, [esp + 8]
// 004b4376  e835a80b00           call 0x56ebb0
// 004b437b  0fb610               movzx edx, byte ptr [eax]
// 004b437e  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 004b4381  8b4738               mov eax, dword ptr [edi + 0x38]
// 004b4384  52                   push edx
// 004b4385  03ce                 add ecx, esi
// 004b4387  ffd0                 call eax
// 004b4389  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b438d  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004b4395  85c9                 test ecx, ecx
// 004b4397  7408                 je 0x4b43a1
// 004b4399  8b11                 mov edx, dword ptr [ecx]
// 004b439b  8b02                 mov eax, dword ptr [edx]
// 004b439d  6a01                 push 1
// 004b439f  ffd0                 call eax
// 004b43a1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b43a5  5f                   pop edi
// 004b43a6  5e                   pop esi
// 004b43a7  64890d00000000       mov dword ptr fs:[0], ecx
// 004b43ae  83c420               add esp, 0x20
// 004b43b1  c20800               ret 8

struct ValueOwner {
    virtual ~ValueOwner();
    virtual void reserved();
    virtual ValueOwner* clone() = 0;
};

struct Value {
    void* data;
    ValueOwner* owner;

    Value(const Value& other);
    ~Value();
    unsigned char* get();
    static ValueOwner* copyOwner(ValueOwner* owner);
};

inline ValueOwner* Value::copyOwner(ValueOwner* owner)
{
    if (owner)
        return owner->clone();
    return 0;
}

inline Value::Value(const Value& other)
    : data(other.data), owner(copyOwner(other.owner))
{
}

inline Value::~Value()
{
    if (owner)
        delete owner;
}

struct Arguments {
    virtual void reserved();
    virtual void read(int index, Value* value) = 0;
};

namespace std {
    class bad_cast {
        void* vtable;
        const char* message;
        int ownsMessage;
    };
}

extern std::bad_cast* (__thiscall* badCastConstruct)(
    std::bad_cast*, const char*);

extern char sourceType;
extern char destinationType;
extern char badCastThrowInfo;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

extern "C" __declspec(noreturn) void __stdcall throwException(
    void*, void*);

struct S {
    char padding[0x38];
    void (__thiscall* callback)(void*, int);
    int adjustment;
    Value defaultValue;

    void invoke(void* object, Arguments* arguments);
};

void S::invoke(void* object, Arguments* arguments)
{
    Value value(defaultValue);
    arguments->read(1, &value);

    void* peer = __RTDynamicCast(
        object, 0, &sourceType, &destinationType, 0);

    if (!peer) {
        std::bad_cast error;
        badCastConstruct(&error, "bad cast");
        throwException(&error, &badCastThrowInfo);
    }

    callback(static_cast<char*>(peer) + adjustment, *value.get());
}
