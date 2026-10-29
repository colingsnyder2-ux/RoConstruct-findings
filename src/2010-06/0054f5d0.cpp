// roc 2010-06 0054f5d0  unit: G3D::Shader  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f5d0
//
// 0054f5d0  57                   push edi
// 0054f5d1  8bf9                 mov edi, ecx
// 0054f5d3  8b4704               mov eax, dword ptr [edi + 4]
// 0054f5d6  85c0                 test eax, eax
// 0054f5d8  7446                 je 0x54f620
// 0054f5da  56                   push esi
// 0054f5db  8b351ca79e00         mov esi, dword ptr [0x9ea71c]
// 0054f5e1  68f4fba100           push 0xa1fbf4
// 0054f5e6  50                   push eax
// 0054f5e7  ffd6                 call esi
// 0054f5e9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054f5ed  83c408               add esp, 8
// 0054f5f0  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0054f5f4  7217                 jb 0x54f60d
// 0054f5f6  8b4004               mov eax, dword ptr [eax + 4]
// 0054f5f9  50                   push eax
// 0054f5fa  8b4704               mov eax, dword ptr [edi + 4]
// 0054f5fd  68dcfba100           push 0xa1fbdc
// 0054f602  50                   push eax
// 0054f603  ffd6                 call esi
// 0054f605  83c40c               add esp, 0xc
// 0054f608  5e                   pop esi
// 0054f609  5f                   pop edi
// 0054f60a  c20400               ret 4
// 0054f60d  83c004               add eax, 4
// 0054f610  50                   push eax
// 0054f611  8b4704               mov eax, dword ptr [edi + 4]
// 0054f614  68dcfba100           push 0xa1fbdc
// 0054f619  50                   push eax
// 0054f61a  ffd6                 call esi
// 0054f61c  83c40c               add esp, 0xc
// 0054f61f  5e                   pop esi
// 0054f620  5f                   pop edi
// 0054f621  c20400               ret 4
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