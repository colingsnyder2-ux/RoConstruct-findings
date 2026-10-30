// roc 2010-06 0054f710  unit: G3D::Shader  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f710
//
// 0054f710  6aff                 push -1
// 0054f712  68c50c9900           push 0x990cc5
// 0054f717  64a100000000         mov eax, dword ptr fs:[0]
// 0054f71d  50                   push eax
// 0054f71e  64892500000000       mov dword ptr fs:[0], esp
// 0054f725  83ec20               sub esp, 0x20
// 0054f728  56                   push esi
// 0054f729  8bf1                 mov esi, ecx
// 0054f72b  89742404             mov dword ptr [esp + 4], esi
// 0054f72f  c706d0fba100         mov dword ptr [esi], 0xa1fbd0
// 0054f735  6858fca100           push 0xa1fc58
// 0054f73a  8d4c240c             lea ecx, [esp + 0xc]
// 0054f73e  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0054f746  ff1510a49e00         call dword ptr [0x9ea410]
// 0054f74c  8d442408             lea eax, [esp + 8]
// 0054f750  50                   push eax
// 0054f751  8bce                 mov ecx, esi
// 0054f753  e878feffff           call 0x54f5d0
// 0054f758  8d4c2408             lea ecx, [esp + 8]
// 0054f75c  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f762  6844fca100           push 0xa1fc44
// 0054f767  8d4c240c             lea ecx, [esp + 0xc]
// 0054f76b  ff1510a49e00         call dword ptr [0x9ea410]
// 0054f771  837e0400             cmp dword ptr [esi + 4], 0
// 0054f775  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0054f77a  7429                 je 0x54f7a5
// 0054f77c  8bce                 mov ecx, esi
// 0054f77e  e8edfeffff           call 0x54f670
// 0054f783  837c242010           cmp dword ptr [esp + 0x20], 0x10
// 0054f788  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054f78c  7304                 jae 0x54f792
// 0054f78e  8d44240c             lea eax, [esp + 0xc]
// 0054f792  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054f795  50                   push eax
// 0054f796  68d8c9a100           push 0xa1c9d8
// 0054f79b  51                   push ecx
// 0054f79c  ff151ca79e00         call dword ptr [0x9ea71c]
// 0054f7a2  83c40c               add esp, 0xc
// 0054f7a5  8d4c2408             lea ecx, [esp + 8]
// 0054f7a9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0054f7ae  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f7b4  39351c9fc000         cmp dword ptr [0xc09f1c], esi
// 0054f7ba  750a                 jne 0x54f7c6
// 0054f7bc  c7051c9fc00000000000 mov dword ptr [0xc09f1c], 0
// 0054f7c6  8b4604               mov eax, dword ptr [esi + 4]
// 0054f7c9  85c0                 test eax, eax
// 0054f7cb  740a                 je 0x54f7d7
// 0054f7cd  50                   push eax
// 0054f7ce  ff1580a79e00         call dword ptr [0x9ea780]
// 0054f7d4  83c404               add esp, 4
// 0054f7d7  8d4e08               lea ecx, [esi + 8]
// 0054f7da  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0054f7e2  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f7e8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054f7ec  5e                   pop esi
// 0054f7ed  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f7f4  83c42c               add esp, 0x2c
// 0054f7f7  c3                   ret 
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