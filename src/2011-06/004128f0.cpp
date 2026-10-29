// roc 2011-06 004128f0  unit: CIDEBrowserView  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004128f0
//
// 004128f0  6aff                 push -1
// 004128f2  681add9c00           push 0x9cdd1a
// 004128f7  64a100000000         mov eax, dword ptr fs:[0]
// 004128fd  50                   push eax
// 004128fe  64892500000000       mov dword ptr fs:[0], esp
// 00412905  51                   push ecx
// 00412906  53                   push ebx
// 00412907  56                   push esi
// 00412908  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041290c  33db                 xor ebx, ebx
// 0041290e  57                   push edi
// 0041290f  8bce                 mov ecx, esi
// 00412911  895c240c             mov dword ptr [esp + 0xc], ebx
// 00412915  ff159c26a400         call dword ptr [0xa4269c]
// 0041291b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0041291f  50                   push eax
// 00412920  8bcf                 mov ecx, edi
// 00412922  ff15a026a400         call dword ptr [0xa426a0]
// 00412928  895c2418             mov dword ptr [esp + 0x18], ebx
// 0041292c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00412930  53                   push ebx
// 00412931  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00412939  ff15a426a400         call dword ptr [0xa426a4]
// 0041293f  83c404               add esp, 4
// 00412942  50                   push eax
// 00412943  53                   push ebx
// 00412944  8bce                 mov ecx, esi
// 00412946  ff15a826a400         call dword ptr [0xa426a8]
// 0041294c  50                   push eax
// 0041294d  8bce                 mov ecx, esi
// 0041294f  ff15c82da400         call dword ptr [0xa42dc8]
// 00412955  50                   push eax
// 00412956  57                   push edi
// 00412957  ff15ac26a400         call dword ptr [0xa426ac]
// 0041295d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00412961  83c414               add esp, 0x14
// 00412964  8bc7                 mov eax, edi
// 00412966  5f                   pop edi
// 00412967  5e                   pop esi
// 00412968  5b                   pop ebx
// 00412969  64890d00000000       mov dword ptr fs:[0], ecx
// 00412970  83c410               add esp, 0x10
// 00412973  c3                   ret 
// copied from an identical function in another client (function ??Hns_ROCX000009@@YA?AUString@0@ABU10@PBD@Z)

namespace ns_ROCX000009 {
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
}
