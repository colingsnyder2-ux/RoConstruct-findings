// from server: 100% by king_originala
// roc 2008-06 005b8090  unit: VStockSound::?$FactoryProduct  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b8090
//
// 005b8090  64a100000000         mov eax, dword ptr fs:[0]
// 005b8096  6aff                 push -1
// 005b8098  68118f7d00           push 0x7d8f11
// 005b809d  50                   push eax
// 005b809e  64892500000000       mov dword ptr fs:[0], esp
// 005b80a5  83ec40               sub esp, 0x40
// 005b80a8  57                   push edi
// 005b80a9  8bf9                 mov edi, ecx
// 005b80ab  8b07                 mov eax, dword ptr [edi]
// 005b80ad  8b4008               mov eax, dword ptr [eax + 8]
// 005b80b0  50                   push eax
// 005b80b1  b9f8be9200           mov ecx, 0x92bef8
// 005b80b6  ff1578288000         call dword ptr [0x802878]
// 005b80bc  84c0                 test al, al
// 005b80be  7478                 je 0x5b8138
// 005b80c0  56                   push esi
// 005b80c1  8d7704               lea esi, [edi + 4]
// 005b80c4  8d4c240c             lea ecx, [esp + 0xc]
// 005b80c8  56                   push esi
// 005b80c9  51                   push ecx
// 005b80ca  e841e0e5ff           call 0x416110
// 005b80cf  83c408               add esp, 8
// 005b80d2  50                   push eax
// 005b80d3  8d4c242c             lea ecx, [esp + 0x2c]
// 005b80d7  c744245400000000     mov dword ptr [esp + 0x54], 0
// 005b80df  e85cd30500           call 0x615440
// 005b80e4  50                   push eax
// 005b80e5  8d4c240c             lea ecx, [esp + 0xc]
// 005b80e9  c644245401           mov byte ptr [esp + 0x54], 1
// 005b80ee  e8cdf1ffff           call 0x5b72c0
// 005b80f3  3bc6                 cmp eax, esi
// 005b80f5  7408                 je 0x5b80ff
// 005b80f7  8b16                 mov edx, dword ptr [esi]
// 005b80f9  8b08                 mov ecx, dword ptr [eax]
// 005b80fb  8910                 mov dword ptr [eax], edx
// 005b80fd  890e                 mov dword ptr [esi], ecx
// 005b80ff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b8103  5e                   pop esi
// 005b8104  85c9                 test ecx, ecx
// 005b8106  7408                 je 0x5b8110
// 005b8108  8b01                 mov eax, dword ptr [ecx]
// 005b810a  8b10                 mov edx, dword ptr [eax]
// 005b810c  6a01                 push 1
// 005b810e  ffd2                 call edx
// 005b8110  8d4c2424             lea ecx, [esp + 0x24]
// 005b8114  c644244c00           mov byte ptr [esp + 0x4c], 0
// 005b8119  ff1568248000         call dword ptr [0x802468]
// 005b811f  8d4c2408             lea ecx, [esp + 8]
// 005b8123  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 005b812b  ff1568248000         call dword ptr [0x802468]
// 005b8131  e84a4cfbff           call 0x56cd80
// 005b8136  8907                 mov dword ptr [edi], eax
// 005b8138  8bcf                 mov ecx, edi
// 005b813a  e841f9ffff           call 0x5b7a80
// 005b813f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005b8143  5f                   pop edi
// 005b8144  64890d00000000       mov dword ptr fs:[0], ecx
// 005b814b  83c44c               add esp, 0x4c
// 005b814e  c3                   ret 

struct TypeInfo {
    bool operator==(const TypeInfo&) const;
};

extern bool (TypeInfo::*typeInfoEqual)(const TypeInfo&) const;
extern TypeInfo expectedType;

inline bool TypeInfo::operator==(const TypeInfo& other) const
{
    return (this->*typeInfoEqual)(other);
}

struct Descriptor {
    char padding[8];
    TypeInfo* type;
};

struct String {
    char storage[28];
    ~String();
};

extern void (String::*destroyString)();

inline String::~String()
{
    (this->*destroyString)();
}

struct Argument {
    char storage[32];
    Argument(const String*);
    ~Argument();
};

inline Argument::~Argument()
{
    (reinterpret_cast<String*>(this)->*destroyString)();
}

struct Product {
    virtual ~Product();
    char storage[32];
};

struct FactoryProduct {
    Product* product;
    FactoryProduct(void* arg);
    ~FactoryProduct();
    void swap(FactoryProduct& other);
};

inline FactoryProduct::~FactoryProduct()
{
    delete product;
}

inline void FactoryProduct::swap(FactoryProduct& other)
{
    if (this != &other) {
        Product* old = product;
        product = other.product;
        other.product = old;
    }
}

String __cdecl makeString(Product* const*);
Descriptor* __cdecl getDescriptor();

struct S {
    Descriptor* descriptor;
    Product* product;

    void refresh();
    void finish();
};

void S::refresh()
{
    if (expectedType == *descriptor->type) {
        FactoryProduct(&Argument(&makeString(&product))).swap(
            *reinterpret_cast<FactoryProduct*>(&product));
        descriptor = getDescriptor();
    }
    finish();
}
