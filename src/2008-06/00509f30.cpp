// from server: 100% by king_originala
// roc 2008-06 00509f30  unit: G3D::Shader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509f30
//
// 00509f30  64a100000000         mov eax, dword ptr fs:[0]
// 00509f36  6aff                 push -1
// 00509f38  6809e77c00           push 0x7ce709
// 00509f3d  50                   push eax
// 00509f3e  64892500000000       mov dword ptr fs:[0], esp
// 00509f45  83ec24               sub esp, 0x24
// 00509f48  56                   push esi
// 00509f49  8d442404             lea eax, [esp + 4]
// 00509f4d  50                   push eax
// 00509f4e  8bf1                 mov esi, ecx
// 00509f50  ff1508288000         call dword ptr [0x802808]
// 00509f56  23c2                 and eax, edx
// 00509f58  83c404               add esp, 4
// 00509f5b  83f8ff               cmp eax, -1
// 00509f5e  7558                 jne 0x509fb8
// 00509f60  68b87a8200           push 0x827ab8
// 00509f65  8d4c2410             lea ecx, [esp + 0x10]
// 00509f69  ff1558248000         call dword ptr [0x802458]
// 00509f6f  837e0400             cmp dword ptr [esi + 4], 0
// 00509f73  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00509f7b  7429                 je 0x509fa6
// 00509f7d  8bce                 mov ecx, esi
// 00509f7f  e8acffffff           call 0x509f30
// 00509f84  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 00509f89  8b442410             mov eax, dword ptr [esp + 0x10]
// 00509f8d  7304                 jae 0x509f93
// 00509f8f  8d442410             lea eax, [esp + 0x10]
// 00509f93  8b4e04               mov ecx, dword ptr [esi + 4]
// 00509f96  50                   push eax
// 00509f97  68b47a8200           push 0x827ab4
// 00509f9c  51                   push ecx
// 00509f9d  ff151c288000         call dword ptr [0x80281c]
// 00509fa3  83c40c               add esp, 0xc
// 00509fa6  8d4c240c             lea ecx, [esp + 0xc]
// 00509faa  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00509fb2  ff1568248000         call dword ptr [0x802468]
// 00509fb8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00509fbc  5e                   pop esi
// 00509fbd  64890d00000000       mov dword ptr fs:[0], ecx
// 00509fc4  83c430               add esp, 0x30
// 00509fc7  c3                   ret 

struct Text;

extern "C" __int64 __cdecl _time64(__int64 *);
extern "C" int __cdecl fprintf(void *, const char *, ...);

extern __int64 (__cdecl *timeCall)(__int64 *);
extern int (__cdecl *printCall)(void *, const char *, ...);
extern void (__thiscall *constructText)(Text *, const char *);
extern void (__thiscall *destroyText)(Text *);

struct Text {
    unsigned int allocator;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    Text(const char *);
    ~Text();
};

inline Text::Text(const char *value) {
    constructText(this, value);
}

inline Text::~Text() {
    destroyText(this);
}

struct S {
    unsigned int reserved;
    void *file;

    void f();
};

void S::f() {
    __int64 value;
    if (timeCall(&value) == -1) {
        Text message("[Error getting time]");
        if (file) {
            f();
            const char *text = message.storage.pointer;
            if (message.capacity < 16)
                text = message.storage.buffer;
            printCall(file, "%s\n", text);
        }
    }
}
