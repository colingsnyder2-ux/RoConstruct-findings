// roc 2010-06 0054f630  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f630
//
// 0054f630  56                   push esi
// 0054f631  8bf1                 mov esi, ecx
// 0054f633  837e0400             cmp dword ptr [esi + 4], 0
// 0054f637  742a                 je 0x54f663
// 0054f639  e832000000           call 0x54f670
// 0054f63e  8b442408             mov eax, dword ptr [esp + 8]
// 0054f642  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0054f646  7205                 jb 0x54f64d
// 0054f648  8b4004               mov eax, dword ptr [eax + 4]
// 0054f64b  eb03                 jmp 0x54f650
// 0054f64d  83c004               add eax, 4
// 0054f650  50                   push eax
// 0054f651  8b4604               mov eax, dword ptr [esi + 4]
// 0054f654  68d8c9a100           push 0xa1c9d8
// 0054f659  50                   push eax
// 0054f65a  ff151ca79e00         call dword ptr [0x9ea71c]
// 0054f660  83c40c               add esp, 0xc
// 0054f663  5e                   pop esi
// 0054f664  c20400               ret 4
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