// from server: 100% by king_originala
// roc 2008-06 00509cc0  unit: G3D::Shader  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509cc0
//
// 00509cc0  6aff                 push -1
// 00509cc2  685cbd7c00           push 0x7cbd5c
// 00509cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00509ccd  50                   push eax
// 00509cce  64892500000000       mov dword ptr fs:[0], esp
// 00509cd5  83ec0c               sub esp, 0xc
// 00509cd8  53                   push ebx
// 00509cd9  56                   push esi
// 00509cda  8bf1                 mov esi, ecx
// 00509cdc  57                   push edi
// 00509cdd  8d7e08               lea edi, [esi + 8]
// 00509ce0  8bcf                 mov ecx, edi
// 00509ce2  8974240c             mov dword ptr [esp + 0xc], esi
// 00509ce6  c706587a8200         mov dword ptr [esi], 0x827a58
// 00509cec  ff1560248000         call dword ptr [0x802460]
// 00509cf2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00509cf6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00509cfa  53                   push ebx
// 00509cfb  8bcf                 mov ecx, edi
// 00509cfd  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00509d05  894624               mov dword ptr [esi + 0x24], eax
// 00509d08  ff150c248000         call dword ptr [0x80240c]
// 00509d0e  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00509d12  7205                 jb 0x509d19
// 00509d14  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00509d17  eb03                 jmp 0x509d1c
// 00509d19  83c304               add ebx, 4
// 00509d1c  68507a8200           push 0x827a50
// 00509d21  53                   push ebx
// 00509d22  ff1514288000         call dword ptr [0x802814]
// 00509d28  83c408               add esp, 8
// 00509d2b  894604               mov dword ptr [esi + 4], eax
// 00509d2e  85c0                 test eax, eax
// 00509d30  744d                 je 0x509d7f
// 00509d32  6a00                 push 0
// 00509d34  6a04                 push 4
// 00509d36  6a00                 push 0
// 00509d38  50                   push eax
// 00509d39  ff158c278000         call dword ptr [0x80278c]
// 00509d3f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00509d42  8b3d1c288000         mov edi, dword ptr [0x80281c]
// 00509d48  683c7a8200           push 0x827a3c
// 00509d4d  51                   push ecx
// 00509d4e  ffd7                 call edi
// 00509d50  8d542428             lea edx, [esp + 0x28]
// 00509d54  52                   push edx
// 00509d55  ff1508288000         call dword ptr [0x802808]
// 00509d5b  8d44242c             lea eax, [esp + 0x2c]
// 00509d5f  50                   push eax
// 00509d60  ff1590278000         call dword ptr [0x802790]
// 00509d66  8b4e04               mov ecx, dword ptr [esi + 4]
// 00509d69  50                   push eax
// 00509d6a  68307a8200           push 0x827a30
// 00509d6f  51                   push ecx
// 00509d70  ffd7                 call edi
// 00509d72  8b5604               mov edx, dword ptr [esi + 4]
// 00509d75  52                   push edx
// 00509d76  ff1518288000         call dword ptr [0x802818]
// 00509d7c  83c430               add esp, 0x30
// 00509d7f  833dd435970000       cmp dword ptr [0x9735d4], 0
// 00509d86  8bc6                 mov eax, esi
// 00509d88  7506                 jne 0x509d90
// 00509d8a  8935d4359700         mov dword ptr [0x9735d4], esi
// 00509d90  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00509d94  5f                   pop edi
// 00509d95  5e                   pop esi
// 00509d96  5b                   pop ebx
// 00509d97  64890d00000000       mov dword ptr fs:[0], ecx
// 00509d9e  83c418               add esp, 0x18
// 00509da1  c20800               ret 8

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
