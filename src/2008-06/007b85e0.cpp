// from server: 100% by king_originala
// roc 2008-06 007b85e0  unit: RBX::Render::TextureProxy  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b85e0
//
// 007b85e0  51                   push ecx
// 007b85e1  56                   push esi
// 007b85e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b85e6  c70600000000         mov dword ptr [esi], 0
// 007b85ec  8b4130               mov eax, dword ptr [ecx + 0x30]
// 007b85ef  50                   push eax
// 007b85f0  8bce                 mov ecx, esi
// 007b85f2  c744240800000000     mov dword ptr [esp + 8], 0
// 007b85fa  e8a109deff           call 0x598fa0
// 007b85ff  8bc6                 mov eax, esi
// 007b8601  5e                   pop esi
// 007b8602  59                   pop ecx
// 007b8603  c20400               ret 4

struct Texture;

struct Ptr {
    Texture* value;
    Ptr(Texture* const&);
    ~Ptr();
    void assign(Texture*);
};

struct Texture {
    char storage[0x30];
    Texture* target;
    Ptr clone();
};

inline Ptr::Ptr(Texture* const& p) : value(0) {
    assign(p);
}

Ptr Texture::clone() {
    return Ptr(target);
}
