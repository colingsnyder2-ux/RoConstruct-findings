// from server: 98% by colin
// roc 2008-06 0044c0d0  unit: CRobloxModule  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044c0d0
//
// 0044c0d0  64a100000000         mov eax, dword ptr fs:[0]
// 0044c0d6  6aff                 push -1
// 0044c0d8  6809e77c00           push 0x7ce709
// 0044c0dd  50                   push eax
// 0044c0de  64892500000000       mov dword ptr fs:[0], esp
// 0044c0e5  83ec1c               sub esp, 0x1c
// 0044c0e8  56                   push esi
// 0044c0e9  8b742430             mov esi, dword ptr [esp + 0x30]
// 0044c0ed  57                   push edi
// 0044c0ee  3b742438             cmp esi, dword ptr [esp + 0x38]
// 0044c0f2  7452                 je 0x44c146
// 0044c0f4  56                   push esi
// 0044c0f5  8d4c240c             lea ecx, [esp + 0xc]
// 0044c0f9  ff155c248000         call dword ptr [0x80245c]
// 0044c0ff  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0044c103  83ec1c               sub esp, 0x1c
// 0044c106  8d442424             lea eax, [esp + 0x24]
// 0044c10a  8bcc                 mov ecx, esp
// 0044c10c  89642450             mov dword ptr [esp + 0x50], esp
// 0044c110  50                   push eax
// 0044c111  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0044c119  ff155c248000         call dword ptr [0x80245c]
// 0044c11f  8bcf                 mov ecx, edi
// 0044c121  ff542458             call dword ptr [esp + 0x58]
// 0044c125  8d4c2408             lea ecx, [esp + 8]
// 0044c129  8bf8                 mov edi, eax
// 0044c12b  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0044c133  ff1568248000         call dword ptr [0x802468]
// 0044c139  85ff                 test edi, edi
// 0044c13b  7509                 jne 0x44c146
// 0044c13d  83c61c               add esi, 0x1c
// 0044c140  3b742438             cmp esi, dword ptr [esp + 0x38]
// 0044c144  75ae                 jne 0x44c0f4
// 0044c146  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044c14a  5f                   pop edi
// 0044c14b  8bc6                 mov eax, esi
// 0044c14d  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c154  5e                   pop esi
// 0044c155  83c428               add esp, 0x28
// 0044c158  c3                   ret 

// from server: 94% by colin
// from server: 92% by king_originala
// roc 2008-06 0044c0d0  unit: CRobloxModule  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044c0d0
//
// 0044c0d0  64a100000000         mov eax, dword ptr fs:[0]
// 0044c0d6  6aff                 push -1
// 0044c0d8  6809e77c00           push 0x7ce709
// 0044c0dd  50                   push eax
// 0044c0de  64892500000000       mov dword ptr fs:[0], esp
// 0044c0e5  83ec1c               sub esp, 0x1c
// 0044c0e8  56                   push esi
// 0044c0e9  8b742430             mov esi, dword ptr [esp + 0x30]
// 0044c0ed  57                   push edi
// 0044c0ee  3b742438             cmp esi, dword ptr [esp + 0x38]
// 0044c0f2  7452                 je 0x44c146
// 0044c0f4  56                   push esi
// 0044c0f5  8d4c240c             lea ecx, [esp + 0xc]
// 0044c0f9  ff155c248000         call dword ptr [0x80245c]
// 0044c0ff  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0044c103  83ec1c               sub esp, 0x1c
// 0044c106  8d442424             lea eax, [esp + 0x24]
// 0044c10a  8bcc                 mov ecx, esp
// 0044c10c  89642450             mov dword ptr [esp + 0x50], esp
// 0044c110  50                   push eax
// 0044c111  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0044c119  ff155c248000         call dword ptr [0x80245c]
// 0044c11f  8bcf                 mov ecx, edi
// 0044c121  ff542458             call dword ptr [esp + 0x58]
// 0044c125  8d4c2408             lea ecx, [esp + 8]
// 0044c129  8bf8                 mov edi, eax
// 0044c12b  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0044c133  ff1568248000         call dword ptr [0x802468]
// 0044c139  85ff                 test edi, edi
// 0044c13b  7509                 jne 0x44c146
// 0044c13d  83c61c               add esi, 0x1c
// 0044c140  3b742438             cmp esi, dword ptr [esp + 0x38]
// 0044c144  75ae                 jne 0x44c0f4
// 0044c146  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044c14a  5f                   pop edi
// 0044c14b  8bc6                 mov eax, esi
// 0044c14d  64890d00000000       mov dword ptr fs:[0], ecx
// 0044c154  5e                   pop esi
// 0044c155  83c428               add esp, 0x28
// 0044c158  c3                   ret 

struct String;

extern void (__thiscall *copy_string)(String*, const String&);
extern void (__thiscall *destroy_string)(String*);

struct String
{
    char data[28];
    String(const String&);
    ~String();
};

__forceinline String::String(const String& other)
{
    copy_string(this, other);
}

__forceinline String::~String()
{
    destroy_string(this);
}

typedef int (__thiscall *Predicate)(void*, String);

String* __cdecl find_if(String* first, String* last,
                       Predicate volatile predicate, void* volatile context)
{
    for (; first != last; ++first)
    {
        int result;
        {
            String value(*first);
            void* receiver = context;
            Predicate& call = const_cast<Predicate&>(predicate);
            result = call(receiver, value);
        }
        if (result)
            break;
    }
    return first;
}


