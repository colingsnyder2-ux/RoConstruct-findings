// from server: 100% by colin
// roc 2008-06 0056eff0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056eff0
//
// 0056eff0  64a100000000         mov eax, dword ptr fs:[0]
// 0056eff6  6aff                 push -1
// 0056eff8  68118f7d00           push 0x7d8f11
// 0056effd  50                   push eax
// 0056effe  64892500000000       mov dword ptr fs:[0], esp
// 0056f005  83ec40               sub esp, 0x40
// 0056f008  57                   push edi
// 0056f009  8bf9                 mov edi, ecx
// 0056f00b  8b07                 mov eax, dword ptr [edi]
// 0056f00d  8b4008               mov eax, dword ptr [eax + 8]
// 0056f010  50                   push eax
// 0056f011  b9f8be9200           mov ecx, 0x92bef8
// 0056f016  ff1578288000         call dword ptr [0x802878]
// 0056f01c  84c0                 test al, al
// 0056f01e  7478                 je 0x56f098
// 0056f020  56                   push esi
// 0056f021  8d7704               lea esi, [edi + 4]
// 0056f024  8d4c240c             lea ecx, [esp + 0xc]
// 0056f028  56                   push esi
// 0056f029  51                   push ecx
// 0056f02a  e8e170eaff           call 0x416110
// 0056f02f  83c408               add esp, 8
// 0056f032  50                   push eax
// 0056f033  8d4c242c             lea ecx, [esp + 0x2c]
// 0056f037  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0056f03f  e8fc630a00           call 0x615440
// 0056f044  50                   push eax
// 0056f045  8d4c240c             lea ecx, [esp + 0xc]
// 0056f049  c644245401           mov byte ptr [esp + 0x54], 1
// 0056f04e  e85de2ffff           call 0x56d2b0
// 0056f053  3bc6                 cmp eax, esi
// 0056f055  7408                 je 0x56f05f
// 0056f057  8b16                 mov edx, dword ptr [esi]
// 0056f059  8b08                 mov ecx, dword ptr [eax]
// 0056f05b  8910                 mov dword ptr [eax], edx
// 0056f05d  890e                 mov dword ptr [esi], ecx
// 0056f05f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056f063  5e                   pop esi
// 0056f064  85c9                 test ecx, ecx
// 0056f066  7408                 je 0x56f070
// 0056f068  8b01                 mov eax, dword ptr [ecx]
// 0056f06a  8b10                 mov edx, dword ptr [eax]
// 0056f06c  6a01                 push 1
// 0056f06e  ffd2                 call edx
// 0056f070  8d4c2424             lea ecx, [esp + 0x24]
// 0056f074  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0056f079  ff1568248000         call dword ptr [0x802468]
// 0056f07f  8d4c2408             lea ecx, [esp + 8]
// 0056f083  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0056f08b  ff1568248000         call dword ptr [0x802468]
// 0056f091  e8eadcffff           call 0x56cd80
// 0056f096  8907                 mov dword ptr [edi], eax
// 0056f098  8bcf                 mov ecx, edi
// 0056f09a  e8e1edffff           call 0x56de80
// 0056f09f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0056f0a3  5f                   pop edi
// 0056f0a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0056f0ab  83c44c               add esp, 0x4c
// 0056f0ae  c3                   ret 

class type_info;
extern bool (__thiscall *type_equal)(const type_info*, const type_info&);

class type_info
{
public:
    bool operator==(const type_info&) const;
};

inline bool type_info::operator==(const type_info& other) const
{
    return type_equal(this, other);
}

extern void (__thiscall *string_destroy)(void*);

struct String
{
    char storage[28];
    ~String();
};

inline String::~String()
{
    string_destroy(this);
}

struct Value
{
    char data[0x20];
    Value(const String&);
    Value(const Value&);
    ~Value();
};

inline Value::~Value()
{
    string_destroy(this);
}

struct Object
{
    virtual ~Object();
};

struct Holder
{
    Object* value;
    Holder(const Value&);
    ~Holder();
    void swap(Holder&);
};

inline Holder::~Holder()
{
    if (value)
        delete value;
}

inline void Holder::swap(Holder& other)
{
    if (this != &other)
    {
        Object* replacement = value;
        Object* saved = other.value;
        value = saved;
        other.value = replacement;
    }
}

struct Descriptor
{
    void* reserved[2];
    const type_info* type;
};

extern const type_info reference_type;
extern String stringify(const Holder&);
extern Descriptor* get_descriptor();

struct S
{
    Descriptor* descriptor;
    Holder holder;
    void finish();
    void f();
};

void S::f()
{
    if (reference_type == *descriptor->type)
    {
        Holder(Value(stringify(holder))).swap(holder);
        descriptor = get_descriptor();
    }
    finish();
}
