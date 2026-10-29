// roc 2009-12 005ec030  unit: G3D::Shader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec030
//
// 005ec030  64a100000000         mov eax, dword ptr fs:[0]
// 005ec036  6aff                 push -1
// 005ec038  68a9e59200           push 0x92e5a9
// 005ec03d  50                   push eax
// 005ec03e  64892500000000       mov dword ptr fs:[0], esp
// 005ec045  83ec24               sub esp, 0x24
// 005ec048  56                   push esi
// 005ec049  8d442404             lea eax, [esp + 4]
// 005ec04d  50                   push eax
// 005ec04e  8bf1                 mov esi, ecx
// 005ec050  ff1510b89800         call dword ptr [0x98b810]
// 005ec056  23c2                 and eax, edx
// 005ec058  83c404               add esp, 4
// 005ec05b  83f8ff               cmp eax, -1
// 005ec05e  7558                 jne 0x5ec0b8
// 005ec060  68d41e9c00           push 0x9c1ed4
// 005ec065  8d4c2410             lea ecx, [esp + 0x10]
// 005ec069  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ec06f  837e0400             cmp dword ptr [esi + 4], 0
// 005ec073  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005ec07b  7429                 je 0x5ec0a6
// 005ec07d  8bce                 mov ecx, esi
// 005ec07f  e8acffffff           call 0x5ec030
// 005ec084  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 005ec089  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ec08d  7304                 jae 0x5ec093
// 005ec08f  8d442410             lea eax, [esp + 0x10]
// 005ec093  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ec096  50                   push eax
// 005ec097  6830ea9b00           push 0x9bea30
// 005ec09c  51                   push ecx
// 005ec09d  ff1500b89800         call dword ptr [0x98b800]
// 005ec0a3  83c40c               add esp, 0xc
// 005ec0a6  8d4c240c             lea ecx, [esp + 0xc]
// 005ec0aa  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005ec0b2  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ec0b8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ec0bc  5e                   pop esi
// 005ec0bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec0c4  83c430               add esp, 0x30
// 005ec0c7  c3                   ret 
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