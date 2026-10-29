// roc 2009-12 0040cde0  unit: CIDEBrowserView  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040cde0
//
// 0040cde0  6aff                 push -1
// 0040cde2  68ca789200           push 0x9278ca
// 0040cde7  64a100000000         mov eax, dword ptr fs:[0]
// 0040cded  50                   push eax
// 0040cdee  64892500000000       mov dword ptr fs:[0], esp
// 0040cdf5  51                   push ecx
// 0040cdf6  53                   push ebx
// 0040cdf7  56                   push esi
// 0040cdf8  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040cdfc  33db                 xor ebx, ebx
// 0040cdfe  57                   push edi
// 0040cdff  8bce                 mov ecx, esi
// 0040ce01  895c240c             mov dword ptr [esp + 0xc], ebx
// 0040ce05  ff15a8dd9800         call dword ptr [0x98dda8]
// 0040ce0b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040ce0f  50                   push eax
// 0040ce10  8bcf                 mov ecx, edi
// 0040ce12  ff15acdd9800         call dword ptr [0x98ddac]
// 0040ce18  895c2418             mov dword ptr [esp + 0x18], ebx
// 0040ce1c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0040ce20  53                   push ebx
// 0040ce21  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0040ce29  ff15b0dd9800         call dword ptr [0x98ddb0]
// 0040ce2f  83c404               add esp, 4
// 0040ce32  50                   push eax
// 0040ce33  53                   push ebx
// 0040ce34  8bce                 mov ecx, esi
// 0040ce36  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0040ce3c  50                   push eax
// 0040ce3d  8bce                 mov ecx, esi
// 0040ce3f  ff1580de9800         call dword ptr [0x98de80]
// 0040ce45  50                   push eax
// 0040ce46  57                   push edi
// 0040ce47  ff15b8dd9800         call dword ptr [0x98ddb8]
// 0040ce4d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0040ce51  83c414               add esp, 0x14
// 0040ce54  8bc7                 mov eax, edi
// 0040ce56  5f                   pop edi
// 0040ce57  5e                   pop esi
// 0040ce58  5b                   pop ebx
// 0040ce59  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ce60  83c410               add esp, 0x10
// 0040ce63  c3                   ret 
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