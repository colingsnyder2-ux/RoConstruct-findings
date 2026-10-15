// from server: 100% by colin
// roc 2008-06 0056d650  unit: G3D::VColor3::?$holder  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d650
//
// 0056d650  64a100000000         mov eax, dword ptr fs:[0]
// 0056d656  6aff                 push -1
// 0056d658  68b9fe7c00           push 0x7cfeb9
// 0056d65d  50                   push eax
// 0056d65e  64892500000000       mov dword ptr fs:[0], esp
// 0056d665  83ec48               sub esp, 0x48
// 0056d668  53                   push ebx
// 0056d669  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056d66f  56                   push esi
// 0056d670  57                   push edi
// 0056d671  8bf9                 mov edi, ecx
// 0056d673  8d7704               lea esi, [edi + 4]
// 0056d676  85f6                 test esi, esi
// 0056d678  7428                 je 0x56d6a2
// 0056d67a  8b0e                 mov ecx, dword ptr [esi]
// 0056d67c  85c9                 test ecx, ecx
// 0056d67e  7409                 je 0x56d689
// 0056d680  8b01                 mov eax, dword ptr [ecx]
// 0056d682  8b5004               mov edx, dword ptr [eax + 4]
// 0056d685  ffd2                 call edx
// 0056d687  eb05                 jmp 0x56d68e
// 0056d689  b814969200           mov eax, 0x929614
// 0056d68e  68dcbe9200           push 0x92bedc
// 0056d693  8bc8                 mov ecx, eax
// 0056d695  ffd3                 call ebx
// 0056d697  84c0                 test al, al
// 0056d699  7407                 je 0x56d6a2
// 0056d69b  8b06                 mov eax, dword ptr [esi]
// 0056d69d  83c004               add eax, 4
// 0056d6a0  7548                 jne 0x56d6ea
// 0056d6a2  8b07                 mov eax, dword ptr [edi]
// 0056d6a4  8b4008               mov eax, dword ptr [eax + 8]
// 0056d6a7  50                   push eax
// 0056d6a8  b9f8be9200           mov ecx, 0x92bef8
// 0056d6ad  ffd3                 call ebx
// 0056d6af  84c0                 test al, al
// 0056d6b1  7449                 je 0x56d6fc
// 0056d6b3  8d4c240c             lea ecx, [esp + 0xc]
// 0056d6b7  51                   push ecx
// 0056d6b8  56                   push esi
// 0056d6b9  e8d285eaff           call 0x415c90
// 0056d6be  83c404               add esp, 4
// 0056d6c1  50                   push eax
// 0056d6c2  e8c9100500           call 0x5be790
// 0056d6c7  83c408               add esp, 8
// 0056d6ca  84c0                 test al, al
// 0056d6cc  742e                 je 0x56d6fc
// 0056d6ce  8d54240c             lea edx, [esp + 0xc]
// 0056d6d2  52                   push edx
// 0056d6d3  8bce                 mov ecx, esi
// 0056d6d5  e8c682edff           call 0x4459a0
// 0056d6da  e8c1f5ffff           call 0x56cca0
// 0056d6df  56                   push esi
// 0056d6e0  8907                 mov dword ptr [edi], eax
// 0056d6e2  e82985eaff           call 0x415c10
// 0056d6e7  83c404               add esp, 4
// 0056d6ea  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0056d6ee  5f                   pop edi
// 0056d6ef  5e                   pop esi
// 0056d6f0  5b                   pop ebx
// 0056d6f1  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d6f8  83c454               add esp, 0x54
// 0056d6fb  c3                   ret 
// 0056d6fc  e89ff5ffff           call 0x56cca0
// 0056d701  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d704  ba10000000           mov edx, 0x10
// 0056d709  39501c               cmp dword ptr [eax + 0x1c], edx
// 0056d70c  7205                 jb 0x56d713
// 0056d70e  8b4808               mov ecx, dword ptr [eax + 8]
// 0056d711  eb03                 jmp 0x56d716
// 0056d713  8d4808               lea ecx, [eax + 8]
// 0056d716  8b07                 mov eax, dword ptr [edi]
// 0056d718  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d71b  83c004               add eax, 4
// 0056d71e  395018               cmp dword ptr [eax + 0x18], edx
// 0056d721  7205                 jb 0x56d728
// 0056d723  8b4004               mov eax, dword ptr [eax + 4]
// 0056d726  eb03                 jmp 0x56d72b
// 0056d728  83c004               add eax, 4
// 0056d72b  51                   push ecx
// 0056d72c  50                   push eax
// 0056d72d  8d4c2418             lea ecx, [esp + 0x18]
// 0056d731  681cf78200           push 0x82f71c
// 0056d736  51                   push ecx
// 0056d737  e8d4c3f9ff           call 0x509b10
// 0056d73c  83c410               add esp, 0x10
// 0056d73f  50                   push eax
// 0056d740  8d4c2430             lea ecx, [esp + 0x30]
// 0056d744  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0056d74c  e8ffc5e9ff           call 0x409d50
// 0056d751  68c81b8d00           push 0x8d1bc8
// 0056d756  8d542430             lea edx, [esp + 0x30]
// 0056d75a  52                   push edx
// 0056d75b  e82c3e1300           call 0x6a158c

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
