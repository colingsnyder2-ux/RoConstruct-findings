// from server: 100% by king_originala
// roc 2008-06 005ed900  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed900
//
// 005ed900  64a100000000         mov eax, dword ptr fs:[0]
// 005ed906  6aff                 push -1
// 005ed908  6809e77c00           push 0x7ce709
// 005ed90d  50                   push eax
// 005ed90e  64892500000000       mov dword ptr fs:[0], esp
// 005ed915  83ec24               sub esp, 0x24
// 005ed918  55                   push ebp
// 005ed919  56                   push esi
// 005ed91a  8b742440             mov esi, dword ptr [esp + 0x40]
// 005ed91e  8be9                 mov ebp, ecx
// 005ed920  8bce                 mov ecx, esi
// 005ed922  e8e9eef8ff           call 0x57c810
// 005ed927  84c0                 test al, al
// 005ed929  0f85f2000000         jne 0x5eda21
// 005ed92f  53                   push ebx
// 005ed930  8d5e10               lea ebx, [esi + 0x10]
// 005ed933  8bcb                 mov ecx, ebx
// 005ed935  e8c6e8f8ff           call 0x57c200
// 005ed93a  84c0                 test al, al
// 005ed93c  0f84b2000000         je 0x5ed9f4
// 005ed942  8d4c2414             lea ecx, [esp + 0x14]
// 005ed946  ff1560248000         call dword ptr [0x802460]
// 005ed94c  8d442414             lea eax, [esp + 0x14]
// 005ed950  50                   push eax
// 005ed951  8bcb                 mov ecx, ebx
// 005ed953  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005ed95b  e8b0e8f8ff           call 0x57c210
// 005ed960  84c0                 test al, al
// 005ed962  747e                 je 0x5ed9e2
// 005ed964  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 005ed969  57                   push edi
// 005ed96a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005ed96e  7304                 jae 0x5ed974
// 005ed970  8d7c241c             lea edi, [esp + 0x1c]
// 005ed974  681cb19700           push 0x97b11c
// 005ed979  6820d65e00           push 0x5ed620
// 005ed97e  e8ad99f6ff           call 0x557330
// 005ed983  83c408               add esp, 8
// 005ed986  e835fcffff           call 0x5ed5c0
// 005ed98b  8d4c2448             lea ecx, [esp + 0x48]
// 005ed98f  51                   push ecx
// 005ed990  57                   push edi
// 005ed991  8bf0                 mov esi, eax
// 005ed993  e8f868f6ff           call 0x554290
// 005ed998  83c404               add esp, 4
// 005ed99b  50                   push eax
// 005ed99c  8bce                 mov ecx, esi
// 005ed99e  e85df9ffff           call 0x5ed300
// 005ed9a3  5f                   pop edi
// 005ed9a4  84c0                 test al, al
// 005ed9a6  743a                 je 0x5ed9e2
// 005ed9a8  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 005ed9ab  8b11                 mov edx, dword ptr [ecx]
// 005ed9ad  8b520c               mov edx, dword ptr [edx + 0xc]
// 005ed9b0  8d442444             lea eax, [esp + 0x44]
// 005ed9b4  50                   push eax
// 005ed9b5  8b442444             mov eax, dword ptr [esp + 0x44]
// 005ed9b9  50                   push eax
// 005ed9ba  ffd2                 call edx
// 005ed9bc  8d4c2414             lea ecx, [esp + 0x14]
// 005ed9c0  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005ed9c8  ff1568248000         call dword ptr [0x802468]
// 005ed9ce  5b                   pop ebx
// 005ed9cf  5e                   pop esi
// 005ed9d0  5d                   pop ebp
// 005ed9d1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ed9d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed9dc  83c430               add esp, 0x30
// 005ed9df  c20c00               ret 0xc
// 005ed9e2  8d4c2414             lea ecx, [esp + 0x14]
// 005ed9e6  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005ed9ee  ff1568248000         call dword ptr [0x802468]
// 005ed9f4  8d44240c             lea eax, [esp + 0xc]
// 005ed9f8  50                   push eax
// 005ed9f9  8bcb                 mov ecx, ebx
// 005ed9fb  e8f0eaf8ff           call 0x57c4f0
// 005eda00  84c0                 test al, al
// 005eda02  741c                 je 0x5eda20
// 005eda04  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005eda08  894c2410             mov dword ptr [esp + 0x10], ecx
// 005eda0c  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 005eda0f  8b11                 mov edx, dword ptr [ecx]
// 005eda11  8b520c               mov edx, dword ptr [edx + 0xc]
// 005eda14  8d442410             lea eax, [esp + 0x10]
// 005eda18  50                   push eax
// 005eda19  8b442444             mov eax, dword ptr [esp + 0x44]
// 005eda1d  50                   push eax
// 005eda1e  ffd2                 call edx
// 005eda20  5b                   pop ebx
// 005eda21  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eda25  5e                   pop esi
// 005eda26  5d                   pop ebp
// 005eda27  64890d00000000       mov dword ptr fs:[0], ecx
// 005eda2e  83c430               add esp, 0x30
// 005eda31  c20c00               ret 0xc

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String();
    ~String();
};

extern void (__thiscall* stringConstructor)(String*);
extern void (__thiscall* stringDestructor)(String*);

__forceinline String::String()
{
    stringConstructor(this);
}

__forceinline String::~String()
{
    stringDestructor(this);
}

struct Name;

struct Value {
    unsigned int name;
    unsigned int type;
    void* data;

    bool isString() const;
    bool getString(String* result) const;
    bool getInteger(int* result) const;
};

struct Element {
    char padding[16];
    Value value;

    bool isNull() const;
};

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void* instance, const int* value);
};

struct EnumDescriptor {
    bool convert(const Name& name, int* result);
};

extern void __cdecl initializeEnum();
extern int enumFlag;
extern void __cdecl registerEnum(void (__cdecl* initializer)(), int* flag);
extern EnumDescriptor* __cdecl getEnumDescriptor();
extern const Name& __cdecl getName(const char* text);

struct S {
    char padding[28];
    Setter* setter;

    void read(void* instance, Element* element, int unused);
};

void S::read(void* instance, Element* element, int unused)
{
    if (element->isNull())
        return;

    Value* source = &element->value;
    if (source->isString()) {
        String text;
        if (source->getString(&text)) {
            const char* characters =
                text.capacity >= 16 ? text.pointer : text.buffer;
            registerEnum(initializeEnum, &enumFlag);
            EnumDescriptor* descriptor = getEnumDescriptor();
            int value;
            if (descriptor->convert(getName(characters), &value)) {
                setter->set(instance, &value);
                return;
            }
        }
    }

    int integer;
    if (source->getInteger(&integer)) {
        int converted = integer;
        setter->set(instance, &converted);
    }
}
