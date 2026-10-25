// from server: 100% by king_originala
// roc 2008-06 005ed6c0  unit: RBX::Controller::W4InputType::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed6c0
//
// 005ed6c0  6aff                 push -1
// 005ed6c2  6868e37c00           push 0x7ce368
// 005ed6c7  64a100000000         mov eax, dword ptr fs:[0]
// 005ed6cd  50                   push eax
// 005ed6ce  64892500000000       mov dword ptr fs:[0], esp
// 005ed6d5  51                   push ecx
// 005ed6d6  56                   push esi
// 005ed6d7  57                   push edi
// 005ed6d8  8bf1                 mov esi, ecx
// 005ed6da  681cb19700           push 0x97b11c
// 005ed6df  6820d65e00           push 0x5ed620
// 005ed6e4  89742410             mov dword ptr [esp + 0x10], esi
// 005ed6e8  e8439cf6ff           call 0x557330
// 005ed6ed  83c408               add esp, 8
// 005ed6f0  e8cbfeffff           call 0x5ed5c0
// 005ed6f5  8bf8                 mov edi, eax
// 005ed6f7  e8f4f0faff           call 0x59c7f0
// 005ed6fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ed700  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ed704  51                   push ecx
// 005ed705  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ed709  52                   push edx
// 005ed70a  51                   push ecx
// 005ed70b  57                   push edi
// 005ed70c  50                   push eax
// 005ed70d  8bce                 mov ecx, esi
// 005ed70f  e83ceff7ff           call 0x56c650
// 005ed714  897e18               mov dword ptr [esi + 0x18], edi
// 005ed717  6a0c                 push 0xc
// 005ed719  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ed721  c70694fe8300         mov dword ptr [esi], 0x83fe94
// 005ed727  e8f4310b00           call 0x6a0920
// 005ed72c  83c404               add esp, 4
// 005ed72f  85c0                 test eax, eax
// 005ed731  7416                 je 0x5ed749
// 005ed733  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ed737  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ed73b  c70014fd8300         mov dword ptr [eax], 0x83fd14
// 005ed741  895004               mov dword ptr [eax + 4], edx
// 005ed744  894808               mov dword ptr [eax + 8], ecx
// 005ed747  eb02                 jmp 0x5ed74b
// 005ed749  33c0                 xor eax, eax
// 005ed74b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ed74f  89461c               mov dword ptr [esi + 0x1c], eax
// 005ed752  5f                   pop edi
// 005ed753  8bc6                 mov eax, esi
// 005ed755  5e                   pop esi
// 005ed756  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed75d  83c410               add esp, 0x10
// 005ed760  c21400               ret 0x14

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern void __cdecl registerDescriptor(void (__cdecl*)(), int*);
extern void __cdecl descriptorCallback();
extern int descriptorRegistration;
extern void* __cdecl getEnumName();
extern void* __cdecl getEnumType();

struct EnumBase {
    unsigned char data[20];

    EnumBase(void*, void*, int, int, int);
    ~EnumBase();
    virtual void describe();
};

struct EnumTypeBase : EnumBase {
    EnumTypeBase(int, int, int, void*, void*);
};

inline EnumTypeBase::EnumTypeBase(int a, int b, int e, void* n, void* t)
    : EnumBase(t, n, a, b, e)
{
}

struct NamedEnum : EnumTypeBase {
    void* name;

    NamedEnum(int, int, int, void*);
};

inline NamedEnum::NamedEnum(int a, int b, int e, void* n)
    : EnumTypeBase(a, b, e, n, getEnumType()), name(n)
{
}

struct EnumValue {
    int first;
    int second;

    EnumValue(int, int);
    virtual void invoke();
};

inline EnumValue::EnumValue(int b, int a)
    : first(a), second(b)
{
}

struct EnumDesc : NamedEnum {
    EnumValue* value;

    EnumDesc(int, int, int, int, int);
    virtual void describe();
};

EnumDesc::EnumDesc(int a, int b, int c, int d, int e)
    : NamedEnum(a, b, e,
        (registerDescriptor(descriptorCallback, &descriptorRegistration),
         getEnumName()))
{
    value = new EnumValue(d, c);
}
