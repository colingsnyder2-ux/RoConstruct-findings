// from server: 100% by tester
// roc 2008-06 00509e90  unit: G3D::Shader  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509e90
//
// 00509e90  57                   push edi
// 00509e91  8bf9                 mov edi, ecx
// 00509e93  8b4704               mov eax, dword ptr [edi + 4]
// 00509e96  85c0                 test eax, eax
// 00509e98  7446                 je 0x509ee0
// 00509e9a  56                   push esi
// 00509e9b  8b351c288000         mov esi, dword ptr [0x80281c]
// 00509ea1  687c7a8200           push 0x827a7c
// 00509ea6  50                   push eax
// 00509ea7  ffd6                 call esi
// 00509ea9  8b442414             mov eax, dword ptr [esp + 0x14]
// 00509ead  83c408               add esp, 8
// 00509eb0  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00509eb4  7217                 jb 0x509ecd
// 00509eb6  8b4004               mov eax, dword ptr [eax + 4]
// 00509eb9  50                   push eax
// 00509eba  8b4704               mov eax, dword ptr [edi + 4]
// 00509ebd  68647a8200           push 0x827a64
// 00509ec2  50                   push eax
// 00509ec3  ffd6                 call esi
// 00509ec5  83c40c               add esp, 0xc
// 00509ec8  5e                   pop esi
// 00509ec9  5f                   pop edi
// 00509eca  c20400               ret 4
// 00509ecd  83c004               add eax, 4
// 00509ed0  50                   push eax
// 00509ed1  8b4704               mov eax, dword ptr [edi + 4]
// 00509ed4  68647a8200           push 0x827a64
// 00509ed9  50                   push eax
// 00509eda  ffd6                 call esi
// 00509edc  83c40c               add esp, 0xc
// 00509edf  5e                   pop esi
// 00509ee0  5f                   pop edi
// 00509ee1  c20400               ret 4

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
