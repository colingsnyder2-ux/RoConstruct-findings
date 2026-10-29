// roc 2009-06 0056cfc0  unit: G3D::Shader  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056cfc0
//
// 0056cfc0  6aff                 push -1
// 0056cfc2  6845008600           push 0x860045
// 0056cfc7  64a100000000         mov eax, dword ptr fs:[0]
// 0056cfcd  50                   push eax
// 0056cfce  64892500000000       mov dword ptr fs:[0], esp
// 0056cfd5  83ec20               sub esp, 0x20
// 0056cfd8  56                   push esi
// 0056cfd9  8bf1                 mov esi, ecx
// 0056cfdb  89742404             mov dword ptr [esp + 4], esi
// 0056cfdf  c706f0af8c00         mov dword ptr [esi], 0x8caff0
// 0056cfe5  6878b08c00           push 0x8cb078
// 0056cfea  8d4c240c             lea ecx, [esp + 0xc]
// 0056cfee  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0056cff6  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056cffc  8d442408             lea eax, [esp + 8]
// 0056d000  50                   push eax
// 0056d001  8bce                 mov ecx, esi
// 0056d003  e878feffff           call 0x56ce80
// 0056d008  8d4c2408             lea ecx, [esp + 8]
// 0056d00c  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056d012  6864b08c00           push 0x8cb064
// 0056d017  8d4c240c             lea ecx, [esp + 0xc]
// 0056d01b  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056d021  837e0400             cmp dword ptr [esi + 4], 0
// 0056d025  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0056d02a  7429                 je 0x56d055
// 0056d02c  8bce                 mov ecx, esi
// 0056d02e  e8edfeffff           call 0x56cf20
// 0056d033  837c242010           cmp dword ptr [esp + 0x20], 0x10
// 0056d038  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056d03c  7304                 jae 0x56d042
// 0056d03e  8d44240c             lea eax, [esp + 0xc]
// 0056d042  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056d045  50                   push eax
// 0056d046  68d87f8c00           push 0x8c7fd8
// 0056d04b  51                   push ecx
// 0056d04c  ff1518e98900         call dword ptr [0x89e918]
// 0056d052  83c40c               add esp, 0xc
// 0056d055  8d4c2408             lea ecx, [esp + 8]
// 0056d059  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0056d05e  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056d064  3935e429a400         cmp dword ptr [0xa429e4], esi
// 0056d06a  750a                 jne 0x56d076
// 0056d06c  c705e429a40000000000 mov dword ptr [0xa429e4], 0
// 0056d076  8b4604               mov eax, dword ptr [esi + 4]
// 0056d079  85c0                 test eax, eax
// 0056d07b  740a                 je 0x56d087
// 0056d07d  50                   push eax
// 0056d07e  ff15a4e88900         call dword ptr [0x89e8a4]
// 0056d084  83c404               add esp, 4
// 0056d087  8d4e08               lea ecx, [esi + 8]
// 0056d08a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0056d092  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056d098  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0056d09c  5e                   pop esi
// 0056d09d  64890d00000000       mov dword ptr fs:[0], ecx
// 0056d0a4  83c42c               add esp, 0x2c
// 0056d0a7  c3                   ret 
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