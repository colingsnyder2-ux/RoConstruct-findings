// from server: 98% by colin
// roc 2008-06 00565970  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565970
//
// 00565970  64a100000000         mov eax, dword ptr fs:[0]
// 00565976  6aff                 push -1
// 00565978  6809e77c00           push 0x7ce709
// 0056597d  50                   push eax
// 0056597e  64892500000000       mov dword ptr fs:[0], esp
// 00565985  83ec20               sub esp, 0x20
// 00565988  56                   push esi
// 00565989  57                   push edi
// 0056598a  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0056598e  8bf1                 mov esi, ecx
// 00565990  8bcf                 mov ecx, edi
// 00565992  e8796e0100           call 0x57c810
// 00565997  84c0                 test al, al
// 00565999  0f8500010000         jne 0x565a9f
// 0056599f  53                   push ebx
// 005659a0  8d5f10               lea ebx, [edi + 0x10]
// 005659a3  55                   push ebp
// 005659a4  8bcb                 mov ecx, ebx
// 005659a6  e855680100           call 0x57c200
// 005659ab  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005659af  84c0                 test al, al
// 005659b1  0f84be000000         je 0x565a75
// 005659b7  8d4c2414             lea ecx, [esp + 0x14]
// 005659bb  ff1560248000         call dword ptr [0x802460]
// 005659c1  8d442414             lea eax, [esp + 0x14]
// 005659c5  50                   push eax
// 005659c6  8bcb                 mov ecx, ebx
// 005659c8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005659d0  e83b680100           call 0x57c210
// 005659d5  84c0                 test al, al
// 005659d7  0f8486000000         je 0x565a63
// 005659dd  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 005659e2  8b442418             mov eax, dword ptr [esp + 0x18]
// 005659e6  7304                 jae 0x5659ec
// 005659e8  8d442418             lea eax, [esp + 0x18]
// 005659ec  8b7e20               mov edi, dword ptr [esi + 0x20]
// 005659ef  8d4c2444             lea ecx, [esp + 0x44]
// 005659f3  51                   push ecx
// 005659f4  50                   push eax
// 005659f5  e896e8feff           call 0x554290
// 005659fa  83c404               add esp, 4
// 005659fd  50                   push eax
// 005659fe  8bcf                 mov ecx, edi
// 00565a00  e8fb780800           call 0x5ed300
// 00565a05  84c0                 test al, al
// 00565a07  7443                 je 0x565a4c
// 00565a09  8b542444             mov edx, dword ptr [esp + 0x44]
// 00565a0d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00565a10  89542444             mov dword ptr [esp + 0x44], edx
// 00565a14  8b01                 mov eax, dword ptr [ecx]
// 00565a16  8b400c               mov eax, dword ptr [eax + 0xc]
// 00565a19  8d542444             lea edx, [esp + 0x44]
// 00565a1d  52                   push edx
// 00565a1e  8b542444             mov edx, dword ptr [esp + 0x44]
// 00565a22  52                   push edx
// 00565a23  ffd0                 call eax
// 00565a25  8d4c2414             lea ecx, [esp + 0x14]
// 00565a29  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00565a31  ff1568248000         call dword ptr [0x802468]
// 00565a37  5d                   pop ebp
// 00565a38  5b                   pop ebx
// 00565a39  5f                   pop edi
// 00565a3a  5e                   pop esi
// 00565a3b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00565a3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00565a46  83c42c               add esp, 0x2c
// 00565a49  c20c00               ret 0xc
// 00565a4c  837c242800           cmp dword ptr [esp + 0x28], 0
// 00565a51  7510                 jne 0x565a63
// 00565a53  8b16                 mov edx, dword ptr [esi]
// 00565a55  8b4234               mov eax, dword ptr [edx + 0x34]
// 00565a58  6a00                 push 0
// 00565a5a  55                   push ebp
// 00565a5b  8bce                 mov ecx, esi
// 00565a5d  ffd0                 call eax
// 00565a5f  84c0                 test al, al
// 00565a61  75c2                 jne 0x565a25
// 00565a63  8d4c2414             lea ecx, [esp + 0x14]
// 00565a67  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00565a6f  ff1568248000         call dword ptr [0x802468]
// 00565a75  8d4c2410             lea ecx, [esp + 0x10]
// 00565a79  51                   push ecx
// 00565a7a  8bcb                 mov ecx, ebx
// 00565a7c  e86f6a0100           call 0x57c4f0
// 00565a81  84c0                 test al, al
// 00565a83  7418                 je 0x565a9d
// 00565a85  8b542410             mov edx, dword ptr [esp + 0x10]
// 00565a89  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00565a8c  89542440             mov dword ptr [esp + 0x40], edx
// 00565a90  8b01                 mov eax, dword ptr [ecx]
// 00565a92  8b400c               mov eax, dword ptr [eax + 0xc]
// 00565a95  8d542440             lea edx, [esp + 0x40]
// 00565a99  52                   push edx
// 00565a9a  55                   push ebp
// 00565a9b  ffd0                 call eax
// 00565a9d  5d                   pop ebp
// 00565a9e  5b                   pop ebx
// 00565a9f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00565aa3  5f                   pop edi
// 00565aa4  5e                   pop esi
// 00565aa5  64890d00000000       mov dword ptr fs:[0], ecx
// 00565aac  83c42c               add esp, 0x2c
// 00565aaf  c20c00               ret 0xc

struct String;
extern void (__thiscall *stringConstruct)(String *);
extern void (__thiscall *stringDestroy)(String *);

struct String {
    unsigned int proxy;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    String();
    ~String();
};

inline String::String() { stringConstruct(this); }
inline String::~String() { stringDestroy(this); }

struct Value {
    bool isString() const;
    bool getString(String *) const;
    bool getInteger(int *) const;
};

struct Element {
    char padding[16];
    Value value;
    bool isEmpty() const;
};

struct Name;
extern const Name &__cdecl getName(const char *);

struct Enumeration {
    bool lookup(const Name &, int *) const;
};

enum EnumValue { EnumZero = 0 };

struct Setter;
struct SetterTable {
    void *padding[3];
    void (__thiscall *set)(Setter *, void *, const EnumValue &);
};

struct Setter {
    SetterTable *table;
};

struct S;
struct STable {
    void *padding[13];
    bool (__thiscall *setDefault)(S *, void *, int);
};

struct S {
    STable *table;
    char padding[24];
    Setter *setter;
    Enumeration *enumeration;

    void read(void *, Element *, int);
};

void S::read(void *object, Element *element, int unused)
{
    if (element->isEmpty())
        return;

    int result;
    const Value &value = element->value;
    if (value.isString()) {
        String text;
        if (value.getString(&text)) {
            const char *characters = text.storage.pointer;
            if (text.capacity < 16)
                characters = text.storage.buffer;
            Enumeration *mapping = enumeration;
            if (mapping->lookup(getName(characters), &result)) {
                EnumValue converted = static_cast<EnumValue>(result);
                setter->table->set(setter, object, converted);
                return;
            }
            if (text.length == 0 && table->setDefault(this, object, 0))
                return;
        }
    }

    if (value.getInteger(&result)) {
        EnumValue converted = static_cast<EnumValue>(result);
        setter->table->set(setter, object, converted);
    }
}
