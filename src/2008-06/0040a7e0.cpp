// from server: 100% by colin
// roc 2008-06 0040a7e0  unit: VAuthoringSettings::?$FactoryProduct  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a7e0
//
// 0040a7e0  64a100000000         mov eax, dword ptr fs:[0]
// 0040a7e6  6aff                 push -1
// 0040a7e8  68a8257d00           push 0x7d25a8
// 0040a7ed  50                   push eax
// 0040a7ee  64892500000000       mov dword ptr fs:[0], esp
// 0040a7f5  83ec08               sub esp, 8
// 0040a7f8  56                   push esi
// 0040a7f9  8bf1                 mov esi, ecx
// 0040a7fb  8b06                 mov eax, dword ptr [esi]
// 0040a7fd  8b4008               mov eax, dword ptr [eax + 8]
// 0040a800  50                   push eax
// 0040a801  b944969200           mov ecx, 0x929644
// 0040a806  ff1578288000         call dword ptr [0x802878]
// 0040a80c  84c0                 test al, al
// 0040a80e  741e                 je 0x40a82e
// 0040a810  83c604               add esi, 4
// 0040a813  56                   push esi
// 0040a814  e857fcffff           call 0x40a470
// 0040a819  8a00                 mov al, byte ptr [eax]
// 0040a81b  83c404               add esp, 4
// 0040a81e  5e                   pop esi
// 0040a81f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040a823  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a82a  83c414               add esp, 0x14
// 0040a82d  c3                   ret 
// 0040a82e  8b0e                 mov ecx, dword ptr [esi]
// 0040a830  894c2404             mov dword ptr [esp + 4], ecx
// 0040a834  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040a837  85c9                 test ecx, ecx
// 0040a839  7409                 je 0x40a844
// 0040a83b  8b11                 mov edx, dword ptr [ecx]
// 0040a83d  8b4208               mov eax, dword ptr [edx + 8]
// 0040a840  ffd0                 call eax
// 0040a842  eb02                 jmp 0x40a846
// 0040a844  33c0                 xor eax, eax
// 0040a846  53                   push ebx
// 0040a847  8944240c             mov dword ptr [esp + 0xc], eax
// 0040a84b  8d4c2408             lea ecx, [esp + 8]
// 0040a84f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040a857  e854431600           call 0x56ebb0
// 0040a85c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040a860  8a18                 mov bl, byte ptr [eax]
// 0040a862  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0040a86a  85c9                 test ecx, ecx
// 0040a86c  7408                 je 0x40a876
// 0040a86e  8b11                 mov edx, dword ptr [ecx]
// 0040a870  8b02                 mov eax, dword ptr [edx]
// 0040a872  6a01                 push 1
// 0040a874  ffd0                 call eax
// 0040a876  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040a87a  8ac3                 mov al, bl
// 0040a87c  5b                   pop ebx
// 0040a87d  5e                   pop esi
// 0040a87e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a885  83c414               add esp, 0x14
// 0040a888  c3                   ret 

struct TypeInfo;
extern TypeInfo boolType;
extern bool (__thiscall *equalType)(const TypeInfo *, const TypeInfo &);

struct Holder {
    virtual ~Holder();
    virtual const TypeInfo &type() const;
    virtual Holder *clone() const;
};

struct Descriptor {
    unsigned char padding[8];
    const TypeInfo *type;
};

extern bool *__cdecl getStoredBool(Holder **);

inline Holder *cloneHolder(Holder *holder)
{
    if (holder)
        return holder->clone();
    return 0;
}

struct Value {
    Descriptor *descriptor;
    Holder *holder;

    Value(const Value &other);
    ~Value();
    bool *convert();
};

inline Value::Value(const Value &other)
    : descriptor(other.descriptor),
      holder(cloneHolder(other.holder))
{
}

inline Value::~Value()
{
    if (holder)
        delete holder;
}

struct FactoryProduct : Value {
    bool get();
};

bool FactoryProduct::get()
{
    const TypeInfo *typeInfo = descriptor->type;
    if (equalType(&boolType, *typeInfo))
        return *getStoredBool(&holder);

    Value temporary(*this);
    return *temporary.convert();
}
