// roc 2009-06 0064bbf0  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064bbf0
//
// 0064bbf0  83ec1c               sub esp, 0x1c
// 0064bbf3  56                   push esi
// 0064bbf4  8b742424             mov esi, dword ptr [esp + 0x24]
// 0064bbf8  57                   push edi
// 0064bbf9  6a02                 push 2
// 0064bbfb  6a00                 push 0
// 0064bbfd  6898f18d00           push 0x8df198
// 0064bc02  8bce                 mov ecx, esi
// 0064bc04  ff1598e68900         call dword ptr [0x89e698]
// 0064bc0a  8bf8                 mov edi, eax
// 0064bc0c  85ff                 test edi, edi
// 0064bc0e  7d08                 jge 0x64bc18
// 0064bc10  5f                   pop edi
// 0064bc11  32c0                 xor al, al
// 0064bc13  5e                   pop esi
// 0064bc14  83c41c               add esp, 0x1c
// 0064bc17  c3                   ret 
// 0064bc18  57                   push edi
// 0064bc19  6a00                 push 0
// 0064bc1b  8d442410             lea eax, [esp + 0x10]
// 0064bc1f  50                   push eax
// 0064bc20  8bce                 mov ecx, esi
// 0064bc22  ff1570e48900         call dword ptr [0x89e470]
// 0064bc28  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0064bc2c  7205                 jb 0x64bc33
// 0064bc2e  8b4004               mov eax, dword ptr [eax + 4]
// 0064bc31  eb03                 jmp 0x64bc36
// 0064bc33  83c004               add eax, 4
// 0064bc36  53                   push ebx
// 0064bc37  8b1d74e98900         mov ebx, dword ptr [0x89e974]
// 0064bc3d  55                   push ebp
// 0064bc3e  50                   push eax
// 0064bc3f  ffd3                 call ebx
// 0064bc41  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0064bc45  83c404               add esp, 4
// 0064bc48  8d4c2410             lea ecx, [esp + 0x10]
// 0064bc4c  66894500             mov word ptr [ebp], ax
// 0064bc50  ff15c4e48900         call dword ptr [0x89e4c4]
// 0064bc56  8b4614               mov eax, dword ptr [esi + 0x14]
// 0064bc59  8d4f01               lea ecx, [edi + 1]
// 0064bc5c  3bc1                 cmp eax, ecx
// 0064bc5e  7d0a                 jge 0x64bc6a
// 0064bc60  5d                   pop ebp
// 0064bc61  5b                   pop ebx
// 0064bc62  5f                   pop edi
// 0064bc63  32c0                 xor al, al
// 0064bc65  5e                   pop esi
// 0064bc66  83c41c               add esp, 0x1c
// 0064bc69  c3                   ret 
// 0064bc6a  2bc1                 sub eax, ecx
// 0064bc6c  50                   push eax
// 0064bc6d  51                   push ecx
// 0064bc6e  8d4c2418             lea ecx, [esp + 0x18]
// 0064bc72  51                   push ecx
// 0064bc73  8bce                 mov ecx, esi
// 0064bc75  ff1570e48900         call dword ptr [0x89e470]
// 0064bc7b  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0064bc7f  7205                 jb 0x64bc86
// 0064bc81  8b4004               mov eax, dword ptr [eax + 4]
// 0064bc84  eb03                 jmp 0x64bc89
// 0064bc86  83c004               add eax, 4
// 0064bc89  50                   push eax
// 0064bc8a  ffd3                 call ebx
// 0064bc8c  83c404               add esp, 4
// 0064bc8f  8d4c2410             lea ecx, [esp + 0x10]
// 0064bc93  66894502             mov word ptr [ebp + 2], ax
// 0064bc97  ff15c4e48900         call dword ptr [0x89e4c4]
// 0064bc9d  5d                   pop ebp
// 0064bc9e  5b                   pop ebx
// 0064bc9f  5f                   pop edi
// 0064bca0  b001                 mov al, 1
// 0064bca2  5e                   pop esi
// 0064bca3  83c41c               add esp, 0x1c
// 0064bca6  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YA_NPBUString@@PAF@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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