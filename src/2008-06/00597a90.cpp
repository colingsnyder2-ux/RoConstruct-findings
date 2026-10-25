// from server: 100% by king_originala
// roc 2008-06 00597a90  unit: RBX::VDecal::?$FactoryProduct  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597a90
//
// 00597a90  64a100000000         mov eax, dword ptr fs:[0]
// 00597a96  6aff                 push -1
// 00597a98  68118f7d00           push 0x7d8f11
// 00597a9d  50                   push eax
// 00597a9e  64892500000000       mov dword ptr fs:[0], esp
// 00597aa5  83ec40               sub esp, 0x40
// 00597aa8  57                   push edi
// 00597aa9  8bf9                 mov edi, ecx
// 00597aab  8b07                 mov eax, dword ptr [edi]
// 00597aad  8b4008               mov eax, dword ptr [eax + 8]
// 00597ab0  50                   push eax
// 00597ab1  b9f8be9200           mov ecx, 0x92bef8
// 00597ab6  ff1578288000         call dword ptr [0x802878]
// 00597abc  84c0                 test al, al
// 00597abe  7478                 je 0x597b38
// 00597ac0  56                   push esi
// 00597ac1  8d7704               lea esi, [edi + 4]
// 00597ac4  8d4c240c             lea ecx, [esp + 0xc]
// 00597ac8  56                   push esi
// 00597ac9  51                   push ecx
// 00597aca  e841e6e7ff           call 0x416110
// 00597acf  83c408               add esp, 8
// 00597ad2  50                   push eax
// 00597ad3  8d4c242c             lea ecx, [esp + 0x2c]
// 00597ad7  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00597adf  e85cd90700           call 0x615440
// 00597ae4  50                   push eax
// 00597ae5  8d4c240c             lea ecx, [esp + 0xc]
// 00597ae9  c644245401           mov byte ptr [esp + 0x54], 1
// 00597aee  e82dfbffff           call 0x597620
// 00597af3  3bc6                 cmp eax, esi
// 00597af5  7408                 je 0x597aff
// 00597af7  8b16                 mov edx, dword ptr [esi]
// 00597af9  8b08                 mov ecx, dword ptr [eax]
// 00597afb  8910                 mov dword ptr [eax], edx
// 00597afd  890e                 mov dword ptr [esi], ecx
// 00597aff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597b03  5e                   pop esi
// 00597b04  85c9                 test ecx, ecx
// 00597b06  7408                 je 0x597b10
// 00597b08  8b01                 mov eax, dword ptr [ecx]
// 00597b0a  8b10                 mov edx, dword ptr [eax]
// 00597b0c  6a01                 push 1
// 00597b0e  ffd2                 call edx
// 00597b10  8d4c2424             lea ecx, [esp + 0x24]
// 00597b14  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00597b19  ff1568248000         call dword ptr [0x802468]
// 00597b1f  8d4c2408             lea ecx, [esp + 8]
// 00597b23  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00597b2b  ff1568248000         call dword ptr [0x802468]
// 00597b31  e84a52fdff           call 0x56cd80
// 00597b36  8907                 mov dword ptr [edi], eax
// 00597b38  8bcf                 mov ecx, edi
// 00597b3a  e801fcffff           call 0x597740
// 00597b3f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00597b43  5f                   pop edi
// 00597b44  64890d00000000       mov dword ptr fs:[0], ecx
// 00597b4b  83c44c               add esp, 0x4c
// 00597b4e  c3                   ret 

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
