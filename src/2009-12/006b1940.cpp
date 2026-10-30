// roc 2009-12 006b1940  unit: RBX::DropperTool  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b1940
//
// 006b1940  83ec1c               sub esp, 0x1c
// 006b1943  56                   push esi
// 006b1944  8b742424             mov esi, dword ptr [esp + 0x24]
// 006b1948  57                   push edi
// 006b1949  6a02                 push 2
// 006b194b  6a00                 push 0
// 006b194d  68203f9d00           push 0x9d3f20
// 006b1952  8bce                 mov ecx, esi
// 006b1954  ff158cb49800         call dword ptr [0x98b48c]
// 006b195a  8bf8                 mov edi, eax
// 006b195c  85ff                 test edi, edi
// 006b195e  7d08                 jge 0x6b1968
// 006b1960  5f                   pop edi
// 006b1961  32c0                 xor al, al
// 006b1963  5e                   pop esi
// 006b1964  83c41c               add esp, 0x1c
// 006b1967  c3                   ret 
// 006b1968  57                   push edi
// 006b1969  6a00                 push 0
// 006b196b  8d442410             lea eax, [esp + 0x10]
// 006b196f  50                   push eax
// 006b1970  8bce                 mov ecx, esi
// 006b1972  ff15a8b69800         call dword ptr [0x98b6a8]
// 006b1978  83781810             cmp dword ptr [eax + 0x18], 0x10
// 006b197c  7205                 jb 0x6b1983
// 006b197e  8b4004               mov eax, dword ptr [eax + 4]
// 006b1981  eb03                 jmp 0x6b1986
// 006b1983  83c004               add eax, 4
// 006b1986  53                   push ebx
// 006b1987  8b1d98b79800         mov ebx, dword ptr [0x98b798]
// 006b198d  55                   push ebp
// 006b198e  50                   push eax
// 006b198f  ffd3                 call ebx
// 006b1991  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 006b1995  83c404               add esp, 4
// 006b1998  8d4c2410             lea ecx, [esp + 0x10]
// 006b199c  66894500             mov word ptr [ebp], ax
// 006b19a0  ff15e4b69800         call dword ptr [0x98b6e4]
// 006b19a6  8b4614               mov eax, dword ptr [esi + 0x14]
// 006b19a9  8d4f01               lea ecx, [edi + 1]
// 006b19ac  3bc1                 cmp eax, ecx
// 006b19ae  7d0a                 jge 0x6b19ba
// 006b19b0  5d                   pop ebp
// 006b19b1  5b                   pop ebx
// 006b19b2  5f                   pop edi
// 006b19b3  32c0                 xor al, al
// 006b19b5  5e                   pop esi
// 006b19b6  83c41c               add esp, 0x1c
// 006b19b9  c3                   ret 
// 006b19ba  2bc1                 sub eax, ecx
// 006b19bc  50                   push eax
// 006b19bd  51                   push ecx
// 006b19be  8d4c2418             lea ecx, [esp + 0x18]
// 006b19c2  51                   push ecx
// 006b19c3  8bce                 mov ecx, esi
// 006b19c5  ff15a8b69800         call dword ptr [0x98b6a8]
// 006b19cb  83781810             cmp dword ptr [eax + 0x18], 0x10
// 006b19cf  7205                 jb 0x6b19d6
// 006b19d1  8b4004               mov eax, dword ptr [eax + 4]
// 006b19d4  eb03                 jmp 0x6b19d9
// 006b19d6  83c004               add eax, 4
// 006b19d9  50                   push eax
// 006b19da  ffd3                 call ebx
// 006b19dc  83c404               add esp, 4
// 006b19df  8d4c2410             lea ecx, [esp + 0x10]
// 006b19e3  66894502             mov word ptr [ebp + 2], ax
// 006b19e7  ff15e4b69800         call dword ptr [0x98b6e4]
// 006b19ed  5d                   pop ebp
// 006b19ee  5b                   pop ebx
// 006b19ef  5f                   pop edi
// 006b19f0  b001                 mov al, 1
// 006b19f2  5e                   pop esi
// 006b19f3  83c41c               add esp, 0x1c
// 006b19f6  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_005be950@@YA_NPBUString@@PAF@Z)

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