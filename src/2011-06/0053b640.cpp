// roc 2011-06 0053b640  unit: seg_00530000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053b640
//
// 0053b640  57                   push edi
// 0053b641  8bf9                 mov edi, ecx
// 0053b643  8b4704               mov eax, dword ptr [edi + 4]
// 0053b646  85c0                 test eax, eax
// 0053b648  7446                 je 0x53b690
// 0053b64a  56                   push esi
// 0053b64b  8b359009a400         mov esi, dword ptr [0xa40990]
// 0053b651  68fcf5a700           push 0xa7f5fc
// 0053b656  50                   push eax
// 0053b657  ffd6                 call esi
// 0053b659  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053b65d  83c408               add esp, 8
// 0053b660  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0053b664  7217                 jb 0x53b67d
// 0053b666  8b4004               mov eax, dword ptr [eax + 4]
// 0053b669  50                   push eax
// 0053b66a  8b4704               mov eax, dword ptr [edi + 4]
// 0053b66d  68e4f5a700           push 0xa7f5e4
// 0053b672  50                   push eax
// 0053b673  ffd6                 call esi
// 0053b675  83c40c               add esp, 0xc
// 0053b678  5e                   pop esi
// 0053b679  5f                   pop edi
// 0053b67a  c20400               ret 4
// 0053b67d  83c004               add eax, 4
// 0053b680  50                   push eax
// 0053b681  8b4704               mov eax, dword ptr [edi + 4]
// 0053b684  68e4f5a700           push 0xa7f5e4
// 0053b689  50                   push eax
// 0053b68a  ffd6                 call esi
// 0053b68c  83c40c               add esp, 0xc
// 0053b68f  5e                   pop esi
// 0053b690  5f                   pop edi
// 0053b691  c20400               ret 4
// copied from an identical function in another client (function ?write@Shader@ns_ROCX000008@@QAEXABUString@2@@Z)

namespace ns_ROCX000008 {
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
}
