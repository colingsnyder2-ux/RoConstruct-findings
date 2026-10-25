// from server: 100% by Espeon
// roc 2008-06 0040e160  unit: CBrowserView  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e160
//
// 0040e160  6aff                 push -1
// 0040e162  688a237c00           push 0x7c238a
// 0040e167  64a100000000         mov eax, dword ptr fs:[0]
// 0040e16d  50                   push eax
// 0040e16e  64892500000000       mov dword ptr fs:[0], esp
// 0040e175  51                   push ecx
// 0040e176  53                   push ebx
// 0040e177  56                   push esi
// 0040e178  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040e17c  33db                 xor ebx, ebx
// 0040e17e  57                   push edi
// 0040e17f  8bce                 mov ecx, esi
// 0040e181  895c240c             mov dword ptr [esp + 0xc], ebx
// 0040e185  ff15ec2f8000         call dword ptr [0x802fec]
// 0040e18b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040e18f  50                   push eax
// 0040e190  8bcf                 mov ecx, edi
// 0040e192  ff15e82f8000         call dword ptr [0x802fe8]
// 0040e198  895c2418             mov dword ptr [esp + 0x18], ebx
// 0040e19c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0040e1a0  53                   push ebx
// 0040e1a1  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0040e1a9  ff15e42f8000         call dword ptr [0x802fe4]
// 0040e1af  83c404               add esp, 4
// 0040e1b2  50                   push eax
// 0040e1b3  53                   push ebx
// 0040e1b4  8bce                 mov ecx, esi
// 0040e1b6  ff15e02f8000         call dword ptr [0x802fe0]
// 0040e1bc  50                   push eax
// 0040e1bd  8bce                 mov ecx, esi
// 0040e1bf  ff15e03e8000         call dword ptr [0x803ee0]
// 0040e1c5  50                   push eax
// 0040e1c6  57                   push edi
// 0040e1c7  ff15dc2f8000         call dword ptr [0x802fdc]
// 0040e1cd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0040e1d1  83c414               add esp, 0x14
// 0040e1d4  8bc7                 mov eax, edi
// 0040e1d6  5f                   pop edi
// 0040e1d7  5e                   pop esi
// 0040e1d8  5b                   pop ebx
// 0040e1d9  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e1e0  83c410               add esp, 0x10
// 0040e1e3  c3                   ret 

// from server: 81% by king_originala
struct String;

extern void* (__thiscall *getManager)(const String*);
extern void (__thiscall *constructString)(String*, void*);
extern unsigned int (__cdecl *stringLength)(const char*);
extern int (__thiscall *getLength)(const String*);
extern const char* (__thiscall *getString)(const String*);
extern void (__cdecl *concatenate)(String*, const char*, int, const char*, unsigned int);

struct String {
    char* data;
    __declspec(dllimport) void* manager() const throw();
    __declspec(dllimport) String(void* manager) throw();
    String(const String&);
    ~String() throw();
};

String __cdecl operator+(const String& source, const char* suffix)
{
    String result(source.manager());
    unsigned int length = stringLength(suffix);
    concatenate(&result, getString(&source), getLength(&source), suffix, length);
    return result;
}
