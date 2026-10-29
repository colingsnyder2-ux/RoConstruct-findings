// roc 2010-06 0054f400  unit: G3D::Shader  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f400
//
// 0054f400  6aff                 push -1
// 0054f402  689c0c9900           push 0x990c9c
// 0054f407  64a100000000         mov eax, dword ptr fs:[0]
// 0054f40d  50                   push eax
// 0054f40e  64892500000000       mov dword ptr fs:[0], esp
// 0054f415  83ec0c               sub esp, 0xc
// 0054f418  53                   push ebx
// 0054f419  56                   push esi
// 0054f41a  8bf1                 mov esi, ecx
// 0054f41c  57                   push edi
// 0054f41d  8d7e08               lea edi, [esi + 8]
// 0054f420  8bcf                 mov ecx, edi
// 0054f422  8974240c             mov dword ptr [esp + 0xc], esi
// 0054f426  c706d0fba100         mov dword ptr [esi], 0xa1fbd0
// 0054f42c  ff1504a49e00         call dword ptr [0x9ea404]
// 0054f432  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0054f436  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0054f43a  53                   push ebx
// 0054f43b  8bcf                 mov ecx, edi
// 0054f43d  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0054f445  894624               mov dword ptr [esi + 0x24], eax
// 0054f448  ff1568a49e00         call dword ptr [0x9ea468]
// 0054f44e  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 0054f452  7205                 jb 0x54f459
// 0054f454  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0054f457  eb03                 jmp 0x54f45c
// 0054f459  83c304               add ebx, 4
// 0054f45c  68c8fba100           push 0xa1fbc8
// 0054f461  53                   push ebx
// 0054f462  ff1520a79e00         call dword ptr [0x9ea720]
// 0054f468  83c408               add esp, 8
// 0054f46b  894604               mov dword ptr [esi + 4], eax
// 0054f46e  85c0                 test eax, eax
// 0054f470  744d                 je 0x54f4bf
// 0054f472  6a00                 push 0
// 0054f474  6a04                 push 4
// 0054f476  6a00                 push 0
// 0054f478  50                   push eax
// 0054f479  ff15cca79e00         call dword ptr [0x9ea7cc]
// 0054f47f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054f482  8b3d1ca79e00         mov edi, dword ptr [0x9ea71c]
// 0054f488  68b4fba100           push 0xa1fbb4
// 0054f48d  51                   push ecx
// 0054f48e  ffd7                 call edi
// 0054f490  8d542428             lea edx, [esp + 0x28]
// 0054f494  52                   push edx
// 0054f495  ff152ca79e00         call dword ptr [0x9ea72c]
// 0054f49b  8d44242c             lea eax, [esp + 0x2c]
// 0054f49f  50                   push eax
// 0054f4a0  ff15c8a79e00         call dword ptr [0x9ea7c8]
// 0054f4a6  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054f4a9  50                   push eax
// 0054f4aa  68a8fba100           push 0xa1fba8
// 0054f4af  51                   push ecx
// 0054f4b0  ffd7                 call edi
// 0054f4b2  8b5604               mov edx, dword ptr [esi + 4]
// 0054f4b5  52                   push edx
// 0054f4b6  ff1558a89e00         call dword ptr [0x9ea858]
// 0054f4bc  83c430               add esp, 0x30
// 0054f4bf  833d1c9fc00000       cmp dword ptr [0xc09f1c], 0
// 0054f4c6  8bc6                 mov eax, esi
// 0054f4c8  7506                 jne 0x54f4d0
// 0054f4ca  89351c9fc000         mov dword ptr [0xc09f1c], esi
// 0054f4d0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054f4d4  5f                   pop edi
// 0054f4d5  5e                   pop esi
// 0054f4d6  5b                   pop ebx
// 0054f4d7  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f4de  83c418               add esp, 0x18
// 0054f4e1  c20800               ret 8
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