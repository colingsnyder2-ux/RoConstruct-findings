// roc 2009-06 0044d370  unit: CRobloxDoc  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044d370
//
// 0044d370  6aff                 push -1
// 0044d372  689a1b8500           push 0x851b9a
// 0044d377  64a100000000         mov eax, dword ptr fs:[0]
// 0044d37d  50                   push eax
// 0044d37e  64892500000000       mov dword ptr fs:[0], esp
// 0044d385  51                   push ecx
// 0044d386  56                   push esi
// 0044d387  8b742420             mov esi, dword ptr [esp + 0x20]
// 0044d38b  57                   push edi
// 0044d38c  8bce                 mov ecx, esi
// 0044d38e  c744240800000000     mov dword ptr [esp + 8], 0
// 0044d396  ff1548fb8900         call dword ptr [0x89fb48]
// 0044d39c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0044d3a0  50                   push eax
// 0044d3a1  8bcf                 mov ecx, edi
// 0044d3a3  ff154cfb8900         call dword ptr [0x89fb4c]
// 0044d3a9  8bce                 mov ecx, esi
// 0044d3ab  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044d3b3  c744240801000000     mov dword ptr [esp + 8], 1
// 0044d3bb  ff1554fb8900         call dword ptr [0x89fb54]
// 0044d3c1  50                   push eax
// 0044d3c2  8bce                 mov ecx, esi
// 0044d3c4  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0044d3ca  8b742424             mov esi, dword ptr [esp + 0x24]
// 0044d3ce  50                   push eax
// 0044d3cf  56                   push esi
// 0044d3d0  ff1550fb8900         call dword ptr [0x89fb50]
// 0044d3d6  83c404               add esp, 4
// 0044d3d9  50                   push eax
// 0044d3da  56                   push esi
// 0044d3db  57                   push edi
// 0044d3dc  ff1558fb8900         call dword ptr [0x89fb58]
// 0044d3e2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0044d3e6  83c414               add esp, 0x14
// 0044d3e9  8bc7                 mov eax, edi
// 0044d3eb  5f                   pop edi
// 0044d3ec  5e                   pop esi
// 0044d3ed  64890d00000000       mov dword ptr fs:[0], ecx
// 0044d3f4  83c410               add esp, 0x10
// 0044d3f7  c3                   ret 
// copied from an identical function in another client (function ??H@YA?AUString@@PBDABU0@@Z)

// from server: 100% by Espeon
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