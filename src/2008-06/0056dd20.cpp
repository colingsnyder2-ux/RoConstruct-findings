// from server: 100% by colin
// roc 2008-06 0056dd20  unit: G3D::VColor3::?$holder  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056dd20
//
// 0056dd20  64a100000000         mov eax, dword ptr fs:[0]
// 0056dd26  6aff                 push -1
// 0056dd28  68b9fe7c00           push 0x7cfeb9
// 0056dd2d  50                   push eax
// 0056dd2e  64892500000000       mov dword ptr fs:[0], esp
// 0056dd35  83ec48               sub esp, 0x48
// 0056dd38  53                   push ebx
// 0056dd39  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056dd3f  56                   push esi
// 0056dd40  57                   push edi
// 0056dd41  8bf9                 mov edi, ecx
// 0056dd43  8d7704               lea esi, [edi + 4]
// 0056dd46  85f6                 test esi, esi
// 0056dd48  7428                 je 0x56dd72
// 0056dd4a  8b0e                 mov ecx, dword ptr [esi]
// 0056dd4c  85c9                 test ecx, ecx
// 0056dd4e  7409                 je 0x56dd59
// 0056dd50  8b01                 mov eax, dword ptr [ecx]
// 0056dd52  8b5004               mov edx, dword ptr [eax + 4]
// 0056dd55  ffd2                 call edx
// 0056dd57  eb05                 jmp 0x56dd5e
// 0056dd59  b814969200           mov eax, 0x929614
// 0056dd5e  6898539300           push 0x935398
// 0056dd63  8bc8                 mov ecx, eax
// 0056dd65  ffd3                 call ebx
// 0056dd67  84c0                 test al, al
// 0056dd69  7407                 je 0x56dd72
// 0056dd6b  8b06                 mov eax, dword ptr [esi]
// 0056dd6d  83c004               add eax, 4
// 0056dd70  7550                 jne 0x56ddc2
// 0056dd72  8b07                 mov eax, dword ptr [edi]
// 0056dd74  8b4008               mov eax, dword ptr [eax + 8]
// 0056dd77  50                   push eax
// 0056dd78  b9f8be9200           mov ecx, 0x92bef8
// 0056dd7d  ffd3                 call ebx
// 0056dd7f  84c0                 test al, al
// 0056dd81  7451                 je 0x56ddd4
// 0056dd83  8d4c240c             lea ecx, [esp + 0xc]
// 0056dd87  51                   push ecx
// 0056dd88  56                   push esi
// 0056dd89  c7442414c2000000     mov dword ptr [esp + 0x14], 0xc2
// 0056dd91  e8fa7eeaff           call 0x415c90
// 0056dd96  83c404               add esp, 4
// 0056dd99  50                   push eax
// 0056dd9a  e801130500           call 0x5bf0a0
// 0056dd9f  83c408               add esp, 8
// 0056dda2  84c0                 test al, al
// 0056dda4  742e                 je 0x56ddd4
// 0056dda6  8d54240c             lea edx, [esp + 0xc]
// 0056ddaa  52                   push edx
// 0056ddab  8bce                 mov ecx, esi
// 0056ddad  e8ded7f1ff           call 0x48b590
// 0056ddb2  e869f3ffff           call 0x56d120
// 0056ddb7  56                   push esi
// 0056ddb8  8907                 mov dword ptr [edi], eax
// 0056ddba  e811eaffff           call 0x56c7d0
// 0056ddbf  83c404               add esp, 4
// 0056ddc2  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0056ddc6  5f                   pop edi
// 0056ddc7  5e                   pop esi
// 0056ddc8  5b                   pop ebx
// 0056ddc9  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ddd0  83c454               add esp, 0x54
// 0056ddd3  c3                   ret 
// 0056ddd4  e847f3ffff           call 0x56d120
// 0056ddd9  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056dddc  ba10000000           mov edx, 0x10
// 0056dde1  39501c               cmp dword ptr [eax + 0x1c], edx
// 0056dde4  7205                 jb 0x56ddeb
// 0056dde6  8b4808               mov ecx, dword ptr [eax + 8]
// 0056dde9  eb03                 jmp 0x56ddee
// 0056ddeb  8d4808               lea ecx, [eax + 8]
// 0056ddee  8b07                 mov eax, dword ptr [edi]
// 0056ddf0  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056ddf3  83c004               add eax, 4
// 0056ddf6  395018               cmp dword ptr [eax + 0x18], edx
// 0056ddf9  7205                 jb 0x56de00
// 0056ddfb  8b4004               mov eax, dword ptr [eax + 4]
// 0056ddfe  eb03                 jmp 0x56de03
// 0056de00  83c004               add eax, 4
// 0056de03  51                   push ecx
// 0056de04  50                   push eax
// 0056de05  8d4c2418             lea ecx, [esp + 0x18]
// 0056de09  681cf78200           push 0x82f71c
// 0056de0e  51                   push ecx
// 0056de0f  e8fcbcf9ff           call 0x509b10
// 0056de14  83c410               add esp, 0x10
// 0056de17  50                   push eax
// 0056de18  8d4c2430             lea ecx, [esp + 0x30]
// 0056de1c  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0056de24  e827bfe9ff           call 0x409d50
// 0056de29  68c81b8d00           push 0x8d1bc8
// 0056de2e  8d542430             lea edx, [esp + 0x30]
// 0056de32  52                   push edx
// 0056de33  e854371300           call 0x6a158c

namespace std {
    struct type_info;
}

extern bool (__thiscall *typeEqual)(
    const std::type_info*, const std::type_info&);

extern const std::type_info emptyType;
extern const std::type_info colorType;
extern const std::type_info stringType;

struct String {
    unsigned int proxy;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
};

struct TypeName {
    unsigned int reserved;
    String text;
};

struct Descriptor {
    unsigned int reserved[2];
    const std::type_info* type;
    TypeName* name;
};

struct Placeholder {
    virtual ~Placeholder();
    virtual const std::type_info& type() const;
};

struct Any {
    Placeholder* content;
    void assign(const int&);
};

struct RuntimeError {
    virtual ~RuntimeError();
    char* message;
    bool owns;
    String text;

    RuntimeError(const String&);
    RuntimeError(const RuntimeError&);
};

extern int* __cdecl extractString(Any*);
extern bool __cdecl parseColor(const int*, int*);
extern Descriptor* __cdecl colorDescriptor();
extern void __cdecl finalizeColor(Any*);
extern String __cdecl format(const char*, ...);

struct Value {
    Descriptor* descriptor;
    Any value;

    void convert();
};

void Value::convert()
{
    bool (__thiscall *equal)(
        const std::type_info*, const std::type_info&) = typeEqual;

    Any* object = &value;
    if (object) {
        const std::type_info& source =
            object->content ? object->content->type() : emptyType;
        if (equal(&source, colorType)) {
            int* color = reinterpret_cast<int*>(
                reinterpret_cast<char*>(object->content) + 4);
            if (color)
                return;
        }
    }

    Descriptor* d = descriptor;
    const std::type_info* destType = d->type;
    if (equal(&stringType, *destType)) {
        int color = 194;
        int* colorPtr = &color;
        if (parseColor(extractString(object), colorPtr)) {
            object->assign(color);
            descriptor = colorDescriptor();
            finalizeColor(object);
            return;
        }
    }

    const TypeName* target = colorDescriptor()->name;
    const char* targetName =
        target->text.capacity >= 16
            ? target->text.storage.pointer
            : target->text.storage.buffer;

    const String* source = &descriptor->name->text;
    const char* sourceName =
        source->capacity >= 16
            ? source->storage.pointer
            : source->storage.buffer;

    throw RuntimeError(format("Unable to cast %s to %s",
                              sourceName, targetName));
}
