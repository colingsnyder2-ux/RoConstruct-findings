// from server: 100% by colin
// roc 2008-06 00492ae0  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492ae0
//
// 00492ae0  6aff                 push -1
// 00492ae2  68e82c7d00           push 0x7d2ce8
// 00492ae7  64a100000000         mov eax, dword ptr fs:[0]
// 00492aed  50                   push eax
// 00492aee  64892500000000       mov dword ptr fs:[0], esp
// 00492af5  83ec14               sub esp, 0x14
// 00492af8  56                   push esi
// 00492af9  57                   push edi
// 00492afa  8bf9                 mov edi, ecx
// 00492afc  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00492aff  8b4740               mov eax, dword ptr [edi + 0x40]
// 00492b02  89442408             mov dword ptr [esp + 8], eax
// 00492b06  85c9                 test ecx, ecx
// 00492b08  7409                 je 0x492b13
// 00492b0a  8b11                 mov edx, dword ptr [ecx]
// 00492b0c  8b4208               mov eax, dword ptr [edx + 8]
// 00492b0f  ffd0                 call eax
// 00492b11  eb02                 jmp 0x492b15
// 00492b13  33c0                 xor eax, eax
// 00492b15  8944240c             mov dword ptr [esp + 0xc], eax
// 00492b19  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00492b1d  8b11                 mov edx, dword ptr [ecx]
// 00492b1f  8b5204               mov edx, dword ptr [edx + 4]
// 00492b22  8d442408             lea eax, [esp + 8]
// 00492b26  50                   push eax
// 00492b27  6a01                 push 1
// 00492b29  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00492b31  ffd2                 call edx
// 00492b33  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00492b37  6a00                 push 0
// 00492b39  6860749300           push 0x937460
// 00492b3e  68fc919200           push 0x9291fc
// 00492b43  6a00                 push 0
// 00492b45  50                   push eax
// 00492b46  e87bec2000           call 0x6a17c6
// 00492b4b  8bf0                 mov esi, eax
// 00492b4d  83c414               add esp, 0x14
// 00492b50  85f6                 test esi, esi
// 00492b52  751e                 jne 0x492b72
// 00492b54  6834ba8000           push 0x80ba34
// 00492b59  8d4c2414             lea ecx, [esp + 0x14]
// 00492b5d  ff1564288000         call dword ptr [0x802864]
// 00492b63  682c368d00           push 0x8d362c
// 00492b68  8d4c2414             lea ecx, [esp + 0x14]
// 00492b6c  51                   push ecx
// 00492b6d  e81aea2000           call 0x6a158c
// 00492b72  8d4c2408             lea ecx, [esp + 8]
// 00492b76  e835c00d00           call 0x56ebb0
// 00492b7b  0fb610               movzx edx, byte ptr [eax]
// 00492b7e  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00492b81  8b4738               mov eax, dword ptr [edi + 0x38]
// 00492b84  52                   push edx
// 00492b85  03ce                 add ecx, esi
// 00492b87  ffd0                 call eax
// 00492b89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00492b8d  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00492b95  85c9                 test ecx, ecx
// 00492b97  7408                 je 0x492ba1
// 00492b99  8b11                 mov edx, dword ptr [ecx]
// 00492b9b  8b02                 mov eax, dword ptr [edx]
// 00492b9d  6a01                 push 1
// 00492b9f  ffd0                 call eax
// 00492ba1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00492ba5  5f                   pop edi
// 00492ba6  5e                   pop esi
// 00492ba7  64890d00000000       mov dword ptr fs:[0], ecx
// 00492bae  83c420               add esp, 0x20
// 00492bb1  c20800               ret 8

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
