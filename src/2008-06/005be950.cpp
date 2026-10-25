// from server: 100% by king_originala
// roc 2008-06 005be950  unit: RBX::Soundscape::SoundService  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005be950
//
// 005be950  83ec1c               sub esp, 0x1c
// 005be953  56                   push esi
// 005be954  8b742424             mov esi, dword ptr [esp + 0x24]
// 005be958  57                   push edi
// 005be959  6a02                 push 2
// 005be95b  6a00                 push 0
// 005be95d  6860848300           push 0x838460
// 005be962  8bce                 mov ecx, esi
// 005be964  ff15c4248000         call dword ptr [0x8024c4]
// 005be96a  8bf8                 mov edi, eax
// 005be96c  85ff                 test edi, edi
// 005be96e  7d08                 jge 0x5be978
// 005be970  5f                   pop edi
// 005be971  32c0                 xor al, al
// 005be973  5e                   pop esi
// 005be974  83c41c               add esp, 0x1c
// 005be977  c3                   ret 
// 005be978  57                   push edi
// 005be979  6a00                 push 0
// 005be97b  8d442410             lea eax, [esp + 0x10]
// 005be97f  50                   push eax
// 005be980  8bce                 mov ecx, esi
// 005be982  ff15e0238000         call dword ptr [0x8023e0]
// 005be988  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005be98c  7205                 jb 0x5be993
// 005be98e  8b4004               mov eax, dword ptr [eax + 4]
// 005be991  eb03                 jmp 0x5be996
// 005be993  83c004               add eax, 4
// 005be996  53                   push ebx
// 005be997  8b1d68288000         mov ebx, dword ptr [0x802868]
// 005be99d  55                   push ebp
// 005be99e  50                   push eax
// 005be99f  ffd3                 call ebx
// 005be9a1  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005be9a5  83c404               add esp, 4
// 005be9a8  8d4c2410             lea ecx, [esp + 0x10]
// 005be9ac  66894500             mov word ptr [ebp], ax
// 005be9b0  ff1568248000         call dword ptr [0x802468]
// 005be9b6  8b4614               mov eax, dword ptr [esi + 0x14]
// 005be9b9  8d4f01               lea ecx, [edi + 1]
// 005be9bc  3bc1                 cmp eax, ecx
// 005be9be  7d0a                 jge 0x5be9ca
// 005be9c0  5d                   pop ebp
// 005be9c1  5b                   pop ebx
// 005be9c2  5f                   pop edi
// 005be9c3  32c0                 xor al, al
// 005be9c5  5e                   pop esi
// 005be9c6  83c41c               add esp, 0x1c
// 005be9c9  c3                   ret 
// 005be9ca  2bc1                 sub eax, ecx
// 005be9cc  50                   push eax
// 005be9cd  51                   push ecx
// 005be9ce  8d4c2418             lea ecx, [esp + 0x18]
// 005be9d2  51                   push ecx
// 005be9d3  8bce                 mov ecx, esi
// 005be9d5  ff15e0238000         call dword ptr [0x8023e0]
// 005be9db  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005be9df  7205                 jb 0x5be9e6
// 005be9e1  8b4004               mov eax, dword ptr [eax + 4]
// 005be9e4  eb03                 jmp 0x5be9e9
// 005be9e6  83c004               add eax, 4
// 005be9e9  50                   push eax
// 005be9ea  ffd3                 call ebx
// 005be9ec  83c404               add esp, 4
// 005be9ef  8d4c2410             lea ecx, [esp + 0x10]
// 005be9f3  66894502             mov word ptr [ebp + 2], ax
// 005be9f7  ff1568248000         call dword ptr [0x802468]
// 005be9fd  5d                   pop ebp
// 005be9fe  5b                   pop ebx
// 005be9ff  5f                   pop edi
// 005bea00  b001                 mov al, 1
// 005bea02  5e                   pop esi
// 005bea03  83c41c               add esp, 0x1c
// 005bea06  c3                   ret 

struct String
{
    unsigned int allocator;
    union
    {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

extern const char separators[3];
extern unsigned int (__thiscall *find_first_of)(
    const String*, const char*, unsigned int, unsigned int);
extern String* (__thiscall *substring)(
    const String*, String*, unsigned int, unsigned int);
extern void (__thiscall *destroy_string)(String*);
extern int (__cdecl *convert_integer)(const char*);

bool func_005be950(const String* source, short* output)
{
    String temporary;
    int position = find_first_of(source, separators, 0, 2);
    if (position < 0)
        return false;

    String* part = substring(source, &temporary, 0, position);
    const char* text =
        part->capacity >= 16 ? part->storage.pointer : part->storage.buffer;
    int (__cdecl *convert)(const char*) = convert_integer;
    output[0] = (short)convert(text);
    destroy_string(&temporary);

    int next = position + 1;
    if ((int)source->length < next)
        return false;

    part = substring(source, &temporary, next, source->length - next);
    output[1] = (short)convert(
        part->capacity >= 16 ? part->storage.pointer : part->storage.buffer);
    destroy_string(&temporary);
    return true;
}
