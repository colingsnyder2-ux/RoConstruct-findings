// roc 2009-12 00454cc0  unit: CRobloxDoc  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00454cc0
//
// 00454cc0  6aff                 push -1
// 00454cc2  68ca789200           push 0x9278ca
// 00454cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00454ccd  50                   push eax
// 00454cce  64892500000000       mov dword ptr fs:[0], esp
// 00454cd5  51                   push ecx
// 00454cd6  56                   push esi
// 00454cd7  8b742420             mov esi, dword ptr [esp + 0x20]
// 00454cdb  57                   push edi
// 00454cdc  8bce                 mov ecx, esi
// 00454cde  c744240800000000     mov dword ptr [esp + 8], 0
// 00454ce6  ff15a8dd9800         call dword ptr [0x98dda8]
// 00454cec  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00454cf0  50                   push eax
// 00454cf1  8bcf                 mov ecx, edi
// 00454cf3  ff15acdd9800         call dword ptr [0x98ddac]
// 00454cf9  8bce                 mov ecx, esi
// 00454cfb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00454d03  c744240801000000     mov dword ptr [esp + 8], 1
// 00454d0b  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00454d11  50                   push eax
// 00454d12  8bce                 mov ecx, esi
// 00454d14  ff1580de9800         call dword ptr [0x98de80]
// 00454d1a  8b742424             mov esi, dword ptr [esp + 0x24]
// 00454d1e  50                   push eax
// 00454d1f  56                   push esi
// 00454d20  ff15b0dd9800         call dword ptr [0x98ddb0]
// 00454d26  83c404               add esp, 4
// 00454d29  50                   push eax
// 00454d2a  56                   push esi
// 00454d2b  57                   push edi
// 00454d2c  ff15b8dd9800         call dword ptr [0x98ddb8]
// 00454d32  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00454d36  83c414               add esp, 0x14
// 00454d39  8bc7                 mov eax, edi
// 00454d3b  5f                   pop edi
// 00454d3c  5e                   pop esi
// 00454d3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00454d44  83c410               add esp, 0x10
// 00454d47  c3                   ret 
// copied from an identical function in another client (function ??H@YA?AUString@@PBDABU0@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD

struct __declspec(dllimport) String {
    void* data;
    String(void*) throw();
    String(const String&);
    ~String() throw();
    void* manager() const throw();
    int length() const;
    const char* text() const;
};

extern void* (__thiscall *get_manager)(const String*);
extern void (__thiscall *construct_string)(String*, void*);
extern int (__thiscall *get_length)(const String*);
extern const char* (__thiscall *get_text)(const String*);
extern int (__cdecl *string_length)(const char*);
extern void (__cdecl *concatenate)(String*, const char*, int,
                                  const char*, int);

String __cdecl operator+(const char* left, const String& right)
{
    String result(right.manager());
    concatenate(&result, left, string_length(left),
                right.text(), right.length());
    return result;
}