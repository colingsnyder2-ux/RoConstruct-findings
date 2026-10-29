// roc 2009-12 00682c00  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00682c00
//
// 00682c00  6aff                 push -1
// 00682c02  68485c9400           push 0x945c48
// 00682c07  64a100000000         mov eax, dword ptr fs:[0]
// 00682c0d  50                   push eax
// 00682c0e  64892500000000       mov dword ptr fs:[0], esp
// 00682c15  83ec0c               sub esp, 0xc
// 00682c18  8b442424             mov eax, dword ptr [esp + 0x24]
// 00682c1c  8b00                 mov eax, dword ptr [eax]
// 00682c1e  56                   push esi
// 00682c1f  8bf1                 mov esi, ecx
// 00682c21  8b08                 mov ecx, dword ptr [eax]
// 00682c23  894c2404             mov dword ptr [esp + 4], ecx
// 00682c27  8b5004               mov edx, dword ptr [eax + 4]
// 00682c2a  89542408             mov dword ptr [esp + 8], edx
// 00682c2e  8b4008               mov eax, dword ptr [eax + 8]
// 00682c31  85c0                 test eax, eax
// 00682c33  740b                 je 0x682c40
// 00682c35  8b10                 mov edx, dword ptr [eax]
// 00682c37  8bc8                 mov ecx, eax
// 00682c39  8b4208               mov eax, dword ptr [edx + 8]
// 00682c3c  ffd0                 call eax
// 00682c3e  eb02                 jmp 0x682c42
// 00682c40  33c0                 xor eax, eax
// 00682c42  8944240c             mov dword ptr [esp + 0xc], eax
// 00682c46  8b442424             mov eax, dword ptr [esp + 0x24]
// 00682c4a  8b0e                 mov ecx, dword ptr [esi]
// 00682c4c  8d542404             lea edx, [esp + 4]
// 00682c50  52                   push edx
// 00682c51  8b10                 mov edx, dword ptr [eax]
// 00682c53  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00682c5b  ffd2                 call edx
// 00682c5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00682c61  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00682c69  5e                   pop esi
// 00682c6a  85c9                 test ecx, ecx
// 00682c6c  7408                 je 0x682c76
// 00682c6e  8b01                 mov eax, dword ptr [ecx]
// 00682c70  8b10                 mov edx, dword ptr [eax]
// 00682c72  6a01                 push 1
// 00682c74  ffd2                 call edx
// 00682c76  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00682c7a  64890d00000000       mov dword ptr fs:[0], ecx
// 00682c81  83c418               add esp, 0x18
// 00682c84  c21000               ret 0x10
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