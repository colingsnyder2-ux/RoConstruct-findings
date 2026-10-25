// from server: 100% by king_originala
// roc 2008-06 00636670  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636670
//
// 00636670  6aff                 push -1
// 00636672  68a8647c00           push 0x7c64a8
// 00636677  64a100000000         mov eax, dword ptr fs:[0]
// 0063667d  50                   push eax
// 0063667e  64892500000000       mov dword ptr fs:[0], esp
// 00636685  83ec1c               sub esp, 0x1c
// 00636688  57                   push edi
// 00636689  8bf9                 mov edi, ecx
// 0063668b  6a01                 push 1
// 0063668d  8d4c240c             lea ecx, [esp + 0xc]
// 00636691  e8da4adeff           call 0x41b170
// 00636696  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063669a  2b442414             sub eax, dword ptr [esp + 0x14]
// 0063669e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006366a6  c1f802               sar eax, 2
// 006366a9  85c0                 test eax, eax
// 006366ab  7706                 ja 0x6366b3
// 006366ad  ff1590288000         call dword ptr [0x802890]
// 006366b3  56                   push esi
// 006366b4  8b742418             mov esi, dword ptr [esp + 0x18]
// 006366b8  6a10                 push 0x10
// 006366ba  e861a20600           call 0x6a0920
// 006366bf  83c404               add esp, 4
// 006366c2  85c0                 test eax, eax
// 006366c4  741d                 je 0x6366e3
// 006366c6  c70094f68200         mov dword ptr [eax], 0x82f694
// 006366cc  d9442434             fld dword ptr [esp + 0x34]
// 006366d0  d95804               fstp dword ptr [eax + 4]
// 006366d3  d9442438             fld dword ptr [esp + 0x38]
// 006366d7  d95808               fstp dword ptr [eax + 8]
// 006366da  d944243c             fld dword ptr [esp + 0x3c]
// 006366de  d9580c               fstp dword ptr [eax + 0xc]
// 006366e1  eb02                 jmp 0x6366e5
// 006366e3  33c0                 xor eax, eax
// 006366e5  8d542408             lea edx, [esp + 8]
// 006366e9  8bc8                 mov ecx, eax
// 006366eb  3bd6                 cmp edx, esi
// 006366ed  7404                 je 0x6366f3
// 006366ef  8b0e                 mov ecx, dword ptr [esi]
// 006366f1  8906                 mov dword ptr [esi], eax
// 006366f3  5e                   pop esi
// 006366f4  85c9                 test ecx, ecx
// 006366f6  7408                 je 0x636700
// 006366f8  8b01                 mov eax, dword ptr [ecx]
// 006366fa  8b10                 mov edx, dword ptr [eax]
// 006366fc  6a01                 push 1
// 006366fe  ffd2                 call edx
// 00636700  8b0f                 mov ecx, dword ptr [edi]
// 00636702  8b01                 mov eax, dword ptr [ecx]
// 00636704  8b4004               mov eax, dword ptr [eax + 4]
// 00636707  8d542408             lea edx, [esp + 8]
// 0063670b  52                   push edx
// 0063670c  ffd0                 call eax
// 0063670e  8d4c2408             lea ecx, [esp + 8]
// 00636712  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0063671a  e80148deff           call 0x41af20
// 0063671f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00636723  5f                   pop edi
// 00636724  64890d00000000       mov dword ptr fs:[0], ecx
// 0063672b  83c428               add esp, 0x28
// 0063672e  c20c00               ret 0xc

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
