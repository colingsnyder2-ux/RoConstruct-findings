// roc 2009-12 0063d9a0  unit: RBX::VTeam::?$FactoryProduct  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063d9a0
//
// 0063d9a0  6aff                 push -1
// 0063d9a2  68d3609400           push 0x9460d3
// 0063d9a7  64a100000000         mov eax, dword ptr fs:[0]
// 0063d9ad  50                   push eax
// 0063d9ae  64892500000000       mov dword ptr fs:[0], esp
// 0063d9b5  51                   push ecx
// 0063d9b6  53                   push ebx
// 0063d9b7  55                   push ebp
// 0063d9b8  56                   push esi
// 0063d9b9  57                   push edi
// 0063d9ba  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063d9c2  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0063d9c6  be01000000           mov esi, 1
// 0063d9cb  8bcd                 mov ecx, ebp
// 0063d9cd  8974241c             mov dword ptr [esp + 0x1c], esi
// 0063d9d1  ff15e8b69800         call dword ptr [0x98b6e8]
// 0063d9d7  8b1d60b79800         mov ebx, dword ptr [0x98b760]
// 0063d9dd  89742410             mov dword ptr [esp + 0x10], esi
// 0063d9e1  33f6                 xor esi, esi
// 0063d9e3  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 0063d9e7  7602                 jbe 0x63d9eb
// 0063d9e9  ffd3                 call ebx
// 0063d9eb  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 0063d9f0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063d9f4  7304                 jae 0x63d9fa
// 0063d9f6  8d44242c             lea eax, [esp + 0x2c]
// 0063d9fa  803c3030             cmp byte ptr [eax + esi], 0x30
// 0063d9fe  7424                 je 0x63da24
// 0063da00  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 0063da04  7602                 jbe 0x63da08
// 0063da06  ffd3                 call ebx
// 0063da08  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 0063da0d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063da11  7304                 jae 0x63da17
// 0063da13  8d44242c             lea eax, [esp + 0x2c]
// 0063da17  0fb60430             movzx eax, byte ptr [eax + esi]
// 0063da1b  50                   push eax
// 0063da1c  8bcd                 mov ecx, ebp
// 0063da1e  ff154cb59800         call dword ptr [0x98b54c]
// 0063da24  8d7e01               lea edi, [esi + 1]
// 0063da27  3b7c243c             cmp edi, dword ptr [esp + 0x3c]
// 0063da2b  7602                 jbe 0x63da2f
// 0063da2d  ffd3                 call ebx
// 0063da2f  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 0063da34  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063da38  7304                 jae 0x63da3e
// 0063da3a  8d44242c             lea eax, [esp + 0x2c]
// 0063da3e  0fb60c07             movzx ecx, byte ptr [edi + eax]
// 0063da42  51                   push ecx
// 0063da43  8bcd                 mov ecx, ebp
// 0063da45  ff154cb59800         call dword ptr [0x98b54c]
// 0063da4b  83c602               add esi, 2
// 0063da4e  83fe20               cmp esi, 0x20
// 0063da51  7c90                 jl 0x63d9e3
// 0063da53  8d4c2428             lea ecx, [esp + 0x28]
// 0063da57  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0063da5c  ff15e4b69800         call dword ptr [0x98b6e4]
// 0063da62  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063da66  5f                   pop edi
// 0063da67  5e                   pop esi
// 0063da68  8bc5                 mov eax, ebp
// 0063da6a  5d                   pop ebp
// 0063da6b  5b                   pop ebx
// 0063da6c  64890d00000000       mov dword ptr fs:[0], ecx
// 0063da73  83c410               add esp, 0x10
// 0063da76  c3                   ret 
// copied from an identical function in another client (function ?transform@@YA?AUString@@U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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