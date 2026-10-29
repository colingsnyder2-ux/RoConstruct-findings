// roc 2009-06 0056d0b0  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d0b0
//
// 0056d0b0  56                   push esi
// 0056d0b1  8bf1                 mov esi, ecx
// 0056d0b3  837e0400             cmp dword ptr [esi + 4], 0
// 0056d0b7  742a                 je 0x56d0e3
// 0056d0b9  e862feffff           call 0x56cf20
// 0056d0be  8b442408             mov eax, dword ptr [esp + 8]
// 0056d0c2  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0056d0c6  7205                 jb 0x56d0cd
// 0056d0c8  8b4004               mov eax, dword ptr [eax + 4]
// 0056d0cb  eb03                 jmp 0x56d0d0
// 0056d0cd  83c004               add eax, 4
// 0056d0d0  50                   push eax
// 0056d0d1  8b4604               mov eax, dword ptr [esi + 4]
// 0056d0d4  68400b8b00           push 0x8b0b40
// 0056d0d9  50                   push eax
// 0056d0da  ff1518e98900         call dword ptr [0x89e918]
// 0056d0e0  83c40c               add esp, 0xc
// 0056d0e3  5e                   pop esi
// 0056d0e4  c20400               ret 4
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