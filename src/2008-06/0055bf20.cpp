// from server: 100% by king_originala
// roc 2008-06 0055bf20  unit: RBX::VInstance::?$SignalDesc  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055bf20
//
// 0055bf20  6aff                 push -1
// 0055bf22  68a3e77c00           push 0x7ce7a3
// 0055bf27  64a100000000         mov eax, dword ptr fs:[0]
// 0055bf2d  50                   push eax
// 0055bf2e  64892500000000       mov dword ptr fs:[0], esp
// 0055bf35  51                   push ecx
// 0055bf36  53                   push ebx
// 0055bf37  55                   push ebp
// 0055bf38  56                   push esi
// 0055bf39  57                   push edi
// 0055bf3a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055bf42  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0055bf46  be01000000           mov esi, 1
// 0055bf4b  8bcd                 mov ecx, ebp
// 0055bf4d  8974241c             mov dword ptr [esp + 0x1c], esi
// 0055bf51  ff1560248000         call dword ptr [0x802460]
// 0055bf57  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0055bf5d  89742410             mov dword ptr [esp + 0x10], esi
// 0055bf61  33f6                 xor esi, esi
// 0055bf63  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 0055bf67  7602                 jbe 0x55bf6b
// 0055bf69  ffd3                 call ebx
// 0055bf6b  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 0055bf70  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055bf74  7304                 jae 0x55bf7a
// 0055bf76  8d44242c             lea eax, [esp + 0x2c]
// 0055bf7a  803c3030             cmp byte ptr [eax + esi], 0x30
// 0055bf7e  7424                 je 0x55bfa4
// 0055bf80  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 0055bf84  7602                 jbe 0x55bf88
// 0055bf86  ffd3                 call ebx
// 0055bf88  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 0055bf8d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055bf91  7304                 jae 0x55bf97
// 0055bf93  8d44242c             lea eax, [esp + 0x2c]
// 0055bf97  0fb60430             movzx eax, byte ptr [eax + esi]
// 0055bf9b  50                   push eax
// 0055bf9c  8bcd                 mov ecx, ebp
// 0055bf9e  ff15b4248000         call dword ptr [0x8024b4]
// 0055bfa4  8d7e01               lea edi, [esi + 1]
// 0055bfa7  3b7c243c             cmp edi, dword ptr [esp + 0x3c]
// 0055bfab  7602                 jbe 0x55bfaf
// 0055bfad  ffd3                 call ebx
// 0055bfaf  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 0055bfb4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055bfb8  7304                 jae 0x55bfbe
// 0055bfba  8d44242c             lea eax, [esp + 0x2c]
// 0055bfbe  0fb60c07             movzx ecx, byte ptr [edi + eax]
// 0055bfc2  51                   push ecx
// 0055bfc3  8bcd                 mov ecx, ebp
// 0055bfc5  ff15b4248000         call dword ptr [0x8024b4]
// 0055bfcb  83c602               add esi, 2
// 0055bfce  83fe20               cmp esi, 0x20
// 0055bfd1  7c90                 jl 0x55bf63
// 0055bfd3  8d4c2428             lea ecx, [esp + 0x28]
// 0055bfd7  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0055bfdc  ff1568248000         call dword ptr [0x802468]
// 0055bfe2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0055bfe6  5f                   pop edi
// 0055bfe7  5e                   pop esi
// 0055bfe8  8bc5                 mov eax, ebp
// 0055bfea  5d                   pop ebp
// 0055bfeb  5b                   pop ebx
// 0055bfec  64890d00000000       mov dword ptr fs:[0], ecx
// 0055bff3  83c410               add esp, 0x10
// 0055bff6  c3                   ret 

struct String;

extern void (__thiscall *constructString)(String *);
extern void (__thiscall *destroyString)(String *);
extern String &(__thiscall *appendCharacter)(String *, unsigned int);
extern void (__cdecl *invalidParameter)();

struct String {
    unsigned int proxy;
    union {
        char local[16];
        char *heap;
    } storage;
    unsigned int length;
    unsigned int capacity;

    String();
    ~String();
    String &operator+=(unsigned int);
    unsigned char at(unsigned int, void (__cdecl *)());
};

inline String::String() {
    constructString(this);
}

inline String::~String() {
    destroyString(this);
}

inline String &String::operator+=(unsigned int c) {
    return appendCharacter(this, c);
}

inline unsigned char String::at(unsigned int index, void (__cdecl *invalid)()) {
    if (index > length)
        invalid();
    char *data = storage.heap;
    if (capacity < 16)
        data = storage.local;
    return static_cast<unsigned char>(data[index]);
}

String transform(String input) {
    String result;
    void (__cdecl *invalid)() = invalidParameter;
    for (int i = 0; i < 32; i += 2) {
        if (input.at(i, invalid) != '0')
            result += input.at(i, invalid);
        result += input.at(i + 1, invalid);
    }
    return result;
}
