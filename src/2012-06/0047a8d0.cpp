// roc 2012-06 0047a8d0  unit: CRobloxDoc  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047a8d0
//
// 0047a8d0  6aff                 push -1
// 0047a8d2  684a0faa00           push 0xaa0f4a
// 0047a8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0047a8dd  50                   push eax
// 0047a8de  64892500000000       mov dword ptr fs:[0], esp
// 0047a8e5  51                   push ecx
// 0047a8e6  56                   push esi
// 0047a8e7  8b742420             mov esi, dword ptr [esp + 0x20]
// 0047a8eb  57                   push edi
// 0047a8ec  8bce                 mov ecx, esi
// 0047a8ee  c744240800000000     mov dword ptr [esp + 8], 0
// 0047a8f6  ff154c46b200         call dword ptr [0xb2464c]
// 0047a8fc  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047a900  50                   push eax
// 0047a901  8bcf                 mov ecx, edi
// 0047a903  ff155046b200         call dword ptr [0xb24650]
// 0047a909  8bce                 mov ecx, esi
// 0047a90b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0047a913  c744240801000000     mov dword ptr [esp + 8], 1
// 0047a91b  ff155846b200         call dword ptr [0xb24658]
// 0047a921  50                   push eax
// 0047a922  8bce                 mov ecx, esi
// 0047a924  ff159847b200         call dword ptr [0xb24798]
// 0047a92a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0047a92e  50                   push eax
// 0047a92f  56                   push esi
// 0047a930  ff155446b200         call dword ptr [0xb24654]
// 0047a936  83c404               add esp, 4
// 0047a939  50                   push eax
// 0047a93a  56                   push esi
// 0047a93b  57                   push edi
// 0047a93c  ff155c46b200         call dword ptr [0xb2465c]
// 0047a942  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0047a946  83c414               add esp, 0x14
// 0047a949  8bc7                 mov eax, edi
// 0047a94b  5f                   pop edi
// 0047a94c  5e                   pop esi
// 0047a94d  64890d00000000       mov dword ptr fs:[0], ecx
// 0047a954  83c410               add esp, 0x10
// 0047a957  c3                   ret 
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