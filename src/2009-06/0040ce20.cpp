// roc 2009-06 0040ce20  unit: CIDEBrowserView  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040ce20
//
// 0040ce20  6aff                 push -1
// 0040ce22  689a1b8500           push 0x851b9a
// 0040ce27  64a100000000         mov eax, dword ptr fs:[0]
// 0040ce2d  50                   push eax
// 0040ce2e  64892500000000       mov dword ptr fs:[0], esp
// 0040ce35  51                   push ecx
// 0040ce36  53                   push ebx
// 0040ce37  56                   push esi
// 0040ce38  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040ce3c  33db                 xor ebx, ebx
// 0040ce3e  57                   push edi
// 0040ce3f  8bce                 mov ecx, esi
// 0040ce41  895c240c             mov dword ptr [esp + 0xc], ebx
// 0040ce45  ff1548fb8900         call dword ptr [0x89fb48]
// 0040ce4b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040ce4f  50                   push eax
// 0040ce50  8bcf                 mov ecx, edi
// 0040ce52  ff154cfb8900         call dword ptr [0x89fb4c]
// 0040ce58  895c2418             mov dword ptr [esp + 0x18], ebx
// 0040ce5c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0040ce60  53                   push ebx
// 0040ce61  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0040ce69  ff1550fb8900         call dword ptr [0x89fb50]
// 0040ce6f  83c404               add esp, 4
// 0040ce72  50                   push eax
// 0040ce73  53                   push ebx
// 0040ce74  8bce                 mov ecx, esi
// 0040ce76  ff1554fb8900         call dword ptr [0x89fb54]
// 0040ce7c  50                   push eax
// 0040ce7d  8bce                 mov ecx, esi
// 0040ce7f  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0040ce85  50                   push eax
// 0040ce86  57                   push edi
// 0040ce87  ff1558fb8900         call dword ptr [0x89fb58]
// 0040ce8d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0040ce91  83c414               add esp, 0x14
// 0040ce94  8bc7                 mov eax, edi
// 0040ce96  5f                   pop edi
// 0040ce97  5e                   pop esi
// 0040ce98  5b                   pop ebx
// 0040ce99  64890d00000000       mov dword ptr fs:[0], ecx
// 0040cea0  83c410               add esp, 0x10
// 0040cea3  c3                   ret 
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