// from server: 100% by king_originala
// roc 2008-06 0050a0c0  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050a0c0
//
// 0050a0c0  56                   push esi
// 0050a0c1  8bf1                 mov esi, ecx
// 0050a0c3  837e0400             cmp dword ptr [esi + 4], 0
// 0050a0c7  742a                 je 0x50a0f3
// 0050a0c9  e862feffff           call 0x509f30
// 0050a0ce  8b442408             mov eax, dword ptr [esp + 8]
// 0050a0d2  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0050a0d6  7205                 jb 0x50a0dd
// 0050a0d8  8b4004               mov eax, dword ptr [eax + 4]
// 0050a0db  eb03                 jmp 0x50a0e0
// 0050a0dd  83c004               add eax, 4
// 0050a0e0  50                   push eax
// 0050a0e1  8b4604               mov eax, dword ptr [esi + 4]
// 0050a0e4  68ac038100           push 0x8103ac
// 0050a0e9  50                   push eax
// 0050a0ea  ff151c288000         call dword ptr [0x80281c]
// 0050a0f0  83c40c               add esp, 0xc
// 0050a0f3  5e                   pop esi
// 0050a0f4  c20400               ret 4

struct Text {
    unsigned int allocator;
    union {
        char buffer[16];
        char *pointer;
    };
    unsigned int length;
    unsigned int capacity;
};

extern int (__cdecl *printCall)(void *, const char *, ...);
extern const char format[];

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
        const char *p;
        if (text.capacity >= 16)
            p = text.pointer;
        else
            p = text.buffer;
        printCall(stream, format, p);
    }
}
