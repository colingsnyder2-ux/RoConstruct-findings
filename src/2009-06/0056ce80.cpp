// roc 2009-06 0056ce80  unit: G3D::Shader  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ce80
//
// 0056ce80  57                   push edi
// 0056ce81  8bf9                 mov edi, ecx
// 0056ce83  8b4704               mov eax, dword ptr [edi + 4]
// 0056ce86  85c0                 test eax, eax
// 0056ce88  7446                 je 0x56ced0
// 0056ce8a  56                   push esi
// 0056ce8b  8b3518e98900         mov esi, dword ptr [0x89e918]
// 0056ce91  6814b08c00           push 0x8cb014
// 0056ce96  50                   push eax
// 0056ce97  ffd6                 call esi
// 0056ce99  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056ce9d  83c408               add esp, 8
// 0056cea0  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0056cea4  7217                 jb 0x56cebd
// 0056cea6  8b4004               mov eax, dword ptr [eax + 4]
// 0056cea9  50                   push eax
// 0056ceaa  8b4704               mov eax, dword ptr [edi + 4]
// 0056cead  68fcaf8c00           push 0x8caffc
// 0056ceb2  50                   push eax
// 0056ceb3  ffd6                 call esi
// 0056ceb5  83c40c               add esp, 0xc
// 0056ceb8  5e                   pop esi
// 0056ceb9  5f                   pop edi
// 0056ceba  c20400               ret 4
// 0056cebd  83c004               add eax, 4
// 0056cec0  50                   push eax
// 0056cec1  8b4704               mov eax, dword ptr [edi + 4]
// 0056cec4  68fcaf8c00           push 0x8caffc
// 0056cec9  50                   push eax
// 0056ceca  ffd6                 call esi
// 0056cecc  83c40c               add esp, 0xc
// 0056cecf  5e                   pop esi
// 0056ced0  5f                   pop edi
// 0056ced1  c20400               ret 4
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