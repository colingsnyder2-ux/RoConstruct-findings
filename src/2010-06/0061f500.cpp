// roc 2010-06 0061f500  unit: RBX::DropperTool  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0061f500
//
// 0061f500  83ec1c               sub esp, 0x1c
// 0061f503  56                   push esi
// 0061f504  8b742424             mov esi, dword ptr [esp + 0x24]
// 0061f508  57                   push edi
// 0061f509  6a02                 push 2
// 0061f50b  6a00                 push 0
// 0061f50d  68e829a300           push 0xa329e8
// 0061f512  8bce                 mov ecx, esi
// 0061f514  ff1530a69e00         call dword ptr [0x9ea630]
// 0061f51a  8bf8                 mov edi, eax
// 0061f51c  85ff                 test edi, edi
// 0061f51e  7d08                 jge 0x61f528
// 0061f520  5f                   pop edi
// 0061f521  32c0                 xor al, al
// 0061f523  5e                   pop esi
// 0061f524  83c41c               add esp, 0x1c
// 0061f527  c3                   ret 
// 0061f528  57                   push edi
// 0061f529  6a00                 push 0
// 0061f52b  8d442410             lea eax, [esp + 0x10]
// 0061f52f  50                   push eax
// 0061f530  8bce                 mov ecx, esi
// 0061f532  ff155ca49e00         call dword ptr [0x9ea45c]
// 0061f538  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0061f53c  7205                 jb 0x61f543
// 0061f53e  8b4004               mov eax, dword ptr [eax + 4]
// 0061f541  eb03                 jmp 0x61f546
// 0061f543  83c004               add eax, 4
// 0061f546  53                   push ebx
// 0061f547  8b1da8a89e00         mov ebx, dword ptr [0x9ea8a8]
// 0061f54d  55                   push ebp
// 0061f54e  50                   push eax
// 0061f54f  ffd3                 call ebx
// 0061f551  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0061f555  83c404               add esp, 4
// 0061f558  8d4c2410             lea ecx, [esp + 0x10]
// 0061f55c  66894500             mov word ptr [ebp], ax
// 0061f560  ff1500a49e00         call dword ptr [0x9ea400]
// 0061f566  8b4614               mov eax, dword ptr [esi + 0x14]
// 0061f569  8d4f01               lea ecx, [edi + 1]
// 0061f56c  3bc1                 cmp eax, ecx
// 0061f56e  7d0a                 jge 0x61f57a
// 0061f570  5d                   pop ebp
// 0061f571  5b                   pop ebx
// 0061f572  5f                   pop edi
// 0061f573  32c0                 xor al, al
// 0061f575  5e                   pop esi
// 0061f576  83c41c               add esp, 0x1c
// 0061f579  c3                   ret 
// 0061f57a  2bc1                 sub eax, ecx
// 0061f57c  50                   push eax
// 0061f57d  51                   push ecx
// 0061f57e  8d4c2418             lea ecx, [esp + 0x18]
// 0061f582  51                   push ecx
// 0061f583  8bce                 mov ecx, esi
// 0061f585  ff155ca49e00         call dword ptr [0x9ea45c]
// 0061f58b  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0061f58f  7205                 jb 0x61f596
// 0061f591  8b4004               mov eax, dword ptr [eax + 4]
// 0061f594  eb03                 jmp 0x61f599
// 0061f596  83c004               add eax, 4
// 0061f599  50                   push eax
// 0061f59a  ffd3                 call ebx
// 0061f59c  83c404               add esp, 4
// 0061f59f  8d4c2410             lea ecx, [esp + 0x10]
// 0061f5a3  66894502             mov word ptr [ebp + 2], ax
// 0061f5a7  ff1500a49e00         call dword ptr [0x9ea400]
// 0061f5ad  5d                   pop ebp
// 0061f5ae  5b                   pop ebx
// 0061f5af  5f                   pop edi
// 0061f5b0  b001                 mov al, 1
// 0061f5b2  5e                   pop esi
// 0061f5b3  83c41c               add esp, 0x1c
// 0061f5b6  c3                   ret 
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