// roc 2009-12 005ec0d0  unit: G3D::Shader  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec0d0
//
// 005ec0d0  6aff                 push -1
// 005ec0d2  6855ef9300           push 0x93ef55
// 005ec0d7  64a100000000         mov eax, dword ptr fs:[0]
// 005ec0dd  50                   push eax
// 005ec0de  64892500000000       mov dword ptr fs:[0], esp
// 005ec0e5  83ec20               sub esp, 0x20
// 005ec0e8  56                   push esi
// 005ec0e9  8bf1                 mov esi, ecx
// 005ec0eb  89742404             mov dword ptr [esp + 4], esi
// 005ec0ef  c706781e9c00         mov dword ptr [esi], 0x9c1e78
// 005ec0f5  68001f9c00           push 0x9c1f00
// 005ec0fa  8d4c240c             lea ecx, [esp + 0xc]
// 005ec0fe  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005ec106  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ec10c  8d442408             lea eax, [esp + 8]
// 005ec110  50                   push eax
// 005ec111  8bce                 mov ecx, esi
// 005ec113  e878feffff           call 0x5ebf90
// 005ec118  8d4c2408             lea ecx, [esp + 8]
// 005ec11c  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ec122  68ec1e9c00           push 0x9c1eec
// 005ec127  8d4c240c             lea ecx, [esp + 0xc]
// 005ec12b  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ec131  837e0400             cmp dword ptr [esi + 4], 0
// 005ec135  c644242c01           mov byte ptr [esp + 0x2c], 1
// 005ec13a  7429                 je 0x5ec165
// 005ec13c  8bce                 mov ecx, esi
// 005ec13e  e8edfeffff           call 0x5ec030
// 005ec143  837c242010           cmp dword ptr [esp + 0x20], 0x10
// 005ec148  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ec14c  7304                 jae 0x5ec152
// 005ec14e  8d44240c             lea eax, [esp + 0xc]
// 005ec152  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ec155  50                   push eax
// 005ec156  6830ea9b00           push 0x9bea30
// 005ec15b  51                   push ecx
// 005ec15c  ff1500b89800         call dword ptr [0x98b800]
// 005ec162  83c40c               add esp, 0xc
// 005ec165  8d4c2408             lea ecx, [esp + 8]
// 005ec169  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ec16e  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ec174  3935543eb800         cmp dword ptr [0xb83e54], esi
// 005ec17a  750a                 jne 0x5ec186
// 005ec17c  c705543eb80000000000 mov dword ptr [0xb83e54], 0
// 005ec186  8b4604               mov eax, dword ptr [esi + 4]
// 005ec189  85c0                 test eax, eax
// 005ec18b  740a                 je 0x5ec197
// 005ec18d  50                   push eax
// 005ec18e  ff1584b89800         call dword ptr [0x98b884]
// 005ec194  83c404               add esp, 4
// 005ec197  8d4e08               lea ecx, [esi + 8]
// 005ec19a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005ec1a2  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ec1a8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ec1ac  5e                   pop esi
// 005ec1ad  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec1b4  83c42c               add esp, 0x2c
// 005ec1b7  c3                   ret 
// copied from an identical function in another client (function ??1S@@UAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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