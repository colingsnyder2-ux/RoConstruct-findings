// from server: 78% by colin
// from server: 67% by king_originala
// roc 2008-06 0044f220  unit: CRobloxDoc  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044f220
//
// 0044f220  6aff                 push -1
// 0044f222  688a237c00           push 0x7c238a
// 0044f227  64a100000000         mov eax, dword ptr fs:[0]
// 0044f22d  50                   push eax
// 0044f22e  64892500000000       mov dword ptr fs:[0], esp
// 0044f235  51                   push ecx
// 0044f236  56                   push esi
// 0044f237  8b742420             mov esi, dword ptr [esp + 0x20]
// 0044f23b  57                   push edi
// 0044f23c  8bce                 mov ecx, esi
// 0044f23e  c744240800000000     mov dword ptr [esp + 8], 0
// 0044f246  ff15ec2f8000         call dword ptr [0x802fec]
// 0044f24c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0044f250  50                   push eax
// 0044f251  8bcf                 mov ecx, edi
// 0044f253  ff15e82f8000         call dword ptr [0x802fe8]
// 0044f259  8bce                 mov ecx, esi
// 0044f25b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044f263  c744240801000000     mov dword ptr [esp + 8], 1
// 0044f26b  ff15e02f8000         call dword ptr [0x802fe0]
// 0044f271  50                   push eax
// 0044f272  8bce                 mov ecx, esi
// 0044f274  ff15e03e8000         call dword ptr [0x803ee0]
// 0044f27a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0044f27e  50                   push eax
// 0044f27f  56                   push esi
// 0044f280  ff15e42f8000         call dword ptr [0x802fe4]
// 0044f286  83c404               add esp, 4
// 0044f289  50                   push eax
// 0044f28a  56                   push esi
// 0044f28b  57                   push edi
// 0044f28c  ff15dc2f8000         call dword ptr [0x802fdc]
// 0044f292  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0044f296  83c414               add esp, 0x14
// 0044f299  8bc7                 mov eax, edi
// 0044f29b  5f                   pop edi
// 0044f29c  5e                   pop esi
// 0044f29d  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f2a4  83c410               add esp, 0x10
// 0044f2a7  c3                   ret 

struct __declspec(dllimport) String {
    void* data;
    String(void*);
    String(const String&);
    ~String();
    void* manager() const;
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
