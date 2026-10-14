// from server: 100% by colin
// roc 2008-06 0056d410  unit: G3D::VColor3::?$holder  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d410
//
// 0056d410  64a100000000         mov eax, dword ptr fs:[0]
// 0056d416  6aff                 push -1
// 0056d418  68b9fe7c00           push 0x7cfeb9
// 0056d41d  50                   push eax
// 0056d41e  64892500000000       mov dword ptr fs:[0], esp
// 0056d425  83ec48               sub esp, 0x48
// 0056d428  53                   push ebx
// 0056d429  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056d42f  56                   push esi
// 0056d430  57                   push edi
// 0056d431  8bf9                 mov edi, ecx
// 0056d433  8d7704               lea esi, [edi + 4]
// 0056d436  85f6                 test esi, esi
// 0056d438  7428                 je 0x56d462
// 0056d43a  8b0e                 mov ecx, dword ptr [esi]
// 0056d43c  85c9                 test ecx, ecx
// 0056d43e  7409                 je 0x56d449
// 0056d440  8b01                 mov eax, dword ptr [ecx]
// 0056d442  8b5004               mov edx, dword ptr [eax + 4]
// 0056d445  ffd2                 call edx
// 0056d447  eb05                 jmp 0x56d44e
// 0056d449  b814969200           mov eax, 0x929614
// 0056d44e  68d0be9200           push 0x92bed0
// 0056d453  8bc8                 mov ecx, eax
// 0056d455  ffd3                 call ebx
// 0056d457  84c0                 test al, al
// 0056d459  7407                 je 0x56d462
// 0056d45b  8b06                 mov eax, dword ptr [esi]
// 0056d45d  83c004               add eax, 4
// 0056d460  7548                 jne 0x56d4aa
// 0056d462  8b07                 mov eax, dword ptr [edi]
// 0056d464  8b4008               mov eax, dword ptr [eax + 8]
// 0056d467  50                   push eax
// 0056d468  b9f8be9200           mov ecx, 0x92bef8
// 0056d46d  ffd3                 call ebx
// 0056d46f  84c0                 test al, al
// 0056d471  7449                 je 0x56d4bc
// 0056d473  8d4c240c             lea ecx, [esp + 0xc]
// 0056d477  51                   push ecx
// 0056d478  56                   push esi
// 0056d479  e81288eaff           call 0x415c90
// 0056d47e  83c404               add esp, 4
// 0056d481  50                   push eax
// 0056d482  e819110500           call 0x5be5a0
// 0056d487  83c408               add esp, 8
// 0056d48a  84c0                 test al, al
// 0056d48c  742e                 je 0x56d4bc
// 0056d48e  8d54240c             lea edx, [esp + 0xc]
// 0056d492  52                   push edx
// 0056d493  8bce                 mov ecx, esi
// 0056d495  e8865eedff           call 0x443320
// 0056d49a  e821f7ffff           call 0x56cbc0
// 0056d49f  56                   push esi
// 0056d4a0  8907                 mov dword ptr [edi], eax
// 0056d4a2  e8e986eaff           call 0x415b90
// 0056d4a7  83c404               add esp, 4
// 0056d4aa  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0056d4ae  5f                   pop edi
// 0056d4af  5e                   pop esi
// 0056d4b0  5b                   pop ebx
// 0056d4b1  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d4b8  83c454               add esp, 0x54
// 0056d4bb  c3                   ret 
// 0056d4bc  e8fff6ffff           call 0x56cbc0
// 0056d4c1  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d4c4  ba10000000           mov edx, 0x10
// 0056d4c9  39501c               cmp dword ptr [eax + 0x1c], edx
// 0056d4cc  7205                 jb 0x56d4d3
// 0056d4ce  8b4808               mov ecx, dword ptr [eax + 8]
// 0056d4d1  eb03                 jmp 0x56d4d6
// 0056d4d3  8d4808               lea ecx, [eax + 8]
// 0056d4d6  8b07                 mov eax, dword ptr [edi]
// 0056d4d8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d4db  83c004               add eax, 4
// 0056d4de  395018               cmp dword ptr [eax + 0x18], edx
// 0056d4e1  7205                 jb 0x56d4e8
// 0056d4e3  8b4004               mov eax, dword ptr [eax + 4]
// 0056d4e6  eb03                 jmp 0x56d4eb
// 0056d4e8  83c004               add eax, 4
// 0056d4eb  51                   push ecx
// 0056d4ec  50                   push eax
// 0056d4ed  8d4c2418             lea ecx, [esp + 0x18]
// 0056d4f1  681cf78200           push 0x82f71c
// 0056d4f6  51                   push ecx
// 0056d4f7  e814c6f9ff           call 0x509b10
// 0056d4fc  83c410               add esp, 0x10
// 0056d4ff  50                   push eax
// 0056d500  8d4c2430             lea ecx, [esp + 0x30]
// 0056d504  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0056d50c  e83fc8e9ff           call 0x409d50
// 0056d511  68c81b8d00           push 0x8d1bc8
// 0056d516  8d542430             lea edx, [esp + 0x30]
// 0056d51a  52                   push edx
// 0056d51b  e86c401300           call 0x6a158c

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
    void assign(const int *);
};

struct CastError {
    unsigned storage[10];
    CastError(const String &);
    CastError(const CastError &);
};

extern Type *__cdecl integerDescriptor();
extern String *__cdecl stringCast(Any *);
extern int *__cdecl integerCast(Any *);
extern bool __cdecl parseInteger(const String *, int *);
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
        int converted;
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
