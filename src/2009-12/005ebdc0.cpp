// roc 2009-12 005ebdc0  unit: G3D::Shader  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ebdc0
//
// 005ebdc0  6aff                 push -1
// 005ebdc2  68fcee9300           push 0x93eefc
// 005ebdc7  64a100000000         mov eax, dword ptr fs:[0]
// 005ebdcd  50                   push eax
// 005ebdce  64892500000000       mov dword ptr fs:[0], esp
// 005ebdd5  83ec0c               sub esp, 0xc
// 005ebdd8  53                   push ebx
// 005ebdd9  56                   push esi
// 005ebdda  8bf1                 mov esi, ecx
// 005ebddc  57                   push edi
// 005ebddd  8d7e08               lea edi, [esi + 8]
// 005ebde0  8bcf                 mov ecx, edi
// 005ebde2  8974240c             mov dword ptr [esp + 0xc], esi
// 005ebde6  c706781e9c00         mov dword ptr [esi], 0x9c1e78
// 005ebdec  ff15e8b69800         call dword ptr [0x98b6e8]
// 005ebdf2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ebdf6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005ebdfa  53                   push ebx
// 005ebdfb  8bcf                 mov ecx, edi
// 005ebdfd  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005ebe05  894624               mov dword ptr [esi + 0x24], eax
// 005ebe08  ff159cb69800         call dword ptr [0x98b69c]
// 005ebe0e  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005ebe12  7205                 jb 0x5ebe19
// 005ebe14  8b5b04               mov ebx, dword ptr [ebx + 4]
// 005ebe17  eb03                 jmp 0x5ebe1c
// 005ebe19  83c304               add ebx, 4
// 005ebe1c  68701e9c00           push 0x9c1e70
// 005ebe21  53                   push ebx
// 005ebe22  ff1504b89800         call dword ptr [0x98b804]
// 005ebe28  83c408               add esp, 8
// 005ebe2b  894604               mov dword ptr [esi + 4], eax
// 005ebe2e  85c0                 test eax, eax
// 005ebe30  744d                 je 0x5ebe7f
// 005ebe32  6a00                 push 0
// 005ebe34  6a04                 push 4
// 005ebe36  6a00                 push 0
// 005ebe38  50                   push eax
// 005ebe39  ff15c0b89800         call dword ptr [0x98b8c0]
// 005ebe3f  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ebe42  8b3d00b89800         mov edi, dword ptr [0x98b800]
// 005ebe48  685c1e9c00           push 0x9c1e5c
// 005ebe4d  51                   push ecx
// 005ebe4e  ffd7                 call edi
// 005ebe50  8d542428             lea edx, [esp + 0x28]
// 005ebe54  52                   push edx
// 005ebe55  ff1510b89800         call dword ptr [0x98b810]
// 005ebe5b  8d44242c             lea eax, [esp + 0x2c]
// 005ebe5f  50                   push eax
// 005ebe60  ff15bcb89800         call dword ptr [0x98b8bc]
// 005ebe66  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ebe69  50                   push eax
// 005ebe6a  68501e9c00           push 0x9c1e50
// 005ebe6f  51                   push ecx
// 005ebe70  ffd7                 call edi
// 005ebe72  8b5604               mov edx, dword ptr [esi + 4]
// 005ebe75  52                   push edx
// 005ebe76  ff15ecb79800         call dword ptr [0x98b7ec]
// 005ebe7c  83c430               add esp, 0x30
// 005ebe7f  833d543eb80000       cmp dword ptr [0xb83e54], 0
// 005ebe86  8bc6                 mov eax, esi
// 005ebe88  7506                 jne 0x5ebe90
// 005ebe8a  8935543eb800         mov dword ptr [0xb83e54], esi
// 005ebe90  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ebe94  5f                   pop edi
// 005ebe95  5e                   pop esi
// 005ebe96  5b                   pop ebx
// 005ebe97  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebe9e  83c418               add esp, 0x18
// 005ebea1  c20800               ret 8
// copied from an identical function in another client (function ??0Log@@QAE@ABUString@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    String();
    ~String();
    String& operator=(const String&);
};

extern void (__thiscall *stringConstruct)(String*);
extern void (__thiscall *stringDestroy)(String*);
extern String& (__thiscall *stringAssign)(String*, const String&);

inline String::String()
{
    stringConstruct(this);
}

inline String::~String()
{
    stringDestroy(this);
}

inline String& String::operator=(const String& other)
{
    return stringAssign(this, other);
}

struct FILE;

extern "C" {
    extern FILE* (__cdecl *fopen)(const char*, const char*);
    extern int (__cdecl *setvbuf)(FILE*, char*, int, unsigned int);
    extern int (__cdecl *fprintf)(FILE*, const char*, ...);
    extern __int64 (__cdecl *_time64)(__int64*);
    extern char* (__cdecl *_ctime64)(const __int64*);
    extern int (__cdecl *fflush)(FILE*);
}

struct Log {
    virtual ~Log();
    FILE* file;
    String name;
    int level;

    Log(const String&, int);
};

extern Log* currentLog;

Log::Log(const String& filename, int value)
{
    level = value;
    name = filename;

    const char* path = filename.capacity >= 16
        ? filename.storage.pointer
        : filename.storage.buffer;

    file = fopen(path, "w");
    if (file) {
        setvbuf(file, 0, 4, 0);
        int (__cdecl *print)(FILE*, const char*, ...) = fprintf;
        print(file, "Application Log\n");

        __int64 now;
        _time64(&now);
        print(file, "Start: %s\n", _ctime64(&now));
        fflush(file);
    }

    if (currentLog == 0)
        currentLog = this;
}