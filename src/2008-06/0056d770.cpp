// from server: 100% by colin
// roc 2008-06 0056d770  unit: G3D::VColor3::?$holder  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d770
//
// 0056d770  64a100000000         mov eax, dword ptr fs:[0]
// 0056d776  6aff                 push -1
// 0056d778  68b9fe7c00           push 0x7cfeb9
// 0056d77d  50                   push eax
// 0056d77e  64892500000000       mov dword ptr fs:[0], esp
// 0056d785  83ec4c               sub esp, 0x4c
// 0056d788  53                   push ebx
// 0056d789  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056d78f  56                   push esi
// 0056d790  57                   push edi
// 0056d791  8bf9                 mov edi, ecx
// 0056d793  8d7704               lea esi, [edi + 4]
// 0056d796  85f6                 test esi, esi
// 0056d798  7428                 je 0x56d7c2
// 0056d79a  8b0e                 mov ecx, dword ptr [esi]
// 0056d79c  85c9                 test ecx, ecx
// 0056d79e  7409                 je 0x56d7a9
// 0056d7a0  8b01                 mov eax, dword ptr [ecx]
// 0056d7a2  8b5004               mov edx, dword ptr [eax + 4]
// 0056d7a5  ffd2                 call edx
// 0056d7a7  eb05                 jmp 0x56d7ae
// 0056d7a9  b814969200           mov eax, 0x929614
// 0056d7ae  68e8be9200           push 0x92bee8
// 0056d7b3  8bc8                 mov ecx, eax
// 0056d7b5  ffd3                 call ebx
// 0056d7b7  84c0                 test al, al
// 0056d7b9  7407                 je 0x56d7c2
// 0056d7bb  8b06                 mov eax, dword ptr [esi]
// 0056d7bd  83c008               add eax, 8
// 0056d7c0  7548                 jne 0x56d80a
// 0056d7c2  8b07                 mov eax, dword ptr [edi]
// 0056d7c4  8b4008               mov eax, dword ptr [eax + 8]
// 0056d7c7  50                   push eax
// 0056d7c8  b9f8be9200           mov ecx, 0x92bef8
// 0056d7cd  ffd3                 call ebx
// 0056d7cf  84c0                 test al, al
// 0056d7d1  7449                 je 0x56d81c
// 0056d7d3  8d4c240c             lea ecx, [esp + 0xc]
// 0056d7d7  51                   push ecx
// 0056d7d8  56                   push esi
// 0056d7d9  e8b284eaff           call 0x415c90
// 0056d7de  83c404               add esp, 4
// 0056d7e1  50                   push eax
// 0056d7e2  e8990e0500           call 0x5be680
// 0056d7e7  83c408               add esp, 8
// 0056d7ea  84c0                 test al, al
// 0056d7ec  742e                 je 0x56d81c
// 0056d7ee  8d54240c             lea edx, [esp + 0xc]
// 0056d7f2  52                   push edx
// 0056d7f3  8bce                 mov ecx, esi
// 0056d7f5  e81667ffff           call 0x563f10
// 0056d7fa  e811f5ffff           call 0x56cd10
// 0056d7ff  56                   push esi
// 0056d800  8907                 mov dword ptr [edi], eax
// 0056d802  e84984eaff           call 0x415c50
// 0056d807  83c404               add esp, 4
// 0056d80a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0056d80e  5f                   pop edi
// 0056d80f  5e                   pop esi
// 0056d810  5b                   pop ebx
// 0056d811  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d818  83c458               add esp, 0x58
// 0056d81b  c3                   ret 
// 0056d81c  e8eff4ffff           call 0x56cd10
// 0056d821  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d824  ba10000000           mov edx, 0x10
// 0056d829  39501c               cmp dword ptr [eax + 0x1c], edx
// 0056d82c  7205                 jb 0x56d833
// 0056d82e  8b4808               mov ecx, dword ptr [eax + 8]
// 0056d831  eb03                 jmp 0x56d836
// 0056d833  8d4808               lea ecx, [eax + 8]
// 0056d836  8b07                 mov eax, dword ptr [edi]
// 0056d838  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d83b  83c004               add eax, 4
// 0056d83e  395018               cmp dword ptr [eax + 0x18], edx
// 0056d841  7205                 jb 0x56d848
// 0056d843  8b4004               mov eax, dword ptr [eax + 4]
// 0056d846  eb03                 jmp 0x56d84b
// 0056d848  83c004               add eax, 4
// 0056d84b  51                   push ecx
// 0056d84c  50                   push eax
// 0056d84d  8d4c241c             lea ecx, [esp + 0x1c]
// 0056d851  681cf78200           push 0x82f71c
// 0056d856  51                   push ecx
// 0056d857  e8b4c2f9ff           call 0x509b10
// 0056d85c  83c410               add esp, 0x10
// 0056d85f  50                   push eax
// 0056d860  8d4c2434             lea ecx, [esp + 0x34]
// 0056d864  c744246400000000     mov dword ptr [esp + 0x64], 0
// 0056d86c  e8dfc4e9ff           call 0x409d50
// 0056d871  68c81b8d00           push 0x8d1bc8
// 0056d876  8d542434             lea edx, [esp + 0x34]
// 0056d87a  52                   push edx
// 0056d87b  e80c3d1300           call 0x6a158c

struct TypeInfo {};

extern bool (__thiscall *typeEqual)(const TypeInfo *, const TypeInfo &);
extern const TypeInfo emptyType;
extern const TypeInfo integerType;
extern const TypeInfo stringType;

struct String {
    unsigned allocator;
    union {
        char local[16];
        char *pointer;
    } storage;
    unsigned length;
    unsigned capacity;

    ~String();
};

struct TypeName {
    unsigned prefix;
    String text;
};

struct Type {
    unsigned reserved[2];
    const TypeInfo *info;
    TypeName *name;
};

struct Placeholder {
    virtual void destroy();
    virtual const TypeInfo &type() const;
};

struct Any {
    Placeholder *content;
    void assign(const double *);
};

struct CastError {
    unsigned storage[10];
    CastError(const String &);
    CastError(const CastError &);
};

extern Type *__cdecl integerDescriptor();
extern String *__cdecl stringCast(Any *);
extern int *__cdecl integerCast(Any *);
extern bool __cdecl parseInteger(const String *, double *);
extern String __cdecl formatMessage(const char *, const char *, const char *);

struct Value {
    Type *descriptor;
    Any value;
    int *convert();
};

int *Value::convert()
{
    bool (__thiscall *equal)(const TypeInfo *, const TypeInfo &) = typeEqual;
    Any *source = &value;
    if (source) {
        const TypeInfo &info =
            source->content ? source->content->type() : emptyType;
        if (equal(&info, integerType)) {
            int *result = reinterpret_cast<int *>(
                reinterpret_cast<char *>(source->content) + 8);
            if (result)
                return result;
        }
    }

    const TypeInfo *descriptorInfo = descriptor->info;
    if (equal(&stringType, *descriptorInfo)) {
        double converted;
        if (parseInteger(stringCast(source), &converted)) {
            source->assign(&converted);
            descriptor = integerDescriptor();
            return integerCast(source);
        }
    }

    TypeName *destinationName = integerDescriptor()->name;
    const char *destination =
        destinationName->text.capacity >= 16
            ? destinationName->text.storage.pointer
            : destinationName->text.storage.local;

    String *sourceName = &descriptor->name->text;
    const char *origin =
        sourceName->capacity >= 16
            ? sourceName->storage.pointer
            : sourceName->storage.local;

    throw CastError(formatMessage("Unable to cast %s to %s",
                                  origin, destination));
}
