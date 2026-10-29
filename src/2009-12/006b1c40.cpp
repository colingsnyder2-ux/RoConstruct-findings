// roc 2009-12 006b1c40  unit: RBX::DropperTool  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b1c40
//
// 006b1c40  83ec1c               sub esp, 0x1c
// 006b1c43  56                   push esi
// 006b1c44  57                   push edi
// 006b1c45  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006b1c49  6a02                 push 2
// 006b1c4b  6a00                 push 0
// 006b1c4d  68203f9d00           push 0x9d3f20
// 006b1c52  8bcf                 mov ecx, edi
// 006b1c54  ff158cb49800         call dword ptr [0x98b48c]
// 006b1c5a  8bf0                 mov esi, eax
// 006b1c5c  85f6                 test esi, esi
// 006b1c5e  7d08                 jge 0x6b1c68
// 006b1c60  5f                   pop edi
// 006b1c61  32c0                 xor al, al
// 006b1c63  5e                   pop esi
// 006b1c64  83c41c               add esp, 0x1c
// 006b1c67  c3                   ret 
// 006b1c68  56                   push esi
// 006b1c69  6a00                 push 0
// 006b1c6b  8d442410             lea eax, [esp + 0x10]
// 006b1c6f  50                   push eax
// 006b1c70  8bcf                 mov ecx, edi
// 006b1c72  ff15a8b69800         call dword ptr [0x98b6a8]
// 006b1c78  83781810             cmp dword ptr [eax + 0x18], 0x10
// 006b1c7c  7205                 jb 0x6b1c83
// 006b1c7e  8b4004               mov eax, dword ptr [eax + 4]
// 006b1c81  eb03                 jmp 0x6b1c86
// 006b1c83  83c004               add eax, 4
// 006b1c86  53                   push ebx
// 006b1c87  55                   push ebp
// 006b1c88  50                   push eax
// 006b1c89  ff152cb89800         call dword ptr [0x98b82c]
// 006b1c8f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 006b1c93  83c404               add esp, 4
// 006b1c96  d95d00               fstp dword ptr [ebp]
// 006b1c99  8d4c2410             lea ecx, [esp + 0x10]
// 006b1c9d  ff15e4b69800         call dword ptr [0x98b6e4]
// 006b1ca3  6a02                 push 2
// 006b1ca5  46                   inc esi
// 006b1ca6  56                   push esi
// 006b1ca7  68203f9d00           push 0x9d3f20
// 006b1cac  8bcf                 mov ecx, edi
// 006b1cae  ff158cb49800         call dword ptr [0x98b48c]
// 006b1cb4  8bd8                 mov ebx, eax
// 006b1cb6  3bde                 cmp ebx, esi
// 006b1cb8  7c46                 jl 0x6b1d00
// 006b1cba  8bcb                 mov ecx, ebx
// 006b1cbc  2bce                 sub ecx, esi
// 006b1cbe  51                   push ecx
// 006b1cbf  56                   push esi
// 006b1cc0  8d542418             lea edx, [esp + 0x18]
// 006b1cc4  52                   push edx
// 006b1cc5  8bcf                 mov ecx, edi
// 006b1cc7  ff15a8b69800         call dword ptr [0x98b6a8]
// 006b1ccd  be10000000           mov esi, 0x10
// 006b1cd2  397018               cmp dword ptr [eax + 0x18], esi
// 006b1cd5  7205                 jb 0x6b1cdc
// 006b1cd7  8b4004               mov eax, dword ptr [eax + 4]
// 006b1cda  eb03                 jmp 0x6b1cdf
// 006b1cdc  83c004               add eax, 4
// 006b1cdf  50                   push eax
// 006b1ce0  ff152cb89800         call dword ptr [0x98b82c]
// 006b1ce6  d95d04               fstp dword ptr [ebp + 4]
// 006b1ce9  83c404               add esp, 4
// 006b1cec  8d4c2410             lea ecx, [esp + 0x10]
// 006b1cf0  ff15e4b69800         call dword ptr [0x98b6e4]
// 006b1cf6  8b4714               mov eax, dword ptr [edi + 0x14]
// 006b1cf9  8d4b01               lea ecx, [ebx + 1]
// 006b1cfc  3bc1                 cmp eax, ecx
// 006b1cfe  7d0a                 jge 0x6b1d0a
// 006b1d00  5d                   pop ebp
// 006b1d01  5b                   pop ebx
// 006b1d02  5f                   pop edi
// 006b1d03  32c0                 xor al, al
// 006b1d05  5e                   pop esi
// 006b1d06  83c41c               add esp, 0x1c
// 006b1d09  c3                   ret 
// 006b1d0a  2bc1                 sub eax, ecx
// 006b1d0c  50                   push eax
// 006b1d0d  51                   push ecx
// 006b1d0e  8d442418             lea eax, [esp + 0x18]
// 006b1d12  50                   push eax
// 006b1d13  8bcf                 mov ecx, edi
// 006b1d15  ff15a8b69800         call dword ptr [0x98b6a8]
// 006b1d1b  397018               cmp dword ptr [eax + 0x18], esi
// 006b1d1e  7205                 jb 0x6b1d25
// 006b1d20  8b4004               mov eax, dword ptr [eax + 4]
// 006b1d23  eb03                 jmp 0x6b1d28
// 006b1d25  83c004               add eax, 4
// 006b1d28  50                   push eax
// 006b1d29  ff152cb89800         call dword ptr [0x98b82c]
// 006b1d2f  d95d08               fstp dword ptr [ebp + 8]
// 006b1d32  83c404               add esp, 4
// 006b1d35  8d4c2410             lea ecx, [esp + 0x10]
// 006b1d39  ff15e4b69800         call dword ptr [0x98b6e4]
// 006b1d3f  5d                   pop ebp
// 006b1d40  5b                   pop ebx
// 006b1d41  5f                   pop edi
// 006b1d42  b001                 mov al, 1
// 006b1d44  5e                   pop esi
// 006b1d45  83c41c               add esp, 0x1c
// 006b1d48  c3                   ret 
// copied from an identical function in another client (function ?parse_vector@@YA_NABUString@@PAM@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String {
    char reserved[4];
    union {
        char buffer[16];
        char* pointer;
    } data;
    unsigned int length;
    unsigned int capacity;
};

extern unsigned int (__thiscall* find_first_of)(
    const String*, const char*, unsigned int, unsigned int);
extern String* (__thiscall* substring)(
    const String*, String*, unsigned int, unsigned int);
extern void (__thiscall* destroy_string)(String*);
extern double (__cdecl* parse_number)(const char*);

bool parse_vector(const String& text, float* result)
{
    int first = (int)find_first_of(&text, ",;", 0, 2);
    if (first < 0)
        return false;

    String temporary;
    String* part = substring(&text, &temporary, 0, first);
    result[0] = (float)parse_number(
        part->capacity >= 16 ? part->data.pointer : part->data.buffer);
    destroy_string(&temporary);

    ++first;
    int second = (int)find_first_of(&text, ",;", first, 2);
    if (second < first)
        return false;

    part = substring(&text, &temporary, first, second - first);
    result[1] = (float)parse_number(
        part->capacity >= 16 ? part->data.pointer : part->data.buffer);
    destroy_string(&temporary);

    int start = second + 1;
    int length = (int)text.length;
    if (length < start)
        return false;

    part = substring(&text, &temporary, start, length - start);
    result[2] = (float)parse_number(
        part->capacity >= 16 ? part->data.pointer : part->data.buffer);
    destroy_string(&temporary);
    return true;
}