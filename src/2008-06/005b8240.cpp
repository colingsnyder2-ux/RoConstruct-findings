// from server: 100% by king_originala
// roc 2008-06 005b8240  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b8240
//
// 005b8240  6aff                 push -1
// 005b8242  68e88e7d00           push 0x7d8ee8
// 005b8247  64a100000000         mov eax, dword ptr fs:[0]
// 005b824d  50                   push eax
// 005b824e  64892500000000       mov dword ptr fs:[0], esp
// 005b8255  83ec20               sub esp, 0x20
// 005b8258  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b825c  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 005b825f  8b01                 mov eax, dword ptr [ecx]
// 005b8261  8b4008               mov eax, dword ptr [eax + 8]
// 005b8264  56                   push esi
// 005b8265  57                   push edi
// 005b8266  52                   push edx
// 005b8267  8d54240c             lea edx, [esp + 0xc]
// 005b826b  52                   push edx
// 005b826c  ffd0                 call eax
// 005b826e  8bf8                 mov edi, eax
// 005b8270  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005b8278  e8034bfbff           call 0x56cd80
// 005b827d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005b8281  8901                 mov dword ptr [ecx], eax
// 005b8283  8d7104               lea esi, [ecx + 4]
// 005b8286  57                   push edi
// 005b8287  8d4c243c             lea ecx, [esp + 0x3c]
// 005b828b  e830f0ffff           call 0x5b72c0
// 005b8290  3bc6                 cmp eax, esi
// 005b8292  7408                 je 0x5b829c
// 005b8294  8b16                 mov edx, dword ptr [esi]
// 005b8296  8b08                 mov ecx, dword ptr [eax]
// 005b8298  8910                 mov dword ptr [eax], edx
// 005b829a  890e                 mov dword ptr [esi], ecx
// 005b829c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005b82a0  5f                   pop edi
// 005b82a1  5e                   pop esi
// 005b82a2  85c9                 test ecx, ecx
// 005b82a4  7408                 je 0x5b82ae
// 005b82a6  8b01                 mov eax, dword ptr [ecx]
// 005b82a8  8b10                 mov edx, dword ptr [eax]
// 005b82aa  6a01                 push 1
// 005b82ac  ffd2                 call edx
// 005b82ae  8d0c24               lea ecx, [esp]
// 005b82b1  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005b82b9  ff1568248000         call dword ptr [0x802468]
// 005b82bf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b82c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005b82ca  83c42c               add esp, 0x2c
// 005b82cd  c20800               ret 8

extern void (__thiscall *destroy_string)(void *);
extern void * __cdecl get_type();

struct String
{
    char storage[32];
    ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct Product
{
    virtual ~Product();
};

struct FactoryProduct
{
    Product *product;
    FactoryProduct(void *);
    ~FactoryProduct();
    void swap(FactoryProduct &);
};

__forceinline FactoryProduct::~FactoryProduct()
{
    if (product)
        delete product;
}

__forceinline void FactoryProduct::swap(FactoryProduct &other)
{
    if (this != &other)
    {
        Product *p = product;
        product = other.product;
        other.product = p;
    }
}

struct Value
{
    void *type;
    FactoryProduct holder;
    void assign(const String &);
};

__forceinline void Value::assign(const String &s)
{
    type = get_type();
    FactoryProduct &destination = holder;
    FactoryProduct((void *)&s).swap(destination);
}

struct Accessor
{
    virtual void slot0();
    virtual void slot1();
    virtual String get(void *);
};

struct Descriptor
{
    char padding[24];
    Accessor *accessor;
    void get(void *, Value &) const;
};

void Descriptor::get(void *object, Value &value) const
{
    value.assign(accessor->get(object));
}
