// from server: 97% by colin
// roc 2008-06 0056dae0  unit: G3D::VColor3::?$holder  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056dae0
//
// 0056dae0  64a100000000         mov eax, dword ptr fs:[0]
// 0056dae6  6aff                 push -1
// 0056dae8  68b9fe7c00           push 0x7cfeb9
// 0056daed  50                   push eax
// 0056daee  64892500000000       mov dword ptr fs:[0], esp
// 0056daf5  83ec48               sub esp, 0x48
// 0056daf8  53                   push ebx
// 0056daf9  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056daff  56                   push esi
// 0056db00  57                   push edi
// 0056db01  8bf9                 mov edi, ecx
// 0056db03  8d7704               lea esi, [edi + 4]
// 0056db06  85f6                 test esi, esi
// 0056db08  7428                 je 0x56db32
// 0056db0a  8b0e                 mov ecx, dword ptr [esi]
// 0056db0c  85c9                 test ecx, ecx
// 0056db0e  7409                 je 0x56db19
// 0056db10  8b01                 mov eax, dword ptr [ecx]
// 0056db12  8b5004               mov edx, dword ptr [eax + 4]
// 0056db15  ffd2                 call edx
// 0056db17  eb05                 jmp 0x56db1e
// 0056db19  b814969200           mov eax, 0x929614
// 0056db1e  6834109300           push 0x931034
// 0056db23  8bc8                 mov ecx, eax
// 0056db25  ffd3                 call ebx
// 0056db27  84c0                 test al, al
// 0056db29  7407                 je 0x56db32
// 0056db2b  8b06                 mov eax, dword ptr [esi]
// 0056db2d  83c004               add eax, 4
// 0056db30  7556                 jne 0x56db88
// 0056db32  8b07                 mov eax, dword ptr [edi]
// 0056db34  8b4008               mov eax, dword ptr [eax + 8]
// 0056db37  50                   push eax
// 0056db38  b9f8be9200           mov ecx, 0x92bef8
// 0056db3d  ffd3                 call ebx
// 0056db3f  84c0                 test al, al
// 0056db41  7457                 je 0x56db9a
// 0056db43  8d44240c             lea eax, [esp + 0xc]
// 0056db47  50                   push eax
// 0056db48  33c9                 xor ecx, ecx
// 0056db4a  33d2                 xor edx, edx
// 0056db4c  56                   push esi
// 0056db4d  66894c2414           mov word ptr [esp + 0x14], cx
// 0056db52  6689542416           mov word ptr [esp + 0x16], dx
// 0056db57  e83481eaff           call 0x415c90
// 0056db5c  83c404               add esp, 4
// 0056db5f  50                   push eax
// 0056db60  e8eb0d0500           call 0x5be950
// 0056db65  83c408               add esp, 8
// 0056db68  84c0                 test al, al
// 0056db6a  742e                 je 0x56db9a
// 0056db6c  8d4c240c             lea ecx, [esp + 0xc]
// 0056db70  51                   push ecx
// 0056db71  8bce                 mov ecx, esi
// 0056db73  e8d87dedff           call 0x445950
// 0056db78  e853f3ffff           call 0x56ced0
// 0056db7d  56                   push esi
// 0056db7e  8907                 mov dword ptr [edi], eax
// 0056db80  e8cbebffff           call 0x56c750
// 0056db85  83c404               add esp, 4
// 0056db88  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0056db8c  5f                   pop edi
// 0056db8d  5e                   pop esi
// 0056db8e  5b                   pop ebx
// 0056db8f  64890d00000000       mov dword ptr fs:[0], ecx
// 0056db96  83c454               add esp, 0x54
// 0056db99  c3                   ret 
// 0056db9a  e831f3ffff           call 0x56ced0
// 0056db9f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056dba2  ba10000000           mov edx, 0x10
// 0056dba7  39501c               cmp dword ptr [eax + 0x1c], edx
// 0056dbaa  7205                 jb 0x56dbb1
// 0056dbac  8b4808               mov ecx, dword ptr [eax + 8]
// 0056dbaf  eb03                 jmp 0x56dbb4
// 0056dbb1  8d4808               lea ecx, [eax + 8]
// 0056dbb4  8b07                 mov eax, dword ptr [edi]
// 0056dbb6  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056dbb9  83c004               add eax, 4
// 0056dbbc  395018               cmp dword ptr [eax + 0x18], edx
// 0056dbbf  7205                 jb 0x56dbc6
// 0056dbc1  8b4004               mov eax, dword ptr [eax + 4]
// 0056dbc4  eb03                 jmp 0x56dbc9
// 0056dbc6  83c004               add eax, 4
// 0056dbc9  51                   push ecx
// 0056dbca  50                   push eax
// 0056dbcb  8d4c2418             lea ecx, [esp + 0x18]
// 0056dbcf  681cf78200           push 0x82f71c
// 0056dbd4  51                   push ecx
// 0056dbd5  e836bff9ff           call 0x509b10
// 0056dbda  83c410               add esp, 0x10
// 0056dbdd  50                   push eax
// 0056dbde  8d4c2430             lea ecx, [esp + 0x30]
// 0056dbe2  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0056dbea  e861c1e9ff           call 0x409d50
// 0056dbef  68c81b8d00           push 0x8d1bc8
// 0056dbf4  8d542430             lea edx, [esp + 0x30]
// 0056dbf8  52                   push edx
// 0056dbf9  e88e391300           call 0x6a158c

struct TypeInfo {};

extern bool (__thiscall * const typeEqual)(const TypeInfo *, const TypeInfo &);

struct String {
    unsigned char allocator;
    char padding[3];
    union {
        char buffer[16];
        char *pointer;
    } data;
    unsigned length;
    unsigned capacity;
    ~String();
};

struct TypeName {
    unsigned reserved;
    String text;
};

struct Type {
    unsigned reserved[2];
    const TypeInfo *info;
    TypeName *name;
};

struct Vector {
    short x;
    short y;
};

struct Placeholder {
    virtual void destroy() = 0;
    virtual const TypeInfo &type() const = 0;
};

struct Any {
    Placeholder *content;
    void assign(const Vector &);
};

struct Exception {
    unsigned char storage[40];
    Exception(const String &);
    Exception(const Exception &);
    ~Exception();
};

extern const TypeInfo emptyType;
extern const TypeInfo vectorType;
extern const TypeInfo stringType;

extern const Type &singleton();
extern const String *getString(const Any *);
extern bool parseVector(const String *, Vector *);
extern Vector *getVector(const Any *);
extern String format(const char *, ...);

struct S {
    const Type *type;
    Any value;
    Vector *f();
};

Vector *S::f()
{
    bool (__thiscall *equal)(const TypeInfo *, const TypeInfo &) = typeEqual;
    Any *p = &value;
    if (p) {
        const TypeInfo &actual =
            p->content ? p->content->type() : emptyType;
        if (equal(&actual, vectorType)) {
            Vector *result = reinterpret_cast<Vector *>(p->content + 1);
            if (result)
                return result;
        }
    }

    const Type *t = type;
    const TypeInfo *info = t->info;
    if (equal(&stringType, *info)) {
        Vector result;
        result.x = 0;
        result.y = 0;
        if (parseVector(getString(p), &result)) {
            p->assign(result);
            type = &singleton();
            return getVector(p);
        }
    }

    TypeName *target = singleton().name;
    const char *targetName =
        target->text.capacity >= 16
        ? target->text.data.pointer : target->text.data.buffer;

    String *source = &type->name->text;
    const char *sourceName =
        source->capacity >= 16 ? source->data.pointer : source->data.buffer;

    throw Exception(format("Unable to cast %s to %s", sourceName, targetName));
}
