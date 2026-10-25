// from server: 100% by king_originala
// roc 2008-06 00509ef0  unit: G3D::Shader  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509ef0
//
// 00509ef0  56                   push esi
// 00509ef1  8bf1                 mov esi, ecx
// 00509ef3  837e0400             cmp dword ptr [esi + 4], 0
// 00509ef7  742a                 je 0x509f23
// 00509ef9  e832000000           call 0x509f30
// 00509efe  8b442408             mov eax, dword ptr [esp + 8]
// 00509f02  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00509f06  7205                 jb 0x509f0d
// 00509f08  8b4004               mov eax, dword ptr [eax + 4]
// 00509f0b  eb03                 jmp 0x509f10
// 00509f0d  83c004               add eax, 4
// 00509f10  50                   push eax
// 00509f11  8b4604               mov eax, dword ptr [esi + 4]
// 00509f14  68b47a8200           push 0x827ab4
// 00509f19  50                   push eax
// 00509f1a  ff151c288000         call dword ptr [0x80281c]
// 00509f20  83c40c               add esp, 0xc
// 00509f23  5e                   pop esi
// 00509f24  c20400               ret 4

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
