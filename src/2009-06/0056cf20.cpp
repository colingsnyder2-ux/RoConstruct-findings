// roc 2009-06 0056cf20  unit: G3D::Shader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056cf20
//
// 0056cf20  64a100000000         mov eax, dword ptr fs:[0]
// 0056cf26  6aff                 push -1
// 0056cf28  68d9b88500           push 0x85b8d9
// 0056cf2d  50                   push eax
// 0056cf2e  64892500000000       mov dword ptr fs:[0], esp
// 0056cf35  83ec24               sub esp, 0x24
// 0056cf38  56                   push esi
// 0056cf39  8d442404             lea eax, [esp + 4]
// 0056cf3d  50                   push eax
// 0056cf3e  8bf1                 mov esi, ecx
// 0056cf40  ff1508e98900         call dword ptr [0x89e908]
// 0056cf46  23c2                 and eax, edx
// 0056cf48  83c404               add esp, 4
// 0056cf4b  83f8ff               cmp eax, -1
// 0056cf4e  7558                 jne 0x56cfa8
// 0056cf50  684cb08c00           push 0x8cb04c
// 0056cf55  8d4c2410             lea ecx, [esp + 0x10]
// 0056cf59  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056cf5f  837e0400             cmp dword ptr [esi + 4], 0
// 0056cf63  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0056cf6b  7429                 je 0x56cf96
// 0056cf6d  8bce                 mov ecx, esi
// 0056cf6f  e8acffffff           call 0x56cf20
// 0056cf74  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 0056cf79  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056cf7d  7304                 jae 0x56cf83
// 0056cf7f  8d442410             lea eax, [esp + 0x10]
// 0056cf83  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056cf86  50                   push eax
// 0056cf87  68d87f8c00           push 0x8c7fd8
// 0056cf8c  51                   push ecx
// 0056cf8d  ff1518e98900         call dword ptr [0x89e918]
// 0056cf93  83c40c               add esp, 0xc
// 0056cf96  8d4c240c             lea ecx, [esp + 0xc]
// 0056cf9a  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0056cfa2  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056cfa8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056cfac  5e                   pop esi
// 0056cfad  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cfb4  83c430               add esp, 0x30
// 0056cfb7  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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