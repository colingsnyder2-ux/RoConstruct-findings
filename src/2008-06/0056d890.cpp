// from server: 100% by colin
// roc 2008-06 0056d890  unit: G3D::VColor3::?$holder  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d890
//
// 0056d890  64a100000000         mov eax, dword ptr fs:[0]
// 0056d896  6aff                 push -1
// 0056d898  68b9fe7c00           push 0x7cfeb9
// 0056d89d  50                   push eax
// 0056d89e  64892500000000       mov dword ptr fs:[0], esp
// 0056d8a5  83ec50               sub esp, 0x50
// 0056d8a8  53                   push ebx
// 0056d8a9  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056d8af  56                   push esi
// 0056d8b0  57                   push edi
// 0056d8b1  8bf9                 mov edi, ecx
// 0056d8b3  8d7704               lea esi, [edi + 4]
// 0056d8b6  85f6                 test esi, esi
// 0056d8b8  7428                 je 0x56d8e2
// 0056d8ba  8b0e                 mov ecx, dword ptr [esi]
// 0056d8bc  85c9                 test ecx, ecx
// 0056d8be  7409                 je 0x56d8c9
// 0056d8c0  8b01                 mov eax, dword ptr [ecx]
// 0056d8c2  8b5004               mov edx, dword ptr [eax + 4]
// 0056d8c5  ffd2                 call edx
// 0056d8c7  eb05                 jmp 0x56d8ce
// 0056d8c9  b814969200           mov eax, 0x929614
// 0056d8ce  6864639400           push 0x946364
// 0056d8d3  8bc8                 mov ecx, eax
// 0056d8d5  ffd3                 call ebx
// 0056d8d7  84c0                 test al, al
// 0056d8d9  7407                 je 0x56d8e2
// 0056d8db  8b06                 mov eax, dword ptr [esi]
// 0056d8dd  83c004               add eax, 4
// 0056d8e0  7556                 jne 0x56d938
// 0056d8e2  8b07                 mov eax, dword ptr [edi]
// 0056d8e4  8b4008               mov eax, dword ptr [eax + 8]
// 0056d8e7  50                   push eax
// 0056d8e8  b9f8be9200           mov ecx, 0x92bef8
// 0056d8ed  ffd3                 call ebx
// 0056d8ef  84c0                 test al, al
// 0056d8f1  7457                 je 0x56d94a
// 0056d8f3  d9ee                 fldz 
// 0056d8f5  8d4c240c             lea ecx, [esp + 0xc]
// 0056d8f9  d954240c             fst dword ptr [esp + 0xc]
// 0056d8fd  51                   push ecx
// 0056d8fe  d9542414             fst dword ptr [esp + 0x14]
// 0056d902  56                   push esi
// 0056d903  d95c241c             fstp dword ptr [esp + 0x1c]
// 0056d907  e88483eaff           call 0x415c90
// 0056d90c  83c404               add esp, 4
// 0056d90f  50                   push eax
// 0056d910  e89b120500           call 0x5bebb0
// 0056d915  83c408               add esp, 8
// 0056d918  84c0                 test al, al
// 0056d91a  742e                 je 0x56d94a
// 0056d91c  8d54240c             lea edx, [esp + 0xc]
// 0056d920  52                   push edx
// 0056d921  8bce                 mov ecx, esi
// 0056d923  e8a8f8ffff           call 0x56d1d0
// 0056d928  e833f5ffff           call 0x56ce60
// 0056d92d  56                   push esi
// 0056d92e  8907                 mov dword ptr [edi], eax
// 0056d930  e89bedffff           call 0x56c6d0
// 0056d935  83c404               add esp, 4
// 0056d938  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0056d93c  5f                   pop edi
// 0056d93d  5e                   pop esi
// 0056d93e  5b                   pop ebx
// 0056d93f  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d946  83c45c               add esp, 0x5c
// 0056d949  c3                   ret 
// 0056d94a  e811f5ffff           call 0x56ce60
// 0056d94f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d952  ba10000000           mov edx, 0x10
// 0056d957  39501c               cmp dword ptr [eax + 0x1c], edx
// 0056d95a  7205                 jb 0x56d961
// 0056d95c  8b4808               mov ecx, dword ptr [eax + 8]
// 0056d95f  eb03                 jmp 0x56d964
// 0056d961  8d4808               lea ecx, [eax + 8]
// 0056d964  8b07                 mov eax, dword ptr [edi]
// 0056d966  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056d969  83c004               add eax, 4
// 0056d96c  395018               cmp dword ptr [eax + 0x18], edx
// 0056d96f  7205                 jb 0x56d976
// 0056d971  8b4004               mov eax, dword ptr [eax + 4]
// 0056d974  eb03                 jmp 0x56d979
// 0056d976  83c004               add eax, 4
// 0056d979  51                   push ecx
// 0056d97a  50                   push eax
// 0056d97b  8d4c2420             lea ecx, [esp + 0x20]
// 0056d97f  681cf78200           push 0x82f71c
// 0056d984  51                   push ecx
// 0056d985  e886c1f9ff           call 0x509b10
// 0056d98a  83c410               add esp, 0x10
// 0056d98d  50                   push eax
// 0056d98e  8d4c2438             lea ecx, [esp + 0x38]
// 0056d992  c744246800000000     mov dword ptr [esp + 0x68], 0
// 0056d99a  e8b1c3e9ff           call 0x409d50
// 0056d99f  68c81b8d00           push 0x8d1bc8
// 0056d9a4  8d542438             lea edx, [esp + 0x38]
// 0056d9a8  52                   push edx
// 0056d9a9  e8de3b1300           call 0x6a158c

class type_info;
extern bool (__thiscall *type_equal)(const type_info*, const type_info&);

extern const type_info void_type;
extern const type_info color_type;
extern const type_info string_type;

namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Allocator>
    class basic_string {
    public:
        unsigned int allocator_storage;
        union {
            T buffer[16];
            T* pointer;
        } storage;
        unsigned int length;
        unsigned int capacity;

        basic_string(const basic_string&);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception {
        char* message;
        int owns_message;

    public:
        exception(const exception&);
        virtual ~exception();
        virtual const char* what() const;
    };

    class runtime_error : public exception {
        string text;

    public:
        runtime_error(const string&);
        runtime_error(const runtime_error&);
        virtual ~runtime_error();
        virtual const char* what() const;
    };
}

struct Color {
    float x, y, z;
};

struct Placeholder {
    virtual ~Placeholder();
    virtual const type_info& type() const;
};

struct Any {
    Placeholder* content;
    void assign(const Color&);
};

struct Name {
    unsigned int reserved;
    std::string text;
};

struct Descriptor {
    unsigned int reserved[2];
    const type_info* type;
    Name* name;
};

extern Color* __cdecl extract(Any*);
extern bool __cdecl convert(const Color*, Color*);
extern Descriptor* __cdecl color_descriptor();
extern void __cdecl finish(Any*);
extern std::string __cdecl format(const char*, ...);

struct S {
    Descriptor* descriptor;
    Any value;

    void f();
};

void S::f()
{
    bool (__thiscall *equal)(const type_info*, const type_info&) = type_equal;
    Any* p = &value;
    if (p) {
        const type_info& t = p->content ? p->content->type() : void_type;
        if (equal(&t, color_type)) {
            if (reinterpret_cast<char*>(p->content) + 4)
                return;
        }
    }

    Descriptor* d = descriptor;
    const type_info* dst = d->type;
    if (equal(&string_type, *dst)) {
        Color color;
        color.x = 0.0f;
        color.y = 0.0f;
        color.z = 0.0f;
        if (convert(extract(p), &color)) {
            p->assign(color);
            descriptor = color_descriptor();
            finish(p);
            return;
        }
    }

    Name* destination = color_descriptor()->name;
    const char* destination_name =
        destination->text.capacity >= 16 ?
        destination->text.storage.pointer :
        destination->text.storage.buffer;
    const std::string& source = descriptor->name->text;
    const char* source_name =
        source.capacity >= 16 ? source.storage.pointer : source.storage.buffer;

    throw std::runtime_error(
        format("Unable to cast %s to %s", source_name, destination_name));
}
