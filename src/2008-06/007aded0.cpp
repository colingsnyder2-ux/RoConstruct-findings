// from server: 100% by king_originala
// roc 2008-06 007aded0  unit: RBX::RenderNew::TextureProxy  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007aded0
//
// 007aded0  6aff                 push -1
// 007aded2  686be57e00           push 0x7ee56b
// 007aded7  64a100000000         mov eax, dword ptr fs:[0]
// 007adedd  50                   push eax
// 007adede  64892500000000       mov dword ptr fs:[0], esp
// 007adee5  51                   push ecx
// 007adee6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007adeea  8b00                 mov eax, dword ptr [eax]
// 007adeec  53                   push ebx
// 007adeed  56                   push esi
// 007adeee  57                   push edi
// 007adeef  6a00                 push 0
// 007adef1  68142f9400           push 0x942f14
// 007adef6  68f02e9400           push 0x942ef0
// 007adefb  6a00                 push 0
// 007adefd  50                   push eax
// 007adefe  8bd9                 mov ebx, ecx
// 007adf00  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007adf08  e8b938efff           call 0x6a17c6
// 007adf0d  6a60                 push 0x60
// 007adf0f  8bf8                 mov edi, eax
// 007adf11  e80a2aefff           call 0x6a0920
// 007adf16  8bf0                 mov esi, eax
// 007adf18  83c418               add esp, 0x18
// 007adf1b  89742428             mov dword ptr [esp + 0x28], esi
// 007adf1f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007adf27  85f6                 test esi, esi
// 007adf29  741e                 je 0x7adf49
// 007adf2b  51                   push ecx
// 007adf2c  8bcc                 mov ecx, esp
// 007adf2e  89642410             mov dword ptr [esp + 0x10], esp
// 007adf32  57                   push edi
// 007adf33  c70100000000         mov dword ptr [ecx], 0
// 007adf39  e862b0deff           call 0x598fa0
// 007adf3e  8bce                 mov ecx, esi
// 007adf40  e8cbfeffff           call 0x7ade10
// 007adf45  8bf0                 mov esi, eax
// 007adf47  eb02                 jmp 0x7adf4b
// 007adf49  33f6                 xor esi, esi
// 007adf4b  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007adf4e  894e38               mov dword ptr [esi + 0x38], ecx
// 007adf51  57                   push edi
// 007adf52  8d4e40               lea ecx, [esi + 0x40]
// 007adf55  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007adf5d  e83eb0deff           call 0x598fa0
// 007adf62  8b442424             mov eax, dword ptr [esp + 0x24]
// 007adf66  d900                 fld dword ptr [eax]
// 007adf68  53                   push ebx
// 007adf69  d95e48               fstp dword ptr [esi + 0x48]
// 007adf6c  8d4e44               lea ecx, [esi + 0x44]
// 007adf6f  d94004               fld dword ptr [eax + 4]
// 007adf72  d95e4c               fstp dword ptr [esi + 0x4c]
// 007adf75  d94008               fld dword ptr [eax + 8]
// 007adf78  d95e50               fstp dword ptr [esi + 0x50]
// 007adf7b  e820b0deff           call 0x598fa0
// 007adf80  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007adf84  56                   push esi
// 007adf85  8bcf                 mov ecx, edi
// 007adf87  c70700000000         mov dword ptr [edi], 0
// 007adf8d  e80eb0deff           call 0x598fa0
// 007adf92  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007adf96  8bc7                 mov eax, edi
// 007adf98  5f                   pop edi
// 007adf99  5e                   pop esi
// 007adf9a  64890d00000000       mov dword ptr fs:[0], ecx
// 007adfa1  5b                   pop ebx
// 007adfa2  83c410               add esp, 0x10
// 007adfa5  c20c00               ret 0xc

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern unsigned char baseTypeDescriptor;
extern unsigned char proxyTypeDescriptor;

struct Base {
    virtual ~Base();
    unsigned char padding[0x34];
};

struct Ptr {
    Base* p;

    Ptr(Base*);
    Ptr(const Ptr&);
    ~Ptr();
    void assign(Base*);
};

inline Ptr::Ptr(Base* value) : p(0)
{
    assign(value);
}

struct Vector {
    float x, y, z;
};

struct TextureProxy : Base {
    unsigned int value;
    unsigned char padding3C[4];
    Ptr source;
    Ptr owner;
    Vector position;
    unsigned char padding54[12];

    TextureProxy(Ptr);
    Ptr clone(const Vector&, const Ptr&);
};

Ptr TextureProxy::clone(const Vector& positionValue, const Ptr& input)
{
    Base* object = *static_cast<Base* const volatile*>(&input.p);
    TextureProxy* other = static_cast<TextureProxy*>(
        __RTDynamicCast(object, 0, &baseTypeDescriptor,
                        &proxyTypeDescriptor, 0));
    TextureProxy* result = new TextureProxy(Ptr(other));

    *static_cast<volatile unsigned int*>(&result->value) = value;
    result->source.assign(other);
    result->position.x = positionValue.x;
    result->position.y = positionValue.y;
    result->position.z = positionValue.z;
    result->owner.assign(this);

    return Ptr(result);
}
