// roc 2012-06 004159a0  unit: CIDEBrowserView  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004159a0
//
// 004159a0  6aff                 push -1
// 004159a2  684a0faa00           push 0xaa0f4a
// 004159a7  64a100000000         mov eax, dword ptr fs:[0]
// 004159ad  50                   push eax
// 004159ae  64892500000000       mov dword ptr fs:[0], esp
// 004159b5  51                   push ecx
// 004159b6  53                   push ebx
// 004159b7  56                   push esi
// 004159b8  8b742420             mov esi, dword ptr [esp + 0x20]
// 004159bc  33db                 xor ebx, ebx
// 004159be  57                   push edi
// 004159bf  8bce                 mov ecx, esi
// 004159c1  895c240c             mov dword ptr [esp + 0xc], ebx
// 004159c5  ff154c46b200         call dword ptr [0xb2464c]
// 004159cb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004159cf  50                   push eax
// 004159d0  8bcf                 mov ecx, edi
// 004159d2  ff155046b200         call dword ptr [0xb24650]
// 004159d8  895c2418             mov dword ptr [esp + 0x18], ebx
// 004159dc  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004159e0  53                   push ebx
// 004159e1  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004159e9  ff155446b200         call dword ptr [0xb24654]
// 004159ef  83c404               add esp, 4
// 004159f2  50                   push eax
// 004159f3  53                   push ebx
// 004159f4  8bce                 mov ecx, esi
// 004159f6  ff155846b200         call dword ptr [0xb24658]
// 004159fc  50                   push eax
// 004159fd  8bce                 mov ecx, esi
// 004159ff  ff159847b200         call dword ptr [0xb24798]
// 00415a05  50                   push eax
// 00415a06  57                   push edi
// 00415a07  ff155c46b200         call dword ptr [0xb2465c]
// 00415a0d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00415a11  83c414               add esp, 0x14
// 00415a14  8bc7                 mov eax, edi
// 00415a16  5f                   pop edi
// 00415a17  5e                   pop esi
// 00415a18  5b                   pop ebx
// 00415a19  64890d00000000       mov dword ptr fs:[0], ecx
// 00415a20  83c410               add esp, 0x10
// 00415a23  c3                   ret 
// copied from an identical function in another client (function ??H@YA?AUString@@ABU0@PBD@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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