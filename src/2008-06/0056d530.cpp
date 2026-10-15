// from server: 99% by colin
// roc 2008-06 0056d530  unit: G3D::VColor3::?$holder  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d530
//
// 0056d530  64a100000000         mov eax, dword ptr fs:[0]
// 0056d536  6aff                 push -1
// 0056d538  68b9fe7c00           push 0x7cfeb9
// 0056d53d  50                   push eax
// 0056d53e  64892500000000       mov dword ptr fs:[0], esp
// 0056d545  83ec48               sub esp, 0x48
// 0056d548  53                   push ebx
// 0056d549  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056d54f  56                   push esi
// 0056d550  57                   push edi
// 0056d551  8bf9                 mov edi, ecx
// 0056d553  8d7704               lea esi, [edi + 4]
// 0056d556  85f6                 test esi, esi
// 0056d558  7428                 je 0x56d582
// 0056d55a  8b0e                 mov ecx, dword ptr [esi]
// 0056d55c  85c9                 test ecx, ecx
// 0056d55e  7409                 je 0x56d569
// 0056d560  8b01                 mov eax, dword ptr [ecx]
// 0056d562  8b5004               mov edx, dword ptr [eax + 4]
// 0056d565  ffd2                 call edx
// 0056d567  eb05                 jmp 0x56d56e
// 0056d569  b814969200           mov eax, 0x929614
// 0056d56e  6844969200           push 0x929644
// 0056d573  8bc8                 mov ecx, eax
// 0056d575  ffd3                 call ebx
// 0056d577  84c0                 test al, al
// 0056d579  7407                 je 0x56d582
// 0056d57b  8b06                 mov eax, dword ptr [esi]
// 0056d57d  83c004               add eax, 4
// 0056d580  7548                 jne 0x56d5ca
// 0056d582  8b07                 mov eax, dword ptr [edi]
// 0056d584  8b4008               mov eax, dword ptr [eax + 8]
// 0056d587  50                   push eax
// 0056d588  b9f8be9200           mov ecx, 0x92bef8
// 0056d58d  ffd3                 call ebx
// 0056d58f  84c0                 test al, al
// 0056d591  7449                 je 0x56d5dc
// 0056d593  8d4c240f             lea ecx, [esp + 0xf]
// 0056d597  51                   push ecx
// 0056d598  56                   push esi
// 0056d599  e8f286eaff           call 0x415c90
// 0056d59e  83c404               add esp, 4
// 0056d5a1  50                   push eax
// 0056d5a2  e8b9080500           call 0x5bde60
// 0056d5a7  83c408               add esp, 8
// 0056d5aa  84c0                 test al, al
// 0056d5ac  742e                 je 0x56d5dc
// 0056d5ae  8d54240f             lea edx, [esp + 0xf]
// 0056d5b2  52                   push edx
// 0056d5b3  8bce                 mov ecx, esi
// 0056d5b5  e866cee9ff           call 0x40a420
// 0056d5ba  e871f6ffff           call 0x56cc30
// 0056d5bf  56                   push esi
// 0056d5c0  8907                 mov dword ptr [edi], eax
// 0056d5c2  e80986eaff           call 0x415bd0
// 0056d5c7  83c404               add esp, 4
// 0056d5ca  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0056d5ce  5f                   pop edi
// 0056d5cf  5e                   pop esi
// 0056d5d0  5b                   pop ebx
// 0056d5d1  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d5d8  83c454               add esp, 0x54
// 0056d5db  c3                   ret 
// 0056d5dc  e84ff6ffff           call 0x56cc30
// 0056d5e1  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d5e4  ba10000000           mov edx, 0x10
// 0056d5e9  39501c               cmp dword ptr [eax + 0x1c], edx
// 0056d5ec  7205                 jb 0x56d5f3
// 0056d5ee  8b4808               mov ecx, dword ptr [eax + 8]
// 0056d5f1  eb03                 jmp 0x56d5f6
// 0056d5f3  8d4808               lea ecx, [eax + 8]
// 0056d5f6  8b07                 mov eax, dword ptr [edi]
// 0056d5f8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d5fb  83c004               add eax, 4
// 0056d5fe  395018               cmp dword ptr [eax + 0x18], edx
// 0056d601  7205                 jb 0x56d608
// 0056d603  8b4004               mov eax, dword ptr [eax + 4]
// 0056d606  eb03                 jmp 0x56d60b
// 0056d608  83c004               add eax, 4
// 0056d60b  51                   push ecx
// 0056d60c  50                   push eax
// 0056d60d  8d4c2418             lea ecx, [esp + 0x18]
// 0056d611  681cf78200           push 0x82f71c
// 0056d616  51                   push ecx
// 0056d617  e8f4c4f9ff           call 0x509b10
// 0056d61c  83c410               add esp, 0x10
// 0056d61f  50                   push eax
// 0056d620  8d4c2430             lea ecx, [esp + 0x30]
// 0056d624  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0056d62c  e81fc7e9ff           call 0x409d50
// 0056d631  68c81b8d00           push 0x8d1bc8
// 0056d636  8d542430             lea edx, [esp + 0x30]
// 0056d63a  52                   push edx
// 0056d63b  e84c3f1300           call 0x6a158c

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
