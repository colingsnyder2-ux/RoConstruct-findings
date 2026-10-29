// roc 2009-06 006187e0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006187e0
//
// 006187e0  6aff                 push -1
// 006187e2  6818828600           push 0x868218
// 006187e7  64a100000000         mov eax, dword ptr fs:[0]
// 006187ed  50                   push eax
// 006187ee  64892500000000       mov dword ptr fs:[0], esp
// 006187f5  83ec0c               sub esp, 0xc
// 006187f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006187fc  8b00                 mov eax, dword ptr [eax]
// 006187fe  56                   push esi
// 006187ff  8bf1                 mov esi, ecx
// 00618801  8b08                 mov ecx, dword ptr [eax]
// 00618803  894c2404             mov dword ptr [esp + 4], ecx
// 00618807  8b5004               mov edx, dword ptr [eax + 4]
// 0061880a  89542408             mov dword ptr [esp + 8], edx
// 0061880e  8b4008               mov eax, dword ptr [eax + 8]
// 00618811  85c0                 test eax, eax
// 00618813  740b                 je 0x618820
// 00618815  8b10                 mov edx, dword ptr [eax]
// 00618817  8bc8                 mov ecx, eax
// 00618819  8b4208               mov eax, dword ptr [edx + 8]
// 0061881c  ffd0                 call eax
// 0061881e  eb02                 jmp 0x618822
// 00618820  33c0                 xor eax, eax
// 00618822  8944240c             mov dword ptr [esp + 0xc], eax
// 00618826  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061882a  8b0e                 mov ecx, dword ptr [esi]
// 0061882c  8d542404             lea edx, [esp + 4]
// 00618830  52                   push edx
// 00618831  8b10                 mov edx, dword ptr [eax]
// 00618833  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0061883b  ffd2                 call edx
// 0061883d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00618841  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00618849  5e                   pop esi
// 0061884a  85c9                 test ecx, ecx
// 0061884c  7408                 je 0x618856
// 0061884e  8b01                 mov eax, dword ptr [ecx]
// 00618850  8b10                 mov edx, dword ptr [eax]
// 00618852  6a01                 push 1
// 00618854  ffd2                 call edx
// 00618856  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061885a  64890d00000000       mov dword ptr fs:[0], ecx
// 00618861  83c418               add esp, 0x18
// 00618864  c21000               ret 0x10
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