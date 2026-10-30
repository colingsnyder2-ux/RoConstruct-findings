// roc 2009-06 0056ccb0  unit: G3D::Shader  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ccb0
//
// 0056ccb0  6aff                 push -1
// 0056ccb2  68ecff8500           push 0x85ffec
// 0056ccb7  64a100000000         mov eax, dword ptr fs:[0]
// 0056ccbd  50                   push eax
// 0056ccbe  64892500000000       mov dword ptr fs:[0], esp
// 0056ccc5  83ec0c               sub esp, 0xc
// 0056ccc8  53                   push ebx
// 0056ccc9  56                   push esi
// 0056ccca  8bf1                 mov esi, ecx
// 0056cccc  57                   push edi
// 0056cccd  8d7e08               lea edi, [esi + 8]
// 0056ccd0  8bcf                 mov ecx, edi
// 0056ccd2  8974240c             mov dword ptr [esp + 0xc], esi
// 0056ccd6  c706f0af8c00         mov dword ptr [esi], 0x8caff0
// 0056ccdc  ff15c0e48900         call dword ptr [0x89e4c0]
// 0056cce2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056cce6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0056ccea  53                   push ebx
// 0056cceb  8bcf                 mov ecx, edi
// 0056cced  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0056ccf5  894624               mov dword ptr [esi + 0x24], eax
// 0056ccf8  ff1564e48900         call dword ptr [0x89e464]
// 0056ccfe  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 0056cd02  7205                 jb 0x56cd09
// 0056cd04  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0056cd07  eb03                 jmp 0x56cd0c
// 0056cd09  83c304               add ebx, 4
// 0056cd0c  68e8af8c00           push 0x8cafe8
// 0056cd11  53                   push ebx
// 0056cd12  ff1514e98900         call dword ptr [0x89e914]
// 0056cd18  83c408               add esp, 8
// 0056cd1b  894604               mov dword ptr [esi + 4], eax
// 0056cd1e  85c0                 test eax, eax
// 0056cd20  744d                 je 0x56cd6f
// 0056cd22  6a00                 push 0
// 0056cd24  6a04                 push 4
// 0056cd26  6a00                 push 0
// 0056cd28  50                   push eax
// 0056cd29  ff1560e88900         call dword ptr [0x89e860]
// 0056cd2f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056cd32  8b3d18e98900         mov edi, dword ptr [0x89e918]
// 0056cd38  68d4af8c00           push 0x8cafd4
// 0056cd3d  51                   push ecx
// 0056cd3e  ffd7                 call edi
// 0056cd40  8d542428             lea edx, [esp + 0x28]
// 0056cd44  52                   push edx
// 0056cd45  ff1508e98900         call dword ptr [0x89e908]
// 0056cd4b  8d44242c             lea eax, [esp + 0x2c]
// 0056cd4f  50                   push eax
// 0056cd50  ff1564e88900         call dword ptr [0x89e864]
// 0056cd56  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056cd59  50                   push eax
// 0056cd5a  68c8af8c00           push 0x8cafc8
// 0056cd5f  51                   push ecx
// 0056cd60  ffd7                 call edi
// 0056cd62  8b5604               mov edx, dword ptr [esi + 4]
// 0056cd65  52                   push edx
// 0056cd66  ff152ce98900         call dword ptr [0x89e92c]
// 0056cd6c  83c430               add esp, 0x30
// 0056cd6f  833de429a40000       cmp dword ptr [0xa429e4], 0
// 0056cd76  8bc6                 mov eax, esi
// 0056cd78  7506                 jne 0x56cd80
// 0056cd7a  8935e429a400         mov dword ptr [0xa429e4], esi
// 0056cd80  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056cd84  5f                   pop edi
// 0056cd85  5e                   pop esi
// 0056cd86  5b                   pop ebx
// 0056cd87  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cd8e  83c418               add esp, 0x18
// 0056cd91  c20800               ret 8
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