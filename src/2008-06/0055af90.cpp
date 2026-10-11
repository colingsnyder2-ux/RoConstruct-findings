// from server: 87% by tester
// roc 2008-06 0055af90  unit: RBX::VInstance::?$NonFactoryProduct  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055af90
//
// 0055af90  53                   push ebx
// 0055af91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0055af95  56                   push esi
// 0055af96  57                   push edi
// 0055af97  8bf1                 mov esi, ecx
// 0055af99  8dbe10010000         lea edi, [esi + 0x110]
// 0055af9f  53                   push ebx
// 0055afa0  57                   push edi
// 0055afa1  ff15d8238000         call dword ptr [0x8023d8]
// 0055afa7  83c408               add esp, 8
// 0055afaa  84c0                 test al, al
// 0055afac  7415                 je 0x55afc3
// 0055afae  53                   push ebx
// 0055afaf  8bcf                 mov ecx, edi
// 0055afb1  ff150c248000         call dword ptr [0x80240c]
// 0055afb7  68543d9700           push 0x973d54
// 0055afbc  8bce                 mov ecx, esi
// 0055afbe  e83d2bebff           call 0x40db00
// 0055afc3  5f                   pop edi
// 0055afc4  5e                   pop esi
// 0055afc5  5b                   pop ebx
// 0055afc6  c20400               ret 4




struct RBXName;

struct String {
    void assign(const String& other);
};

extern "C" {
    bool __cdecl StringNotEqual(const String& a, const String& b);
    void __cdecl StringAssign(String& dst, const String& src);
}

struct VMember {
    void setName(const RBXName* name);
};

struct VInstance {
    char pad[0x110];
    String name;
    void setName(const RBXName* n);
};

void VInstance::setName(const RBXName* n) {
    if (StringNotEqual(this->name, *(const String*)n)) {
        StringAssign(this->name, *(const String*)n);
        ((VMember*)this)->setName(n);
    }
}
