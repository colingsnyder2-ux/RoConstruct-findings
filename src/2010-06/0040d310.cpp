// roc 2010-06 0040d310  unit: CIDEBrowserView  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040d310
//
// 0040d310  6aff                 push -1
// 0040d312  686a359800           push 0x98356a
// 0040d317  64a100000000         mov eax, dword ptr fs:[0]
// 0040d31d  50                   push eax
// 0040d31e  64892500000000       mov dword ptr fs:[0], esp
// 0040d325  51                   push ecx
// 0040d326  53                   push ebx
// 0040d327  56                   push esi
// 0040d328  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040d32c  33db                 xor ebx, ebx
// 0040d32e  57                   push edi
// 0040d32f  8bce                 mov ecx, esi
// 0040d331  895c240c             mov dword ptr [esp + 0xc], ebx
// 0040d335  ff15d8cd9e00         call dword ptr [0x9ecdd8]
// 0040d33b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040d33f  50                   push eax
// 0040d340  8bcf                 mov ecx, edi
// 0040d342  ff15dccd9e00         call dword ptr [0x9ecddc]
// 0040d348  895c2418             mov dword ptr [esp + 0x18], ebx
// 0040d34c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0040d350  53                   push ebx
// 0040d351  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0040d359  ff15e0cd9e00         call dword ptr [0x9ecde0]
// 0040d35f  83c404               add esp, 4
// 0040d362  50                   push eax
// 0040d363  53                   push ebx
// 0040d364  8bce                 mov ecx, esi
// 0040d366  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0040d36c  50                   push eax
// 0040d36d  8bce                 mov ecx, esi
// 0040d36f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0040d375  50                   push eax
// 0040d376  57                   push edi
// 0040d377  ff15e8cd9e00         call dword ptr [0x9ecde8]
// 0040d37d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0040d381  83c414               add esp, 0x14
// 0040d384  8bc7                 mov eax, edi
// 0040d386  5f                   pop edi
// 0040d387  5e                   pop esi
// 0040d388  5b                   pop ebx
// 0040d389  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d390  83c410               add esp, 0x10
// 0040d393  c3                   ret 
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