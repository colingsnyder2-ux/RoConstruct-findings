// roc 2010-06 005e9d40  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e9d40
//
// 005e9d40  6aff                 push -1
// 005e9d42  6838809900           push 0x998038
// 005e9d47  64a100000000         mov eax, dword ptr fs:[0]
// 005e9d4d  50                   push eax
// 005e9d4e  64892500000000       mov dword ptr fs:[0], esp
// 005e9d55  83ec0c               sub esp, 0xc
// 005e9d58  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e9d5c  8b00                 mov eax, dword ptr [eax]
// 005e9d5e  56                   push esi
// 005e9d5f  8bf1                 mov esi, ecx
// 005e9d61  8b08                 mov ecx, dword ptr [eax]
// 005e9d63  894c2404             mov dword ptr [esp + 4], ecx
// 005e9d67  8b5004               mov edx, dword ptr [eax + 4]
// 005e9d6a  89542408             mov dword ptr [esp + 8], edx
// 005e9d6e  8b4008               mov eax, dword ptr [eax + 8]
// 005e9d71  85c0                 test eax, eax
// 005e9d73  740b                 je 0x5e9d80
// 005e9d75  8b10                 mov edx, dword ptr [eax]
// 005e9d77  8bc8                 mov ecx, eax
// 005e9d79  8b4208               mov eax, dword ptr [edx + 8]
// 005e9d7c  ffd0                 call eax
// 005e9d7e  eb02                 jmp 0x5e9d82
// 005e9d80  33c0                 xor eax, eax
// 005e9d82  8944240c             mov dword ptr [esp + 0xc], eax
// 005e9d86  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e9d8a  8b0e                 mov ecx, dword ptr [esi]
// 005e9d8c  8d542404             lea edx, [esp + 4]
// 005e9d90  52                   push edx
// 005e9d91  8b10                 mov edx, dword ptr [eax]
// 005e9d93  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005e9d9b  ffd2                 call edx
// 005e9d9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9da1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005e9da9  5e                   pop esi
// 005e9daa  85c9                 test ecx, ecx
// 005e9dac  7408                 je 0x5e9db6
// 005e9dae  8b01                 mov eax, dword ptr [ecx]
// 005e9db0  8b10                 mov edx, dword ptr [eax]
// 005e9db2  6a01                 push 1
// 005e9db4  ffd2                 call edx
// 005e9db6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9dba  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9dc1  83c418               add esp, 0x18
// 005e9dc4  c21000               ret 0x10
// copied from an identical function in another client (function ?f@S@@QAEXIPAP6EXPAXPAUValue@@@ZPBQBU2@I@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Holder {
    virtual ~Holder();
    virtual void unused();
    virtual Holder* clone() const;
};

inline Holder* copyHolder(Holder* holder)
{
    Holder* result;
    if (holder)
        result = holder->clone();
    else
        result = 0;
    return result;
}

struct Value {
    unsigned int first;
    unsigned int second;
    Holder* holder;

    Value(const Value&);
    ~Value();
};

inline Value::Value(const Value& other)
    : first(other.first),
      second(other.second),
      holder(copyHolder(other.holder))
{
}

inline Value::~Value()
{
    if (holder)
        delete holder;
}

typedef void (__thiscall *Callback)(void*, Value*);

struct S {
    void* context;
    void f(unsigned int, Callback*, const Value* const*, unsigned int);
};

void S::f(unsigned int, Callback* callback,
          const Value* const* source, unsigned int)
{
    Value value(**source);
    void* receiver = context;
    (*callback)(receiver, &value);
}