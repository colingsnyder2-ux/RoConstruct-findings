// roc 2011-06 0060dd80  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060dd80
//
// 0060dd80  6aff                 push -1
// 0060dd82  6888839e00           push 0x9e8388
// 0060dd87  64a100000000         mov eax, dword ptr fs:[0]
// 0060dd8d  50                   push eax
// 0060dd8e  64892500000000       mov dword ptr fs:[0], esp
// 0060dd95  83ec0c               sub esp, 0xc
// 0060dd98  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060dd9c  8b00                 mov eax, dword ptr [eax]
// 0060dd9e  56                   push esi
// 0060dd9f  8bf1                 mov esi, ecx
// 0060dda1  8b08                 mov ecx, dword ptr [eax]
// 0060dda3  894c2404             mov dword ptr [esp + 4], ecx
// 0060dda7  8b5004               mov edx, dword ptr [eax + 4]
// 0060ddaa  89542408             mov dword ptr [esp + 8], edx
// 0060ddae  8b4008               mov eax, dword ptr [eax + 8]
// 0060ddb1  85c0                 test eax, eax
// 0060ddb3  740b                 je 0x60ddc0
// 0060ddb5  8b10                 mov edx, dword ptr [eax]
// 0060ddb7  8bc8                 mov ecx, eax
// 0060ddb9  8b4208               mov eax, dword ptr [edx + 8]
// 0060ddbc  ffd0                 call eax
// 0060ddbe  eb02                 jmp 0x60ddc2
// 0060ddc0  33c0                 xor eax, eax
// 0060ddc2  8944240c             mov dword ptr [esp + 0xc], eax
// 0060ddc6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060ddca  8b0e                 mov ecx, dword ptr [esi]
// 0060ddcc  8d542404             lea edx, [esp + 4]
// 0060ddd0  52                   push edx
// 0060ddd1  8b10                 mov edx, dword ptr [eax]
// 0060ddd3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0060dddb  ffd2                 call edx
// 0060dddd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060dde1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0060dde9  5e                   pop esi
// 0060ddea  85c9                 test ecx, ecx
// 0060ddec  7408                 je 0x60ddf6
// 0060ddee  8b01                 mov eax, dword ptr [ecx]
// 0060ddf0  8b10                 mov edx, dword ptr [eax]
// 0060ddf2  6a01                 push 1
// 0060ddf4  ffd2                 call edx
// 0060ddf6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060ddfa  64890d00000000       mov dword ptr fs:[0], ecx
// 0060de01  83c418               add esp, 0x18
// 0060de04  c21000               ret 0x10
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