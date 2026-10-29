// roc 2009-12 005ec1c0  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec1c0
//
// 005ec1c0  56                   push esi
// 005ec1c1  8bf1                 mov esi, ecx
// 005ec1c3  837e0400             cmp dword ptr [esi + 4], 0
// 005ec1c7  742a                 je 0x5ec1f3
// 005ec1c9  e862feffff           call 0x5ec030
// 005ec1ce  8b442408             mov eax, dword ptr [esp + 8]
// 005ec1d2  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ec1d6  7205                 jb 0x5ec1dd
// 005ec1d8  8b4004               mov eax, dword ptr [eax + 4]
// 005ec1db  eb03                 jmp 0x5ec1e0
// 005ec1dd  83c004               add eax, 4
// 005ec1e0  50                   push eax
// 005ec1e1  8b4604               mov eax, dword ptr [esi + 4]
// 005ec1e4  6810389a00           push 0x9a3810
// 005ec1e9  50                   push eax
// 005ec1ea  ff1500b89800         call dword ptr [0x98b800]
// 005ec1f0  83c40c               add esp, 0xc
// 005ec1f3  5e                   pop esi
// 005ec1f4  c20400               ret 4
// copied from an identical function in another client (function ?write@S@@QAEXABUText@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern int (__cdecl *printCall)(void *, const char *, ...);
extern const char format[];

struct Text {
    unsigned int allocator;
    union {
        char buffer[16];
        char *pointer;
    };
    unsigned int length;
    unsigned int capacity;
};

struct S {
    unsigned int reserved;
    void *stream;
    void prepare();
    void write(const Text &text);
};

void S::write(const Text &text)
{
    if (stream) {
        prepare();
        const char *data = text.capacity >= 16 ? text.pointer : text.buffer;
        printCall(stream, format, data);
    }
}