// from server: 100% by colin
// roc 2008-06 007b8500  unit: RBX::Render::TextureProxy  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b8500
//
// 007b8500  6aff                 push -1
// 007b8502  686be57e00           push 0x7ee56b
// 007b8507  64a100000000         mov eax, dword ptr fs:[0]
// 007b850d  50                   push eax
// 007b850e  64892500000000       mov dword ptr fs:[0], esp
// 007b8515  51                   push ecx
// 007b8516  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b851a  8b00                 mov eax, dword ptr [eax]
// 007b851c  53                   push ebx
// 007b851d  56                   push esi
// 007b851e  57                   push edi
// 007b851f  6a00                 push 0
// 007b8521  68c82e9400           push 0x942ec8
// 007b8526  68f02e9400           push 0x942ef0
// 007b852b  6a00                 push 0
// 007b852d  50                   push eax
// 007b852e  8bd9                 mov ebx, ecx
// 007b8530  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007b8538  e88992eeff           call 0x6a17c6
// 007b853d  6a54                 push 0x54
// 007b853f  8bf8                 mov edi, eax
// 007b8541  e8da83eeff           call 0x6a0920
// 007b8546  8bf0                 mov esi, eax
// 007b8548  83c418               add esp, 0x18
// 007b854b  89742428             mov dword ptr [esp + 0x28], esi
// 007b854f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007b8557  85f6                 test esi, esi
// 007b8559  741e                 je 0x7b8579
// 007b855b  51                   push ecx
// 007b855c  8bcc                 mov ecx, esp
// 007b855e  89642410             mov dword ptr [esp + 0x10], esp
// 007b8562  57                   push edi
// 007b8563  c70100000000         mov dword ptr [ecx], 0
// 007b8569  e8320adeff           call 0x598fa0
// 007b856e  8bce                 mov ecx, esi
// 007b8570  e8dbfeffff           call 0x7b8450
// 007b8575  8bf0                 mov esi, eax
// 007b8577  eb02                 jmp 0x7b857b
// 007b8579  33f6                 xor esi, esi
// 007b857b  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007b857e  894e38               mov dword ptr [esi + 0x38], ecx
// 007b8581  57                   push edi
// 007b8582  8d4e40               lea ecx, [esi + 0x40]
// 007b8585  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007b858d  e80e0adeff           call 0x598fa0
// 007b8592  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b8596  d900                 fld dword ptr [eax]
// 007b8598  53                   push ebx
// 007b8599  d95e48               fstp dword ptr [esi + 0x48]
// 007b859c  8d4e44               lea ecx, [esi + 0x44]
// 007b859f  d94004               fld dword ptr [eax + 4]
// 007b85a2  d95e4c               fstp dword ptr [esi + 0x4c]
// 007b85a5  d94008               fld dword ptr [eax + 8]
// 007b85a8  d95e50               fstp dword ptr [esi + 0x50]
// 007b85ab  e8f009deff           call 0x598fa0
// 007b85b0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007b85b4  56                   push esi
// 007b85b5  8bcf                 mov ecx, edi
// 007b85b7  c70700000000         mov dword ptr [edi], 0
// 007b85bd  e8de09deff           call 0x598fa0
// 007b85c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b85c6  8bc7                 mov eax, edi
// 007b85c8  5f                   pop edi
// 007b85c9  5e                   pop esi
// 007b85ca  64890d00000000       mov dword ptr fs:[0], ecx
// 007b85d1  5b                   pop ebx
// 007b85d2  83c410               add esp, 0x10
// 007b85d5  c20c00               ret 0xc

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

namespace RBX {
class TextureProxyBase {
public:
    virtual ~TextureProxyBase();
    char padding[52];
    volatile unsigned int value;
    unsigned int reserved;
};
}
struct Ref {
    RBX::TextureProxyBase* volatile p;
    Ref(RBX::TextureProxyBase*);
    Ref(const Ref&);
    ~Ref();
    void assign(RBX::TextureProxyBase*);
};

struct Vector3 {
    float x, y, z;
};

namespace RBX { namespace Render {
class TextureProxy : public TextureProxyBase {
public:
    Ref texture;
    Ref owner;
    Vector3 position;

    TextureProxy(Ref);
    Ref clone(const Vector3&, const Ref&);
};
} }

inline Ref::Ref(RBX::TextureProxyBase* object) : p(0) {
    assign(object);
}

Ref RBX::Render::TextureProxy::clone(const Vector3& vector, const Ref& source) {
    TextureProxyBase* src = source.p;
    TextureProxy* object = dynamic_cast<TextureProxy*>(src);
    TextureProxy* result = new TextureProxy(Ref(object));
    result->value = value;
    result->texture.assign(object);
    result->position.x = vector.x;
    result->position.y = vector.y;
    result->position.z = vector.z;
    result->owner.assign(this);
    return Ref(result);
}
