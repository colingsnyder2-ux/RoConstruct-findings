// roc 2009-06 005d8e90  unit: VAuthoringSettings::?$BoundPropGetSet  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d8e90
//
// 005d8e90  6aff                 push -1
// 005d8e92  68e3868600           push 0x8686e3
// 005d8e97  64a100000000         mov eax, dword ptr fs:[0]
// 005d8e9d  50                   push eax
// 005d8e9e  64892500000000       mov dword ptr fs:[0], esp
// 005d8ea5  51                   push ecx
// 005d8ea6  53                   push ebx
// 005d8ea7  55                   push ebp
// 005d8ea8  56                   push esi
// 005d8ea9  57                   push edi
// 005d8eaa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d8eb2  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005d8eb6  be01000000           mov esi, 1
// 005d8ebb  8bcd                 mov ecx, ebp
// 005d8ebd  8974241c             mov dword ptr [esp + 0x1c], esi
// 005d8ec1  ff15c0e48900         call dword ptr [0x89e4c0]
// 005d8ec7  8b1dace98900         mov ebx, dword ptr [0x89e9ac]
// 005d8ecd  89742410             mov dword ptr [esp + 0x10], esi
// 005d8ed1  33f6                 xor esi, esi
// 005d8ed3  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 005d8ed7  7602                 jbe 0x5d8edb
// 005d8ed9  ffd3                 call ebx
// 005d8edb  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 005d8ee0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d8ee4  7304                 jae 0x5d8eea
// 005d8ee6  8d44242c             lea eax, [esp + 0x2c]
// 005d8eea  803c3030             cmp byte ptr [eax + esi], 0x30
// 005d8eee  7424                 je 0x5d8f14
// 005d8ef0  3b74243c             cmp esi, dword ptr [esp + 0x3c]
// 005d8ef4  7602                 jbe 0x5d8ef8
// 005d8ef6  ffd3                 call ebx
// 005d8ef8  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 005d8efd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d8f01  7304                 jae 0x5d8f07
// 005d8f03  8d44242c             lea eax, [esp + 0x2c]
// 005d8f07  0fb60430             movzx eax, byte ptr [eax + esi]
// 005d8f0b  50                   push eax
// 005d8f0c  8bcd                 mov ecx, ebp
// 005d8f0e  ff1558e58900         call dword ptr [0x89e558]
// 005d8f14  8d7e01               lea edi, [esi + 1]
// 005d8f17  3b7c243c             cmp edi, dword ptr [esp + 0x3c]
// 005d8f1b  7602                 jbe 0x5d8f1f
// 005d8f1d  ffd3                 call ebx
// 005d8f1f  837c244010           cmp dword ptr [esp + 0x40], 0x10
// 005d8f24  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d8f28  7304                 jae 0x5d8f2e
// 005d8f2a  8d44242c             lea eax, [esp + 0x2c]
// 005d8f2e  0fb60c07             movzx ecx, byte ptr [edi + eax]
// 005d8f32  51                   push ecx
// 005d8f33  8bcd                 mov ecx, ebp
// 005d8f35  ff1558e58900         call dword ptr [0x89e558]
// 005d8f3b  83c602               add esi, 2
// 005d8f3e  83fe20               cmp esi, 0x20
// 005d8f41  7c90                 jl 0x5d8ed3
// 005d8f43  8d4c2428             lea ecx, [esp + 0x28]
// 005d8f47  c644241c00           mov byte ptr [esp + 0x1c], 0
// 005d8f4c  ff15c4e48900         call dword ptr [0x89e4c4]
// 005d8f52  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d8f56  5f                   pop edi
// 005d8f57  5e                   pop esi
// 005d8f58  8bc5                 mov eax, ebp
// 005d8f5a  5d                   pop ebp
// 005d8f5b  5b                   pop ebx
// 005d8f5c  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8f63  83c410               add esp, 0x10
// 005d8f66  c3                   ret 
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