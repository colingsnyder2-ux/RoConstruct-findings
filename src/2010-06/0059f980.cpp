// roc 2010-06 0059f980  unit: VAuthoringSettings::?$BoundPropGetSet  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059f980
//
// 0059f980  6aff                 push -1
// 0059f982  68d3849900           push 0x9984d3
// 0059f987  64a100000000         mov eax, dword ptr fs:[0]
// 0059f98d  50                   push eax
// 0059f98e  64892500000000       mov dword ptr fs:[0], esp
// 0059f995  51                   push ecx
// 0059f996  53                   push ebx
// 0059f997  55                   push ebp
// 0059f998  56                   push esi
// 0059f999  57                   push edi
// 0059f99a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059f9a2  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0059f9a6  be01000000           mov esi, 1
// 0059f9ab  8bcd                 mov ecx, ebp
// 0059f9ad  8974241c             mov dword ptr [esp + 0x1c], esi
// 0059f9b1  ff1504a49e00         call dword ptr [0x9ea404]
// 0059f9b7  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 0059f9bd  89742410             mov dword ptr [esp + 0x10], esi
// 0059f9c1  33f6                 xor esi, esi
// 0059f9c3  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 0059f9c7  7602                 jbe 0x59f9cb
// 0059f9c9  ffd3                 call ebx
// 0059f9cb  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 0059f9d0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059f9d4  7304                 jae 0x59f9da
// 0059f9d6  8d44242c             lea eax, [esp + 0x2c]
// 0059f9da  803c3030             cmp byte ptr [eax + esi], 0x30
// 0059f9de  7424                 je 0x59fa04
// 0059f9e0  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 0059f9e4  7602                 jbe 0x59f9e8
// 0059f9e6  ffd3                 call ebx
// 0059f9e8  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 0059f9ed  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059f9f1  7304                 jae 0x59f9f7
// 0059f9f3  8d44242c             lea eax, [esp + 0x2c]
// 0059f9f7  0fb60430             movzx eax, byte ptr [eax + esi]
// 0059f9fb  50                   push eax
// 0059f9fc  8bcd                 mov ecx, ebp
// 0059f9fe  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0059fa04  8d7e01               lea edi, [esi + 1]
// 0059fa07  3b7c243c             cmp edi, dword ptr [esp + 0x3c]
// 0059fa0b  7602                 jbe 0x59fa0f
// 0059fa0d  ffd3                 call ebx
// 0059fa0f  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 0059fa14  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059fa18  7304                 jae 0x59fa1e
// 0059fa1a  8d44242c             lea eax, [esp + 0x2c]
// 0059fa1e  0fb60c07             movzx ecx, byte ptr [edi + eax]
// 0059fa22  51                   push ecx
// 0059fa23  8bcd                 mov ecx, ebp
// 0059fa25  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0059fa2b  83c602               add esi, 2
// 0059fa2e  83fe20               cmp esi, 0x20
// 0059fa31  7c90                 jl 0x59f9c3
// 0059fa33  8d4c2428             lea ecx, [esp + 0x28]
// 0059fa37  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0059fa3c  ff1500a49e00         call dword ptr [0x9ea400]
// 0059fa42  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059fa46  5f                   pop edi
// 0059fa47  5e                   pop esi
// 0059fa48  8bc5                 mov eax, ebp
// 0059fa4a  5d                   pop ebp
// 0059fa4b  5b                   pop ebx
// 0059fa4c  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fa53  83c410               add esp, 0x10
// 0059fa56  c3                   ret 
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