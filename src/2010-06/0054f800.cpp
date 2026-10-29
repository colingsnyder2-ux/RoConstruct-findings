// roc 2010-06 0054f800  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f800
//
// 0054f800  56                   push esi
// 0054f801  8bf1                 mov esi, ecx
// 0054f803  837e0400             cmp dword ptr [esi + 4], 0
// 0054f807  742a                 je 0x54f833
// 0054f809  e862feffff           call 0x54f670
// 0054f80e  8b442408             mov eax, dword ptr [esp + 8]
// 0054f812  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0054f816  7205                 jb 0x54f81d
// 0054f818  8b4004               mov eax, dword ptr [eax + 4]
// 0054f81b  eb03                 jmp 0x54f820
// 0054f81d  83c004               add eax, 4
// 0054f820  50                   push eax
// 0054f821  8b4604               mov eax, dword ptr [esi + 4]
// 0054f824  68e444a000           push 0xa044e4
// 0054f829  50                   push eax
// 0054f82a  ff151ca79e00         call dword ptr [0x9ea71c]
// 0054f830  83c40c               add esp, 0xc
// 0054f833  5e                   pop esi
// 0054f834  c20400               ret 4
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