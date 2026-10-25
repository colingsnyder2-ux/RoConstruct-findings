// from server: 100% by colin
// roc 2008-06 00597740  unit: RBX::VDecal::?$FactoryProduct  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597740
//
// 00597740  64a100000000         mov eax, dword ptr fs:[0]
// 00597746  6aff                 push -1
// 00597748  68e1237d00           push 0x7d23e1
// 0059774d  50                   push eax
// 0059774e  64892500000000       mov dword ptr fs:[0], esp
// 00597755  83ec64               sub esp, 0x64
// 00597758  53                   push ebx
// 00597759  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0059775f  56                   push esi
// 00597760  57                   push edi
// 00597761  8bf9                 mov edi, ecx
// 00597763  8d7704               lea esi, [edi + 4]
// 00597766  85f6                 test esi, esi
// 00597768  7428                 je 0x597792
// 0059776a  8b0e                 mov ecx, dword ptr [esi]
// 0059776c  85c9                 test ecx, ecx
// 0059776e  7409                 je 0x597779
// 00597770  8b01                 mov eax, dword ptr [ecx]
// 00597772  8b5004               mov edx, dword ptr [eax + 4]
// 00597775  ffd2                 call edx
// 00597777  eb05                 jmp 0x59777e
// 00597779  b814969200           mov eax, 0x929614
// 0059777e  68789c9400           push 0x949c78
// 00597783  8bc8                 mov ecx, eax
// 00597785  ffd3                 call ebx
// 00597787  84c0                 test al, al
// 00597789  7407                 je 0x597792
// 0059778b  8b06                 mov eax, dword ptr [esi]
// 0059778d  83c004               add eax, 4
// 00597790  7576                 jne 0x597808
// 00597792  8b07                 mov eax, dword ptr [edi]
// 00597794  8b4008               mov eax, dword ptr [eax + 8]
// 00597797  50                   push eax
// 00597798  b9f8be9200           mov ecx, 0x92bef8
// 0059779d  ffd3                 call ebx
// 0059779f  84c0                 test al, al
// 005977a1  0f8485000000         je 0x59782c
// 005977a7  8d4c2428             lea ecx, [esp + 0x28]
// 005977ab  e8a058eaff           call 0x43d050
// 005977b0  8d4c2428             lea ecx, [esp + 0x28]
// 005977b4  51                   push ecx
// 005977b5  56                   push esi
// 005977b6  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 005977c1  e8cae4e7ff           call 0x415c90
// 005977c6  83c404               add esp, 4
// 005977c9  50                   push eax
// 005977ca  e8b1fcffff           call 0x597480
// 005977cf  83c408               add esp, 8
// 005977d2  84c0                 test al, al
// 005977d4  7444                 je 0x59781a
// 005977d6  8d542428             lea edx, [esp + 0x28]
// 005977da  52                   push edx
// 005977db  8bce                 mov ecx, esi
// 005977dd  e81effffff           call 0x597700
// 005977e2  e89955fdff           call 0x56cd80
// 005977e7  56                   push esi
// 005977e8  8907                 mov dword ptr [edi], eax
// 005977ea  e881fbffff           call 0x597370
// 005977ef  83c404               add esp, 4
// 005977f2  8d4c2428             lea ecx, [esp + 0x28]
// 005977f6  8bf0                 mov esi, eax
// 005977f8  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00597800  ff1568248000         call dword ptr [0x802468]
// 00597806  8bc6                 mov eax, esi
// 00597808  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0059780c  5f                   pop edi
// 0059780d  5e                   pop esi
// 0059780e  5b                   pop ebx
// 0059780f  64890d00000000       mov dword ptr fs:[0], ecx
// 00597816  83c470               add esp, 0x70
// 00597819  c3                   ret 
// 0059781a  8d4c2428             lea ecx, [esp + 0x28]
// 0059781e  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00597826  ff1568248000         call dword ptr [0x802468]
// 0059782c  e84f55fdff           call 0x56cd80
// 00597831  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597834  83c004               add eax, 4
// 00597837  ba10000000           mov edx, 0x10
// 0059783c  395018               cmp dword ptr [eax + 0x18], edx
// 0059783f  7205                 jb 0x597846
// 00597841  8b4804               mov ecx, dword ptr [eax + 4]
// 00597844  eb03                 jmp 0x597849
// 00597846  8d4804               lea ecx, [eax + 4]
// 00597849  8b07                 mov eax, dword ptr [edi]
// 0059784b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0059784e  83c004               add eax, 4
// 00597851  395018               cmp dword ptr [eax + 0x18], edx
// 00597854  7205                 jb 0x59785b
// 00597856  8b4004               mov eax, dword ptr [eax + 4]
// 00597859  eb03                 jmp 0x59785e
// 0059785b  83c004               add eax, 4
// 0059785e  51                   push ecx
// 0059785f  50                   push eax
// 00597860  8d4c2414             lea ecx, [esp + 0x14]
// 00597864  681cf78200           push 0x82f71c
// 00597869  51                   push ecx
// 0059786a  e8a122f7ff           call 0x509b10
// 0059786f  83c410               add esp, 0x10
// 00597872  50                   push eax
// 00597873  8d4c244c             lea ecx, [esp + 0x4c]
// 00597877  c744247c01000000     mov dword ptr [esp + 0x7c], 1
// 0059787f  e8cc24e7ff           call 0x409d50
// 00597884  68c81b8d00           push 0x8d1bc8
// 00597889  8d54244c             lea edx, [esp + 0x4c]
// 0059788d  52                   push edx
// 0059788e  e8f99c1000           call 0x6a158c

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
