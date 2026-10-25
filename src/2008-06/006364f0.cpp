// from server: 100% by king_originala
// roc 2008-06 006364f0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006364f0
//
// 006364f0  6aff                 push -1
// 006364f2  68a8647c00           push 0x7c64a8
// 006364f7  64a100000000         mov eax, dword ptr fs:[0]
// 006364fd  50                   push eax
// 006364fe  64892500000000       mov dword ptr fs:[0], esp
// 00636505  83ec1c               sub esp, 0x1c
// 00636508  57                   push edi
// 00636509  8bf9                 mov edi, ecx
// 0063650b  6a01                 push 1
// 0063650d  8d4c240c             lea ecx, [esp + 0xc]
// 00636511  e85a4cdeff           call 0x41b170
// 00636516  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063651a  2b442414             sub eax, dword ptr [esp + 0x14]
// 0063651e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00636526  c1f802               sar eax, 2
// 00636529  85c0                 test eax, eax
// 0063652b  7706                 ja 0x636533
// 0063652d  ff1590288000         call dword ptr [0x802890]
// 00636533  56                   push esi
// 00636534  8b742418             mov esi, dword ptr [esp + 0x18]
// 00636538  6a10                 push 0x10
// 0063653a  e8e1a30600           call 0x6a0920
// 0063653f  83c404               add esp, 4
// 00636542  85c0                 test eax, eax
// 00636544  741d                 je 0x636563
// 00636546  c70074f68200         mov dword ptr [eax], 0x82f674
// 0063654c  d9442434             fld dword ptr [esp + 0x34]
// 00636550  d95804               fstp dword ptr [eax + 4]
// 00636553  d9442438             fld dword ptr [esp + 0x38]
// 00636557  d95808               fstp dword ptr [eax + 8]
// 0063655a  d944243c             fld dword ptr [esp + 0x3c]
// 0063655e  d9580c               fstp dword ptr [eax + 0xc]
// 00636561  eb02                 jmp 0x636565
// 00636563  33c0                 xor eax, eax
// 00636565  8d542408             lea edx, [esp + 8]
// 00636569  8bc8                 mov ecx, eax
// 0063656b  3bd6                 cmp edx, esi
// 0063656d  7404                 je 0x636573
// 0063656f  8b0e                 mov ecx, dword ptr [esi]
// 00636571  8906                 mov dword ptr [esi], eax
// 00636573  5e                   pop esi
// 00636574  85c9                 test ecx, ecx
// 00636576  7408                 je 0x636580
// 00636578  8b01                 mov eax, dword ptr [ecx]
// 0063657a  8b10                 mov edx, dword ptr [eax]
// 0063657c  6a01                 push 1
// 0063657e  ffd2                 call edx
// 00636580  8b0f                 mov ecx, dword ptr [edi]
// 00636582  8b01                 mov eax, dword ptr [ecx]
// 00636584  8b4004               mov eax, dword ptr [eax + 4]
// 00636587  8d542408             lea edx, [esp + 8]
// 0063658b  52                   push edx
// 0063658c  ffd0                 call eax
// 0063658e  8d4c2408             lea ecx, [esp + 8]
// 00636592  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0063659a  e88149deff           call 0x41af20
// 0063659f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006365a3  5f                   pop edi
// 006365a4  64890d00000000       mov dword ptr fs:[0], ecx
// 006365ab  83c428               add esp, 0x28
// 006365ae  c20c00               ret 0xc

extern "C" void (__cdecl* _imp__invalid_parameter_noinfo)();
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct RGB {
    float r, g, b;
};

struct Value {
    virtual ~Value();
};

inline Value::~Value() {}

struct ColorValue : Value {
    RGB color;
    explicit ColorValue(const RGB&);
};

inline ColorValue::ColorValue(const RGB& value) {
    color.r = value.r;
    color.g = value.g;
    color.b = value.b;
}

struct Owner {
    Value* ptr;
    explicit Owner(Value*);
    ~Owner();
    void swap(Owner&);
};

inline Owner::Owner(Value* p) : ptr(p) {}

inline Owner::~Owner() {
    if (ptr)
        delete ptr;
}

inline void Owner::swap(Owner& other) {
    if (this != &other) {
        Value* p = other.ptr;
        other.ptr = ptr;
        ptr = p;
    }
}

struct Values {
    unsigned int prefix[3];
    Owner* first;
    Owner* last;
    Owner* limit;

    explicit Values(unsigned int);
    ~Values();
    Owner& operator[](unsigned int);
};

inline Owner& Values::operator[](unsigned int index) {
    if (index >= static_cast<unsigned int>(last - first))
        _imp__invalid_parameter_noinfo();
    return first[index];
}

struct Product {
    virtual ~Product();
    virtual void set(Values*);
};

struct S {
    Product* product;
    void f(RGB);
};

void S::f(RGB color) {
    Values values(1);
    Owner& slot = values[0];
    {
        Owner replacement(new ColorValue(color));
        replacement.swap(slot);
    }
    product->set(&values);
}
