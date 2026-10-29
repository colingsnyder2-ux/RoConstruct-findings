// roc 2009-12 005ebff0  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ebff0
//
// 005ebff0  56                   push esi
// 005ebff1  8bf1                 mov esi, ecx
// 005ebff3  837e0400             cmp dword ptr [esi + 4], 0
// 005ebff7  742a                 je 0x5ec023
// 005ebff9  e832000000           call 0x5ec030
// 005ebffe  8b442408             mov eax, dword ptr [esp + 8]
// 005ec002  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ec006  7205                 jb 0x5ec00d
// 005ec008  8b4004               mov eax, dword ptr [eax + 4]
// 005ec00b  eb03                 jmp 0x5ec010
// 005ec00d  83c004               add eax, 4
// 005ec010  50                   push eax
// 005ec011  8b4604               mov eax, dword ptr [esi + 4]
// 005ec014  6830ea9b00           push 0x9bea30
// 005ec019  50                   push eax
// 005ec01a  ff1500b89800         call dword ptr [0x98b800]
// 005ec020  83c40c               add esp, 0xc
// 005ec023  5e                   pop esi
// 005ec024  c20400               ret 4
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