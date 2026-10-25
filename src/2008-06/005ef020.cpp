// from server: 100% by king_originala
// roc 2008-06 005ef020  unit: RBX::$01::?$SurfaceDescriptor  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef020
//
// 005ef020  64a100000000         mov eax, dword ptr fs:[0]
// 005ef026  6aff                 push -1
// 005ef028  68b9fe7c00           push 0x7cfeb9
// 005ef02d  50                   push eax
// 005ef02e  64892500000000       mov dword ptr fs:[0], esp
// 005ef035  83ec44               sub esp, 0x44
// 005ef038  53                   push ebx
// 005ef039  8b1d78288000         mov ebx, dword ptr [0x802878]
// 005ef03f  56                   push esi
// 005ef040  57                   push edi
// 005ef041  8bf9                 mov edi, ecx
// 005ef043  8d7704               lea esi, [edi + 4]
// 005ef046  85f6                 test esi, esi
// 005ef048  742c                 je 0x5ef076
// 005ef04a  8b0e                 mov ecx, dword ptr [esi]
// 005ef04c  85c9                 test ecx, ecx
// 005ef04e  7409                 je 0x5ef059
// 005ef050  8b01                 mov eax, dword ptr [ecx]
// 005ef052  8b5004               mov edx, dword ptr [eax + 4]
// 005ef055  ffd2                 call edx
// 005ef057  eb05                 jmp 0x5ef05e
// 005ef059  b814969200           mov eax, 0x929614
// 005ef05e  68205e9500           push 0x955e20
// 005ef063  8bc8                 mov ecx, eax
// 005ef065  ffd3                 call ebx
// 005ef067  84c0                 test al, al
// 005ef069  740b                 je 0x5ef076
// 005ef06b  8b06                 mov eax, dword ptr [esi]
// 005ef06d  83c004               add eax, 4
// 005ef070  0f8593000000         jne 0x5ef109
// 005ef076  8b07                 mov eax, dword ptr [edi]
// 005ef078  8b4008               mov eax, dword ptr [eax + 8]
// 005ef07b  50                   push eax
// 005ef07c  b9f8be9200           mov ecx, 0x92bef8
// 005ef081  ffd3                 call ebx
// 005ef083  84c0                 test al, al
// 005ef085  7409                 je 0x5ef090
// 005ef087  56                   push esi
// 005ef088  e8036ce2ff           call 0x415c90
// 005ef08d  83c404               add esp, 4
// 005ef090  6820b19700           push 0x97b120
// 005ef095  6890d65e00           push 0x5ed690
// 005ef09a  e89182f6ff           call 0x557330
// 005ef09f  83c408               add esp, 8
// 005ef0a2  e889e5ffff           call 0x5ed630
// 005ef0a7  8b400c               mov eax, dword ptr [eax + 0xc]
// 005ef0aa  83c004               add eax, 4
// 005ef0ad  ba10000000           mov edx, 0x10
// 005ef0b2  395018               cmp dword ptr [eax + 0x18], edx
// 005ef0b5  7205                 jb 0x5ef0bc
// 005ef0b7  8b4804               mov ecx, dword ptr [eax + 4]
// 005ef0ba  eb03                 jmp 0x5ef0bf
// 005ef0bc  8d4804               lea ecx, [eax + 4]
// 005ef0bf  8b07                 mov eax, dword ptr [edi]
// 005ef0c1  8b400c               mov eax, dword ptr [eax + 0xc]
// 005ef0c4  83c004               add eax, 4
// 005ef0c7  395018               cmp dword ptr [eax + 0x18], edx
// 005ef0ca  7205                 jb 0x5ef0d1
// 005ef0cc  8b4004               mov eax, dword ptr [eax + 4]
// 005ef0cf  eb03                 jmp 0x5ef0d4
// 005ef0d1  83c004               add eax, 4
// 005ef0d4  51                   push ecx
// 005ef0d5  50                   push eax
// 005ef0d6  8d4c2414             lea ecx, [esp + 0x14]
// 005ef0da  681cf78200           push 0x82f71c
// 005ef0df  51                   push ecx
// 005ef0e0  e82baaf1ff           call 0x509b10
// 005ef0e5  83c410               add esp, 0x10
// 005ef0e8  50                   push eax
// 005ef0e9  8d4c242c             lea ecx, [esp + 0x2c]
// 005ef0ed  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 005ef0f5  e856ace1ff           call 0x409d50
// 005ef0fa  68c81b8d00           push 0x8d1bc8
// 005ef0ff  8d54242c             lea edx, [esp + 0x2c]
// 005ef103  52                   push edx
// 005ef104  e883240b00           call 0x6a158c
// 005ef109  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005ef10d  5f                   pop edi
// 005ef10e  5e                   pop esi
// 005ef10f  5b                   pop ebx
// 005ef110  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef117  83c450               add esp, 0x50
// 005ef11a  c3                   ret 

struct TypeInfo {};
typedef bool (__thiscall *TypeEqual)(const TypeInfo *, const TypeInfo &);
extern TypeEqual typeEqual;

extern TypeInfo emptyType;
extern TypeInfo valueType;
extern TypeInfo conversionType;
extern char descriptorName[];
extern char castFormat[];

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char *pointer;
    } data;
    unsigned int length;
    unsigned int capacity;

    ~String();
};

struct NamedString {
    unsigned int prefix;
    String value;
};

struct Exception {
    char storage[40];

    Exception(const String &);
    Exception(const Exception &);
    ~Exception();
};

struct Placeholder;
struct PlaceholderTable {
    void (__thiscall *destroy)(Placeholder *, unsigned int);
    const TypeInfo &(__thiscall *type)(const Placeholder *);
};

struct Placeholder {
    PlaceholderTable *vtable;
};

struct Descriptor {
    unsigned int fields[2];
    const TypeInfo *type;
    NamedString *name;
};

extern void __cdecl descriptorCallback();
extern void __cdecl registerDescriptor(void (__cdecl *)(), const char *);
extern Descriptor *__cdecl getDescriptor();
extern void *__cdecl convert(Placeholder **);
extern String __cdecl format(const char *, ...);

struct SurfaceDescriptor {
    Descriptor *descriptor;
    Placeholder *storage;

    int *cast();
};

int *SurfaceDescriptor::cast()
{
    TypeEqual equal = typeEqual;
    Placeholder **source = &storage;
    if (source) {
        const TypeInfo &type = *source
            ? (*source)->vtable->type(*source)
            : emptyType;
        if (equal(&type, valueType)) {
            int *result = reinterpret_cast<int *>(*source) + 1;
            if (result)
                return result;
        }
    }

    const TypeInfo *actualType = descriptor->type;
    if (equal(&conversionType, *actualType))
        convert(source);

    registerDescriptor(descriptorCallback, descriptorName);

    String *destinationName = &getDescriptor()->name->value;
    const char *destination = destinationName->capacity >= 16
        ? destinationName->data.pointer
        : destinationName->data.buffer;

    String *sourceName = &descriptor->name->value;
    const char *name = sourceName->capacity >= 16
        ? sourceName->data.pointer
        : sourceName->data.buffer;

    throw Exception(format(castFormat, name, destination));
}
