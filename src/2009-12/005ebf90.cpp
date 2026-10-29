// roc 2009-12 005ebf90  unit: G3D::Shader  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ebf90
//
// 005ebf90  57                   push edi
// 005ebf91  8bf9                 mov edi, ecx
// 005ebf93  8b4704               mov eax, dword ptr [edi + 4]
// 005ebf96  85c0                 test eax, eax
// 005ebf98  7446                 je 0x5ebfe0
// 005ebf9a  56                   push esi
// 005ebf9b  8b3500b89800         mov esi, dword ptr [0x98b800]
// 005ebfa1  689c1e9c00           push 0x9c1e9c
// 005ebfa6  50                   push eax
// 005ebfa7  ffd6                 call esi
// 005ebfa9  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ebfad  83c408               add esp, 8
// 005ebfb0  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ebfb4  7217                 jb 0x5ebfcd
// 005ebfb6  8b4004               mov eax, dword ptr [eax + 4]
// 005ebfb9  50                   push eax
// 005ebfba  8b4704               mov eax, dword ptr [edi + 4]
// 005ebfbd  68841e9c00           push 0x9c1e84
// 005ebfc2  50                   push eax
// 005ebfc3  ffd6                 call esi
// 005ebfc5  83c40c               add esp, 0xc
// 005ebfc8  5e                   pop esi
// 005ebfc9  5f                   pop edi
// 005ebfca  c20400               ret 4
// 005ebfcd  83c004               add eax, 4
// 005ebfd0  50                   push eax
// 005ebfd1  8b4704               mov eax, dword ptr [edi + 4]
// 005ebfd4  68841e9c00           push 0x9c1e84
// 005ebfd9  50                   push eax
// 005ebfda  ffd6                 call esi
// 005ebfdc  83c40c               add esp, 0xc
// 005ebfdf  5e                   pop esi
// 005ebfe0  5f                   pop edi
// 005ebfe1  c20400               ret 4
// copied from an identical function in another client (function ?write@Shader@@QAEXABUString@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" int (__cdecl *fprintf)(void *, const char *, ...);

struct String {
    unsigned allocator;
    union {
        char buffer[16];
        char *pointer;
    };
    unsigned length;
    unsigned capacity;
};

struct Shader {
    unsigned reserved;
    void *file;
    void write(const String &text);
};

void Shader::write(const String &text)
{
    if (file) {
        int (__cdecl *print)(void *, const char *, ...) = fprintf;
        print(file, "_____________________________________________________\n");
        print(file, "\n    ###    %s    ###\n\n",
              text.capacity >= 16 ? text.pointer : text.buffer);
    }
}