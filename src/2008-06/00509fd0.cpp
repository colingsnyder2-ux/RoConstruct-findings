// from server: 100% by king_originala
// roc 2008-06 00509fd0  unit: G3D::Shader  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509fd0
//
// 00509fd0  6aff                 push -1
// 00509fd2  6885bd7c00           push 0x7cbd85
// 00509fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00509fdd  50                   push eax
// 00509fde  64892500000000       mov dword ptr fs:[0], esp
// 00509fe5  83ec20               sub esp, 0x20
// 00509fe8  56                   push esi
// 00509fe9  8bf1                 mov esi, ecx
// 00509feb  89742404             mov dword ptr [esp + 4], esi
// 00509fef  c706587a8200         mov dword ptr [esi], 0x827a58
// 00509ff5  68e47a8200           push 0x827ae4
// 00509ffa  8d4c240c             lea ecx, [esp + 0xc]
// 00509ffe  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0050a006  ff1558248000         call dword ptr [0x802458]
// 0050a00c  8d442408             lea eax, [esp + 8]
// 0050a010  50                   push eax
// 0050a011  8bce                 mov ecx, esi
// 0050a013  e878feffff           call 0x509e90
// 0050a018  8d4c2408             lea ecx, [esp + 8]
// 0050a01c  ff1568248000         call dword ptr [0x802468]
// 0050a022  68d07a8200           push 0x827ad0
// 0050a027  8d4c240c             lea ecx, [esp + 0xc]
// 0050a02b  ff1558248000         call dword ptr [0x802458]
// 0050a031  837e0400             cmp dword ptr [esi + 4], 0
// 0050a035  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0050a03a  7429                 je 0x50a065
// 0050a03c  8bce                 mov ecx, esi
// 0050a03e  e8edfeffff           call 0x509f30
// 0050a043  837c242010           cmp dword ptr [esp + 0x20], 0x10
// 0050a048  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050a04c  7304                 jae 0x50a052
// 0050a04e  8d44240c             lea eax, [esp + 0xc]
// 0050a052  8b4e04               mov ecx, dword ptr [esi + 4]
// 0050a055  50                   push eax
// 0050a056  68b47a8200           push 0x827ab4
// 0050a05b  51                   push ecx
// 0050a05c  ff151c288000         call dword ptr [0x80281c]
// 0050a062  83c40c               add esp, 0xc
// 0050a065  8d4c2408             lea ecx, [esp + 8]
// 0050a069  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0050a06e  ff1568248000         call dword ptr [0x802468]
// 0050a074  3935d4359700         cmp dword ptr [0x9735d4], esi
// 0050a07a  750a                 jne 0x50a086
// 0050a07c  c705d435970000000000 mov dword ptr [0x9735d4], 0
// 0050a086  8b4604               mov eax, dword ptr [esi + 4]
// 0050a089  85c0                 test eax, eax
// 0050a08b  740a                 je 0x50a097
// 0050a08d  50                   push eax
// 0050a08e  ff15d4278000         call dword ptr [0x8027d4]
// 0050a094  83c404               add esp, 4
// 0050a097  8d4e08               lea ecx, [esi + 8]
// 0050a09a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0050a0a2  ff1568248000         call dword ptr [0x802468]
// 0050a0a8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0050a0ac  5e                   pop esi
// 0050a0ad  64890d00000000       mov dword ptr fs:[0], ecx
// 0050a0b4  83c42c               add esp, 0x2c
// 0050a0b7  c3                   ret 

struct String;

extern void (__thiscall *string_construct)(String *, const char *);
extern void (__thiscall *string_destroy)(String *);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char *pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const char *text) {
        string_construct(this, text);
    }

    ~String() {
        string_destroy(this);
    }
};

extern int (__cdecl *fprintf)(void *, const char *, ...);
extern int (__cdecl *fclose)(void *);

extern const char closing_message[];
extern const char shutdown_message[];
extern const char log_format[];

struct S {
    void *file;
    String name;

    virtual ~S();
    void log(const String &) throw();
    void timestamp();
};

extern S *current;

S::~S()
{
    log(String(closing_message));

    {
        String message(shutdown_message);
        if (file) {
            timestamp();
            fprintf(file, log_format,
                    message.capacity >= 16 ? message.pointer : message.buffer);
        }
    }

    if (current == this)
        current = 0;

    if (file)
        fclose(file);
}
