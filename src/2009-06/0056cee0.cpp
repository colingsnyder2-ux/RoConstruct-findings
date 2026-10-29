// roc 2009-06 0056cee0  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056cee0
//
// 0056cee0  56                   push esi
// 0056cee1  8bf1                 mov esi, ecx
// 0056cee3  837e0400             cmp dword ptr [esi + 4], 0
// 0056cee7  742a                 je 0x56cf13
// 0056cee9  e832000000           call 0x56cf20
// 0056ceee  8b442408             mov eax, dword ptr [esp + 8]
// 0056cef2  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0056cef6  7205                 jb 0x56cefd
// 0056cef8  8b4004               mov eax, dword ptr [eax + 4]
// 0056cefb  eb03                 jmp 0x56cf00
// 0056cefd  83c004               add eax, 4
// 0056cf00  50                   push eax
// 0056cf01  8b4604               mov eax, dword ptr [esi + 4]
// 0056cf04  68d87f8c00           push 0x8c7fd8
// 0056cf09  50                   push eax
// 0056cf0a  ff1518e98900         call dword ptr [0x89e918]
// 0056cf10  83c40c               add esp, 0xc
// 0056cf13  5e                   pop esi
// 0056cf14  c20400               ret 4
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