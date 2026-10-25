// from server: 100% by king_originala
// roc 2008-06 006154e0  unit: RBX::RevoluteLink  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006154e0
//
// 006154e0  64a100000000         mov eax, dword ptr fs:[0]
// 006154e6  6aff                 push -1
// 006154e8  68e1237d00           push 0x7d23e1
// 006154ed  50                   push eax
// 006154ee  64892500000000       mov dword ptr fs:[0], esp
// 006154f5  83ec64               sub esp, 0x64
// 006154f8  53                   push ebx
// 006154f9  8b1d78288000         mov ebx, dword ptr [0x802878]
// 006154ff  56                   push esi
// 00615500  57                   push edi
// 00615501  8bf9                 mov edi, ecx
// 00615503  8d7704               lea esi, [edi + 4]
// 00615506  85f6                 test esi, esi
// 00615508  7428                 je 0x615532
// 0061550a  8b0e                 mov ecx, dword ptr [esi]
// 0061550c  85c9                 test ecx, ecx
// 0061550e  7409                 je 0x615519
// 00615510  8b01                 mov eax, dword ptr [ecx]
// 00615512  8b5004               mov edx, dword ptr [eax + 4]
// 00615515  ffd2                 call edx
// 00615517  eb05                 jmp 0x61551e
// 00615519  b814969200           mov eax, 0x929614
// 0061551e  6868b39400           push 0x94b368
// 00615523  8bc8                 mov ecx, eax
// 00615525  ffd3                 call ebx
// 00615527  84c0                 test al, al
// 00615529  7407                 je 0x615532
// 0061552b  8b06                 mov eax, dword ptr [esi]
// 0061552d  83c004               add eax, 4
// 00615530  7576                 jne 0x6155a8
// 00615532  8b07                 mov eax, dword ptr [edi]
// 00615534  8b4008               mov eax, dword ptr [eax + 8]
// 00615537  50                   push eax
// 00615538  b9f8be9200           mov ecx, 0x92bef8
// 0061553d  ffd3                 call ebx
// 0061553f  84c0                 test al, al
// 00615541  0f8485000000         je 0x6155cc
// 00615547  8d4c2428             lea ecx, [esp + 0x28]
// 0061554b  e8007be2ff           call 0x43d050
// 00615550  8d4c2428             lea ecx, [esp + 0x28]
// 00615554  51                   push ecx
// 00615555  56                   push esi
// 00615556  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00615561  e82a07e0ff           call 0x415c90
// 00615566  83c404               add esp, 4
// 00615569  50                   push eax
// 0061556a  e8111ff8ff           call 0x597480
// 0061556f  83c408               add esp, 8
// 00615572  84c0                 test al, al
// 00615574  7444                 je 0x6155ba
// 00615576  8d542428             lea edx, [esp + 0x28]
// 0061557a  52                   push edx
// 0061557b  8bce                 mov ecx, esi
// 0061557d  e80e9cf8ff           call 0x59f190
// 00615582  e8f977f5ff           call 0x56cd80
// 00615587  56                   push esi
// 00615588  8907                 mov dword ptr [edi], eax
// 0061558a  e811ffffff           call 0x6154a0
// 0061558f  83c404               add esp, 4
// 00615592  8d4c2428             lea ecx, [esp + 0x28]
// 00615596  8bf0                 mov esi, eax
// 00615598  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 006155a0  ff1568248000         call dword ptr [0x802468]
// 006155a6  8bc6                 mov eax, esi
// 006155a8  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 006155ac  5f                   pop edi
// 006155ad  5e                   pop esi
// 006155ae  5b                   pop ebx
// 006155af  64890d00000000       mov dword ptr fs:[0], ecx
// 006155b6  83c470               add esp, 0x70
// 006155b9  c3                   ret 
// 006155ba  8d4c2428             lea ecx, [esp + 0x28]
// 006155be  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 006155c6  ff1568248000         call dword ptr [0x802468]
// 006155cc  e8af77f5ff           call 0x56cd80
// 006155d1  8b400c               mov eax, dword ptr [eax + 0xc]
// 006155d4  83c004               add eax, 4
// 006155d7  ba10000000           mov edx, 0x10
// 006155dc  395018               cmp dword ptr [eax + 0x18], edx
// 006155df  7205                 jb 0x6155e6
// 006155e1  8b4804               mov ecx, dword ptr [eax + 4]
// 006155e4  eb03                 jmp 0x6155e9
// 006155e6  8d4804               lea ecx, [eax + 4]
// 006155e9  8b07                 mov eax, dword ptr [edi]
// 006155eb  8b400c               mov eax, dword ptr [eax + 0xc]
// 006155ee  83c004               add eax, 4
// 006155f1  395018               cmp dword ptr [eax + 0x18], edx
// 006155f4  7205                 jb 0x6155fb
// 006155f6  8b4004               mov eax, dword ptr [eax + 4]
// 006155f9  eb03                 jmp 0x6155fe
// 006155fb  83c004               add eax, 4
// 006155fe  51                   push ecx
// 006155ff  50                   push eax
// 00615600  8d4c2414             lea ecx, [esp + 0x14]
// 00615604  681cf78200           push 0x82f71c
// 00615609  51                   push ecx
// 0061560a  e80145efff           call 0x509b10
// 0061560f  83c410               add esp, 0x10
// 00615612  50                   push eax
// 00615613  8d4c244c             lea ecx, [esp + 0x4c]
// 00615617  c744247c01000000     mov dword ptr [esp + 0x7c], 1
// 0061561f  e82c47dfff           call 0x409d50
// 00615624  68c81b8d00           push 0x8d1bc8
// 00615629  8d54244c             lea edx, [esp + 0x4c]
// 0061562d  52                   push edx
// 0061562e  e859bf0800           call 0x6a158c

struct TypeInfo;
typedef bool (__thiscall *TypeEqual)(const TypeInfo*, const TypeInfo&);
extern TypeEqual typeEqual;

struct TypeInfo {
    __forceinline bool equals(const TypeInfo& other, TypeEqual compare) const;
};

__forceinline bool TypeInfo::equals(const TypeInfo& other, TypeEqual compare) const
{
    return compare(this, other);
}

extern const TypeInfo emptyType;
extern const TypeInfo meshType;
extern const TypeInfo stringType;

struct String;
extern void (__thiscall *destroyString)(String*);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    __forceinline ~String();
};

__forceinline String::~String()
{
    destroyString(this);
}

struct MeshId : String {
    unsigned int extra;
    MeshId();
};

struct Placeholder {
    virtual void unused();
    virtual const TypeInfo& type() const;
};

struct Any {
    Placeholder* content;
    Any& assign(const MeshId&);
};

struct Descriptor {
    unsigned int words[2];
    const TypeInfo* castType;
    const TypeInfo* storedType;
};

struct Error {
    char storage[40];
    Error(const String&);
    Error(const Error&);
    ~Error();
};

extern Descriptor* __cdecl meshDescriptor();
extern String* __cdecl stringCast(Any*);
extern bool __cdecl convertString(const String*, MeshId*);
extern MeshId* __cdecl meshCast(Any*);
extern String __cdecl format(const char*, ...);

struct S {
    Descriptor* descriptor;
    Any value;

    MeshId* get();
};

MeshId* S::get()
{
    TypeEqual equal = typeEqual;
    Any* source = &value;
    if (source) {
        const TypeInfo& type = source->content
            ? source->content->type()
            : emptyType;
        if (type.equals(meshType, equal)) {
            MeshId* result = reinterpret_cast<MeshId*>(
                reinterpret_cast<char*>(source->content) + 4);
            if (result)
                return result;
        }
    }

    if (stringType.equals(*descriptor->castType, equal)) {
        MeshId converted;
        if (convertString(stringCast(source), &converted)) {
            source->assign(converted);
            descriptor = meshDescriptor();
            return meshCast(source);
        }
    }

    const String* destinationName = reinterpret_cast<const String*>(
        reinterpret_cast<const char*>(meshDescriptor()->storedType) + 4);
    const char* destination = destinationName->capacity >= 16
        ? destinationName->pointer
        : destinationName->buffer;

    const String* sourceName = reinterpret_cast<const String*>(
        reinterpret_cast<const char*>(descriptor->storedType) + 4);
    const char* origin = sourceName->capacity >= 16
        ? sourceName->pointer
        : sourceName->buffer;

    throw Error(format("Unable to cast %s to %s", origin, destination));
}
