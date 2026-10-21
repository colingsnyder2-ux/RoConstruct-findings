// from server: 91% by EspClaude
// roc 2008-06 00568460  unit: boost::thread_resource_error  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568460
//
// 00568460  6aff                 push -1
// 00568462  683af67c00           push 0x7cf63a
// 00568467  64a100000000         mov eax, dword ptr fs:[0]
// 0056846d  50                   push eax
// 0056846e  64892500000000       mov dword ptr fs:[0], esp
// 00568475  51                   push ecx
// 00568476  56                   push esi
// 00568477  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056847b  6a00                 push 0
// 0056847d  6a01                 push 1
// 0056847f  56                   push esi
// 00568480  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00568488  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00568490  e82bf60300           call 0x5a7ac0
// 00568495  83c40c               add esp, 0xc
// 00568498  837e1400             cmp dword ptr [esi + 0x14], 0
// 0056849c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005684a4  c744240401000000     mov dword ptr [esp + 4], 1
// 005684ac  760d                 jbe 0x5684bb
// 005684ae  6848ef8200           push 0x82ef48
// 005684b3  8bce                 mov ecx, esi
// 005684b5  ff1548248000         call dword ptr [0x802448]
// 005684bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005684bf  8bc6                 mov eax, esi
// 005684c1  5e                   pop esi
// 005684c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005684c9  83c410               add esp, 0x10
// 005684cc  c3                   ret 

// from server: 89% by king_originala
// roc 2008-06 00568460  unit: boost::thread_resource_error  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568460
//
// 00568460  6aff                 push -1
// 00568462  683af67c00           push 0x7cf63a
// 00568467  64a100000000         mov eax, dword ptr fs:[0]
// 0056846d  50                   push eax
// 0056846e  64892500000000       mov dword ptr fs:[0], esp
// 00568475  51                   push ecx
// 00568476  56                   push esi
// 00568477  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056847b  6a00                 push 0
// 0056847d  6a01                 push 1
// 0056847f  56                   push esi
// 00568480  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00568488  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00568490  e82bf60300           call 0x5a7ac0
// 00568495  83c40c               add esp, 0xc
// 00568498  837e1400             cmp dword ptr [esi + 0x14], 0
// 0056849c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005684a4  c744240401000000     mov dword ptr [esp + 4], 1
// 005684ac  760d                 jbe 0x5684bb
// 005684ae  6848ef8200           push 0x82ef48
// 005684b3  8bce                 mov ecx, esi
// 005684b5  ff1548248000         call dword ptr [0x802448]
// 005684bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005684bf  8bc6                 mov eax, esi
// 005684c1  5e                   pop esi
// 005684c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005684c9  83c410               add esp, 0x10
// 005684cc  c3                   ret 

struct String;
extern void __cdecl construct_string(String *, unsigned int, char);
extern String &(__thiscall *append_string)(String *, const char *);

struct StringBase
{
    ~StringBase();
};

struct String : StringBase
{
    char storage[20];
    unsigned int length;
    unsigned int capacity;

    String();
    ~String();
};

inline String::String()
{
    construct_string(this, 1, 0);
}

String func_00568460()
{
    String result;
    if (result.length > 0)
        append_string(&result, "\\GlobalSettings7.xml");
    return result;
}
