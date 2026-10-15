// from server: 100% by colin
// roc 2008-06 0056dc00  unit: G3D::VColor3::?$holder  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056dc00
//
// 0056dc00  64a100000000         mov eax, dword ptr fs:[0]
// 0056dc06  6aff                 push -1
// 0056dc08  68b9fe7c00           push 0x7cfeb9
// 0056dc0d  50                   push eax
// 0056dc0e  64892500000000       mov dword ptr fs:[0], esp
// 0056dc15  83ec50               sub esp, 0x50
// 0056dc18  53                   push ebx
// 0056dc19  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056dc1f  56                   push esi
// 0056dc20  57                   push edi
// 0056dc21  8bf9                 mov edi, ecx
// 0056dc23  8d7704               lea esi, [edi + 4]
// 0056dc26  85f6                 test esi, esi
// 0056dc28  7428                 je 0x56dc52
// 0056dc2a  8b0e                 mov ecx, dword ptr [esi]
// 0056dc2c  85c9                 test ecx, ecx
// 0056dc2e  7409                 je 0x56dc39
// 0056dc30  8b01                 mov eax, dword ptr [ecx]
// 0056dc32  8b5004               mov edx, dword ptr [eax + 4]
// 0056dc35  ffd2                 call edx
// 0056dc37  eb05                 jmp 0x56dc3e
// 0056dc39  b814969200           mov eax, 0x929614
// 0056dc3e  68a4639400           push 0x9463a4
// 0056dc43  8bc8                 mov ecx, eax
// 0056dc45  ffd3                 call ebx
// 0056dc47  84c0                 test al, al
// 0056dc49  7407                 je 0x56dc52
// 0056dc4b  8b06                 mov eax, dword ptr [esi]
// 0056dc4d  83c004               add eax, 4
// 0056dc50  7548                 jne 0x56dc9a
// 0056dc52  8b07                 mov eax, dword ptr [edi]
// 0056dc54  8b4008               mov eax, dword ptr [eax + 8]
// 0056dc57  50                   push eax
// 0056dc58  b9f8be9200           mov ecx, 0x92bef8
// 0056dc5d  ffd3                 call ebx
// 0056dc5f  84c0                 test al, al
// 0056dc61  7449                 je 0x56dcac
// 0056dc63  8d4c240c             lea ecx, [esp + 0xc]
// 0056dc67  51                   push ecx
// 0056dc68  56                   push esi
// 0056dc69  e82280eaff           call 0x415c90
// 0056dc6e  83c404               add esp, 4
// 0056dc71  50                   push eax
// 0056dc72  e8d9100500           call 0x5bed50
// 0056dc77  83c408               add esp, 8
// 0056dc7a  84c0                 test al, al
// 0056dc7c  742e                 je 0x56dcac
// 0056dc7e  8d54240c             lea edx, [esp + 0xc]
// 0056dc82  52                   push edx
// 0056dc83  8bce                 mov ecx, esi
// 0056dc85  e8d6f5ffff           call 0x56d260
// 0056dc8a  e8b1f2ffff           call 0x56cf40
// 0056dc8f  56                   push esi
// 0056dc90  8907                 mov dword ptr [edi], eax
// 0056dc92  e8f9eaffff           call 0x56c790
// 0056dc97  83c404               add esp, 4
// 0056dc9a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0056dc9e  5f                   pop edi
// 0056dc9f  5e                   pop esi
// 0056dca0  5b                   pop ebx
// 0056dca1  64890d00000000       mov dword ptr fs:[0], ecx
// 0056dca8  83c45c               add esp, 0x5c
// 0056dcab  c3                   ret 
// 0056dcac  e88ff2ffff           call 0x56cf40
// 0056dcb1  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056dcb4  ba10000000           mov edx, 0x10
// 0056dcb9  39501c               cmp dword ptr [eax + 0x1c], edx
// 0056dcbc  7205                 jb 0x56dcc3
// 0056dcbe  8b4808               mov ecx, dword ptr [eax + 8]
// 0056dcc1  eb03                 jmp 0x56dcc6
// 0056dcc3  8d4808               lea ecx, [eax + 8]
// 0056dcc6  8b07                 mov eax, dword ptr [edi]
// 0056dcc8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056dccb  83c004               add eax, 4
// 0056dcce  395018               cmp dword ptr [eax + 0x18], edx
// 0056dcd1  7205                 jb 0x56dcd8
// 0056dcd3  8b4004               mov eax, dword ptr [eax + 4]
// 0056dcd6  eb03                 jmp 0x56dcdb
// 0056dcd8  83c004               add eax, 4
// 0056dcdb  51                   push ecx
// 0056dcdc  50                   push eax
// 0056dcdd  8d4c2420             lea ecx, [esp + 0x20]
// 0056dce1  681cf78200           push 0x82f71c
// 0056dce6  51                   push ecx
// 0056dce7  e824bef9ff           call 0x509b10
// 0056dcec  83c410               add esp, 0x10
// 0056dcef  50                   push eax
// 0056dcf0  8d4c2438             lea ecx, [esp + 0x38]
// 0056dcf4  c744246800000000     mov dword ptr [esp + 0x68], 0
// 0056dcfc  e84fc0e9ff           call 0x409d50
// 0056dd01  68c81b8d00           push 0x8d1bc8
// 0056dd06  8d542438             lea edx, [esp + 0x38]
// 0056dd0a  52                   push edx
// 0056dd0b  e87c381300           call 0x6a158c

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
    void assign(const float (*)[3]);
};

struct CastError {
    unsigned storage[10];
    CastError(const String &);
    CastError(const CastError &);
};

extern Type *__cdecl integerDescriptor();
extern String *__cdecl stringCast(Any *);
extern int *__cdecl integerCast(Any *);
extern bool __cdecl parseInteger(const String *, float (*)[3]);
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
                reinterpret_cast<char *>(source->content) + 4);
            if (result)
                return result;
        }
    }

    const TypeInfo *descriptorInfo = descriptor->info;
    if (equal(&stringType, *descriptorInfo)) {
        float converted[3];
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
