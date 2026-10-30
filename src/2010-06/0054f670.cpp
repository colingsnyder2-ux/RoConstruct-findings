// roc 2010-06 0054f670  unit: G3D::Shader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f670
//
// 0054f670  64a100000000         mov eax, dword ptr fs:[0]
// 0054f676  6aff                 push -1
// 0054f678  68095b9800           push 0x985b09
// 0054f67d  50                   push eax
// 0054f67e  64892500000000       mov dword ptr fs:[0], esp
// 0054f685  83ec24               sub esp, 0x24
// 0054f688  56                   push esi
// 0054f689  8d442404             lea eax, [esp + 4]
// 0054f68d  50                   push eax
// 0054f68e  8bf1                 mov esi, ecx
// 0054f690  ff152ca79e00         call dword ptr [0x9ea72c]
// 0054f696  23c2                 and eax, edx
// 0054f698  83c404               add esp, 4
// 0054f69b  83f8ff               cmp eax, -1
// 0054f69e  7558                 jne 0x54f6f8
// 0054f6a0  682cfca100           push 0xa1fc2c
// 0054f6a5  8d4c2410             lea ecx, [esp + 0x10]
// 0054f6a9  ff1510a49e00         call dword ptr [0x9ea410]
// 0054f6af  837e0400             cmp dword ptr [esi + 4], 0
// 0054f6b3  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0054f6bb  7429                 je 0x54f6e6
// 0054f6bd  8bce                 mov ecx, esi
// 0054f6bf  e8acffffff           call 0x54f670
// 0054f6c4  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 0054f6c9  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054f6cd  7304                 jae 0x54f6d3
// 0054f6cf  8d442410             lea eax, [esp + 0x10]
// 0054f6d3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054f6d6  50                   push eax
// 0054f6d7  68d8c9a100           push 0xa1c9d8
// 0054f6dc  51                   push ecx
// 0054f6dd  ff151ca79e00         call dword ptr [0x9ea71c]
// 0054f6e3  83c40c               add esp, 0xc
// 0054f6e6  8d4c240c             lea ecx, [esp + 0xc]
// 0054f6ea  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0054f6f2  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f6f8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0054f6fc  5e                   pop esi
// 0054f6fd  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f704  83c430               add esp, 0x30
// 0054f707  c3                   ret 
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