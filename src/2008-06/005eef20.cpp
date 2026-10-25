// from server: 100% by colin
// roc 2008-06 005eef20  unit: RBX::$01::?$SurfaceDescriptor  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eef20
//
// 005eef20  64a100000000         mov eax, dword ptr fs:[0]
// 005eef26  6aff                 push -1
// 005eef28  68b9fe7c00           push 0x7cfeb9
// 005eef2d  50                   push eax
// 005eef2e  64892500000000       mov dword ptr fs:[0], esp
// 005eef35  83ec44               sub esp, 0x44
// 005eef38  53                   push ebx
// 005eef39  8b1d78288000         mov ebx, dword ptr [0x802878]
// 005eef3f  56                   push esi
// 005eef40  57                   push edi
// 005eef41  8bf9                 mov edi, ecx
// 005eef43  8d7704               lea esi, [edi + 4]
// 005eef46  85f6                 test esi, esi
// 005eef48  742c                 je 0x5eef76
// 005eef4a  8b0e                 mov ecx, dword ptr [esi]
// 005eef4c  85c9                 test ecx, ecx
// 005eef4e  7409                 je 0x5eef59
// 005eef50  8b01                 mov eax, dword ptr [ecx]
// 005eef52  8b5004               mov edx, dword ptr [eax + 4]
// 005eef55  ffd2                 call edx
// 005eef57  eb05                 jmp 0x5eef5e
// 005eef59  b814969200           mov eax, 0x929614
// 005eef5e  68005e9500           push 0x955e00
// 005eef63  8bc8                 mov ecx, eax
// 005eef65  ffd3                 call ebx
// 005eef67  84c0                 test al, al
// 005eef69  740b                 je 0x5eef76
// 005eef6b  8b06                 mov eax, dword ptr [esi]
// 005eef6d  83c004               add eax, 4
// 005eef70  0f8593000000         jne 0x5ef009
// 005eef76  8b07                 mov eax, dword ptr [edi]
// 005eef78  8b4008               mov eax, dword ptr [eax + 8]
// 005eef7b  50                   push eax
// 005eef7c  b9f8be9200           mov ecx, 0x92bef8
// 005eef81  ffd3                 call ebx
// 005eef83  84c0                 test al, al
// 005eef85  7409                 je 0x5eef90
// 005eef87  56                   push esi
// 005eef88  e8036de2ff           call 0x415c90
// 005eef8d  83c404               add esp, 4
// 005eef90  681cb19700           push 0x97b11c
// 005eef95  6820d65e00           push 0x5ed620
// 005eef9a  e89183f6ff           call 0x557330
// 005eef9f  83c408               add esp, 8
// 005eefa2  e819e6ffff           call 0x5ed5c0
// 005eefa7  8b400c               mov eax, dword ptr [eax + 0xc]
// 005eefaa  83c004               add eax, 4
// 005eefad  ba10000000           mov edx, 0x10
// 005eefb2  395018               cmp dword ptr [eax + 0x18], edx
// 005eefb5  7205                 jb 0x5eefbc
// 005eefb7  8b4804               mov ecx, dword ptr [eax + 4]
// 005eefba  eb03                 jmp 0x5eefbf
// 005eefbc  8d4804               lea ecx, [eax + 4]
// 005eefbf  8b07                 mov eax, dword ptr [edi]
// 005eefc1  8b400c               mov eax, dword ptr [eax + 0xc]
// 005eefc4  83c004               add eax, 4
// 005eefc7  395018               cmp dword ptr [eax + 0x18], edx
// 005eefca  7205                 jb 0x5eefd1
// 005eefcc  8b4004               mov eax, dword ptr [eax + 4]
// 005eefcf  eb03                 jmp 0x5eefd4
// 005eefd1  83c004               add eax, 4
// 005eefd4  51                   push ecx
// 005eefd5  50                   push eax
// 005eefd6  8d4c2414             lea ecx, [esp + 0x14]
// 005eefda  681cf78200           push 0x82f71c
// 005eefdf  51                   push ecx
// 005eefe0  e82babf1ff           call 0x509b10
// 005eefe5  83c410               add esp, 0x10
// 005eefe8  50                   push eax
// 005eefe9  8d4c242c             lea ecx, [esp + 0x2c]
// 005eefed  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 005eeff5  e856ade1ff           call 0x409d50
// 005eeffa  68c81b8d00           push 0x8d1bc8
// 005eefff  8d54242c             lea edx, [esp + 0x2c]
// 005ef003  52                   push edx
// 005ef004  e883250b00           call 0x6a158c
// 005ef009  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005ef00d  5f                   pop edi
// 005ef00e  5e                   pop esi
// 005ef00f  5b                   pop ebx
// 005ef010  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef017  83c450               add esp, 0x50
// 005ef01a  c3                   ret 

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
