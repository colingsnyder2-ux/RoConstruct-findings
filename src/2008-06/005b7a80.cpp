// from server: 100% by king_originala
// roc 2008-06 005b7a80  unit: VStockSound::?$FactoryProduct  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7a80
//
// 005b7a80  64a100000000         mov eax, dword ptr fs:[0]
// 005b7a86  6aff                 push -1
// 005b7a88  68e1237d00           push 0x7d23e1
// 005b7a8d  50                   push eax
// 005b7a8e  64892500000000       mov dword ptr fs:[0], esp
// 005b7a95  83ec64               sub esp, 0x64
// 005b7a98  53                   push ebx
// 005b7a99  8b1d78288000         mov ebx, dword ptr [0x802878]
// 005b7a9f  56                   push esi
// 005b7aa0  57                   push edi
// 005b7aa1  8bf9                 mov edi, ecx
// 005b7aa3  8d7704               lea esi, [edi + 4]
// 005b7aa6  85f6                 test esi, esi
// 005b7aa8  7428                 je 0x5b7ad2
// 005b7aaa  8b0e                 mov ecx, dword ptr [esi]
// 005b7aac  85c9                 test ecx, ecx
// 005b7aae  7409                 je 0x5b7ab9
// 005b7ab0  8b01                 mov eax, dword ptr [ecx]
// 005b7ab2  8b5004               mov edx, dword ptr [eax + 4]
// 005b7ab5  ffd2                 call edx
// 005b7ab7  eb05                 jmp 0x5b7abe
// 005b7ab9  b814969200           mov eax, 0x929614
// 005b7abe  68e8d39400           push 0x94d3e8
// 005b7ac3  8bc8                 mov ecx, eax
// 005b7ac5  ffd3                 call ebx
// 005b7ac7  84c0                 test al, al
// 005b7ac9  7407                 je 0x5b7ad2
// 005b7acb  8b06                 mov eax, dword ptr [esi]
// 005b7acd  83c004               add eax, 4
// 005b7ad0  7576                 jne 0x5b7b48
// 005b7ad2  8b07                 mov eax, dword ptr [edi]
// 005b7ad4  8b4008               mov eax, dword ptr [eax + 8]
// 005b7ad7  50                   push eax
// 005b7ad8  b9f8be9200           mov ecx, 0x92bef8
// 005b7add  ffd3                 call ebx
// 005b7adf  84c0                 test al, al
// 005b7ae1  0f8485000000         je 0x5b7b6c
// 005b7ae7  8d4c2428             lea ecx, [esp + 0x28]
// 005b7aeb  e86055e8ff           call 0x43d050
// 005b7af0  8d4c2428             lea ecx, [esp + 0x28]
// 005b7af4  51                   push ecx
// 005b7af5  56                   push esi
// 005b7af6  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 005b7b01  e88ae1e5ff           call 0x415c90
// 005b7b06  83c404               add esp, 4
// 005b7b09  50                   push eax
// 005b7b0a  e871f9fdff           call 0x597480
// 005b7b0f  83c408               add esp, 8
// 005b7b12  84c0                 test al, al
// 005b7b14  7444                 je 0x5b7b5a
// 005b7b16  8d542428             lea edx, [esp + 0x28]
// 005b7b1a  52                   push edx
// 005b7b1b  8bce                 mov ecx, esi
// 005b7b1d  e81effffff           call 0x5b7a40
// 005b7b22  e85952fbff           call 0x56cd80
// 005b7b27  56                   push esi
// 005b7b28  8907                 mov dword ptr [edi], eax
// 005b7b2a  e871f1ffff           call 0x5b6ca0
// 005b7b2f  83c404               add esp, 4
// 005b7b32  8d4c2428             lea ecx, [esp + 0x28]
// 005b7b36  8bf0                 mov esi, eax
// 005b7b38  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 005b7b40  ff1568248000         call dword ptr [0x802468]
// 005b7b46  8bc6                 mov eax, esi
// 005b7b48  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005b7b4c  5f                   pop edi
// 005b7b4d  5e                   pop esi
// 005b7b4e  5b                   pop ebx
// 005b7b4f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7b56  83c470               add esp, 0x70
// 005b7b59  c3                   ret 
// 005b7b5a  8d4c2428             lea ecx, [esp + 0x28]
// 005b7b5e  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 005b7b66  ff1568248000         call dword ptr [0x802468]
// 005b7b6c  e80f52fbff           call 0x56cd80
// 005b7b71  8b400c               mov eax, dword ptr [eax + 0xc]
// 005b7b74  83c004               add eax, 4
// 005b7b77  ba10000000           mov edx, 0x10
// 005b7b7c  395018               cmp dword ptr [eax + 0x18], edx
// 005b7b7f  7205                 jb 0x5b7b86
// 005b7b81  8b4804               mov ecx, dword ptr [eax + 4]
// 005b7b84  eb03                 jmp 0x5b7b89
// 005b7b86  8d4804               lea ecx, [eax + 4]
// 005b7b89  8b07                 mov eax, dword ptr [edi]
// 005b7b8b  8b400c               mov eax, dword ptr [eax + 0xc]
// 005b7b8e  83c004               add eax, 4
// 005b7b91  395018               cmp dword ptr [eax + 0x18], edx
// 005b7b94  7205                 jb 0x5b7b9b
// 005b7b96  8b4004               mov eax, dword ptr [eax + 4]
// 005b7b99  eb03                 jmp 0x5b7b9e
// 005b7b9b  83c004               add eax, 4
// 005b7b9e  51                   push ecx
// 005b7b9f  50                   push eax
// 005b7ba0  8d4c2414             lea ecx, [esp + 0x14]
// 005b7ba4  681cf78200           push 0x82f71c
// 005b7ba9  51                   push ecx
// 005b7baa  e8611ff5ff           call 0x509b10
// 005b7baf  83c410               add esp, 0x10
// 005b7bb2  50                   push eax
// 005b7bb3  8d4c244c             lea ecx, [esp + 0x4c]
// 005b7bb7  c744247c01000000     mov dword ptr [esp + 0x7c], 1
// 005b7bbf  e88c21e5ff           call 0x409d50
// 005b7bc4  68c81b8d00           push 0x8d1bc8
// 005b7bc9  8d54244c             lea edx, [esp + 0x4c]
// 005b7bcd  52                   push edx
// 005b7bce  e8b9990e00           call 0x6a158c

struct TypeInfo {
    void *table;
    void *cache;
    const char *name;
};

typedef bool (__thiscall *TypeEqual)(const TypeInfo *, const TypeInfo *);
extern TypeEqual equalType;
extern const TypeInfo emptyType;
extern const TypeInfo soundType;
extern const TypeInfo stringType;

struct String;
extern void (__thiscall *destroyString)(String *);

struct String {
    void *proxy;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
};

inline String::~String()
{
    destroyString(this);
}

struct SoundId : String {
    unsigned int extra;

    SoundId();
};

struct NamedType {
    void *table;
    String name;
};

struct Descriptor {
    void *field0;
    void *field4;
    const TypeInfo *type;
    NamedType *name;
};

struct Holder {
    virtual ~Holder();
    virtual const TypeInfo &type() const;
};

struct Value {
    Holder *content;
    void assign(const SoundId &);
};

struct CastError {
    void *table;
    const char *description;
    int ownsDescription;
    String message;

    CastError(const String &);
    CastError(const CastError &);
    ~CastError();
};

extern Descriptor *getSoundDescriptor();
extern String *getString(Value *);
extern bool convertSound(const String &, SoundId &);
extern void *getSound(Value *);
extern String formatMessage(const char *, ...);

struct Product {
    Descriptor *descriptor;
    Value value;

    void *castSound();
};

void *Product::castSound()
{
    TypeEqual compare = equalType;
    Value *source = &value;
    if (source) {
        const TypeInfo &type = source->content
            ? source->content->type()
            : emptyType;
        if (compare(&type, &soundType)) {
            void *result = reinterpret_cast<char *>(source->content) + 4;
            if (result)
                return result;
        }
    }

    const TypeInfo *sourceType = descriptor->type;
    if (compare(&stringType, sourceType)) {
        SoundId converted;
        if (convertSound(*getString(source), converted)) {
            source->assign(converted);
            descriptor = getSoundDescriptor();
            return getSound(source);
        }
    }

    String *targetName = &getSoundDescriptor()->name->name;
    const char *target = targetName->capacity >= 16
        ? targetName->storage.pointer
        : targetName->storage.buffer;

    String *sourceName = &descriptor->name->name;
    const char *origin = sourceName->capacity >= 16
        ? sourceName->storage.pointer
        : sourceName->storage.buffer;

    throw CastError(formatMessage("Unable to cast %s to %s", origin, target));
}
