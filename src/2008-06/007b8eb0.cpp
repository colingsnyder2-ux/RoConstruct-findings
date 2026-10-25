// from server: 100% by king_originala
// roc 2008-06 007b8eb0  unit: RBX::Render::TextureProxy  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b8eb0
//
// 007b8eb0  6aff                 push -1
// 007b8eb2  682bf57b00           push 0x7bf52b
// 007b8eb7  64a100000000         mov eax, dword ptr fs:[0]
// 007b8ebd  50                   push eax
// 007b8ebe  64892500000000       mov dword ptr fs:[0], esp
// 007b8ec5  83ec08               sub esp, 8
// 007b8ec8  56                   push esi
// 007b8ec9  57                   push edi
// 007b8eca  6a54                 push 0x54
// 007b8ecc  8bf9                 mov edi, ecx
// 007b8ece  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007b8ed6  e8457aeeff           call 0x6a0920
// 007b8edb  8bf0                 mov esi, eax
// 007b8edd  83c404               add esp, 4
// 007b8ee0  89742408             mov dword ptr [esp + 8], esi
// 007b8ee4  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007b8eec  85f6                 test esi, esi
// 007b8eee  741c                 je 0x7b8f0c
// 007b8ef0  51                   push ecx
// 007b8ef1  8bcc                 mov ecx, esp
// 007b8ef3  89642410             mov dword ptr [esp + 0x10], esp
// 007b8ef7  57                   push edi
// 007b8ef8  c70100000000         mov dword ptr [ecx], 0
// 007b8efe  e89d00deff           call 0x598fa0
// 007b8f03  8bce                 mov ecx, esi
// 007b8f05  e846f5ffff           call 0x7b8450
// 007b8f0a  eb02                 jmp 0x7b8f0e
// 007b8f0c  33c0                 xor eax, eax
// 007b8f0e  8b742420             mov esi, dword ptr [esp + 0x20]
// 007b8f12  50                   push eax
// 007b8f13  8bce                 mov ecx, esi
// 007b8f15  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007b8f1d  c70600000000         mov dword ptr [esi], 0
// 007b8f23  e87800deff           call 0x598fa0
// 007b8f28  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b8f2c  5f                   pop edi
// 007b8f2d  8bc6                 mov eax, esi
// 007b8f2f  64890d00000000       mov dword ptr fs:[0], ecx
// 007b8f36  5e                   pop esi
// 007b8f37  83c414               add esp, 0x14
// 007b8f3a  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Texture;

struct Ptr {
    Texture* value;
    Ptr(Texture*);
    Ptr(const Ptr&);
    ~Ptr();
    void assign(Texture*);
};

struct Texture {
    char storage[0x54];
    Texture(Ptr);
    Ptr clone();
};

inline Ptr::Ptr(Texture* p) : value(0) {
    assign(p);
}

Ptr Texture::clone() {
    return Ptr(new Texture(Ptr(this)));
}
