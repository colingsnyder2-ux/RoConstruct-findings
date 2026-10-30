// roc 2009-06 0064bef0  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064bef0
//
// 0064bef0  83ec1c               sub esp, 0x1c
// 0064bef3  56                   push esi
// 0064bef4  57                   push edi
// 0064bef5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0064bef9  6a02                 push 2
// 0064befb  6a00                 push 0
// 0064befd  6898f18d00           push 0x8df198
// 0064bf02  8bcf                 mov ecx, edi
// 0064bf04  ff1598e68900         call dword ptr [0x89e698]
// 0064bf0a  8bf0                 mov esi, eax
// 0064bf0c  85f6                 test esi, esi
// 0064bf0e  7d08                 jge 0x64bf18
// 0064bf10  5f                   pop edi
// 0064bf11  32c0                 xor al, al
// 0064bf13  5e                   pop esi
// 0064bf14  83c41c               add esp, 0x1c
// 0064bf17  c3                   ret 
// 0064bf18  56                   push esi
// 0064bf19  6a00                 push 0
// 0064bf1b  8d442410             lea eax, [esp + 0x10]
// 0064bf1f  50                   push eax
// 0064bf20  8bcf                 mov ecx, edi
// 0064bf22  ff1570e48900         call dword ptr [0x89e470]
// 0064bf28  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0064bf2c  7205                 jb 0x64bf33
// 0064bf2e  8b4004               mov eax, dword ptr [eax + 4]
// 0064bf31  eb03                 jmp 0x64bf36
// 0064bf33  83c004               add eax, 4
// 0064bf36  53                   push ebx
// 0064bf37  55                   push ebp
// 0064bf38  50                   push eax
// 0064bf39  ff15ece88900         call dword ptr [0x89e8ec]
// 0064bf3f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0064bf43  83c404               add esp, 4
// 0064bf46  d95d00               fstp dword ptr [ebp]
// 0064bf49  8d4c2410             lea ecx, [esp + 0x10]
// 0064bf4d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0064bf53  6a02                 push 2
// 0064bf55  46                   inc esi
// 0064bf56  56                   push esi
// 0064bf57  6898f18d00           push 0x8df198
// 0064bf5c  8bcf                 mov ecx, edi
// 0064bf5e  ff1598e68900         call dword ptr [0x89e698]
// 0064bf64  8bd8                 mov ebx, eax
// 0064bf66  3bde                 cmp ebx, esi
// 0064bf68  7c46                 jl 0x64bfb0
// 0064bf6a  8bcb                 mov ecx, ebx
// 0064bf6c  2bce                 sub ecx, esi
// 0064bf6e  51                   push ecx
// 0064bf6f  56                   push esi
// 0064bf70  8d542418             lea edx, [esp + 0x18]
// 0064bf74  52                   push edx
// 0064bf75  8bcf                 mov ecx, edi
// 0064bf77  ff1570e48900         call dword ptr [0x89e470]
// 0064bf7d  be10000000           mov esi, 0x10
// 0064bf82  397018               cmp dword ptr [eax + 0x18], esi
// 0064bf85  7205                 jb 0x64bf8c
// 0064bf87  8b4004               mov eax, dword ptr [eax + 4]
// 0064bf8a  eb03                 jmp 0x64bf8f
// 0064bf8c  83c004               add eax, 4
// 0064bf8f  50                   push eax
// 0064bf90  ff15ece88900         call dword ptr [0x89e8ec]
// 0064bf96  d95d04               fstp dword ptr [ebp + 4]
// 0064bf99  83c404               add esp, 4
// 0064bf9c  8d4c2410             lea ecx, [esp + 0x10]
// 0064bfa0  ff15c4e48900         call dword ptr [0x89e4c4]
// 0064bfa6  8b4714               mov eax, dword ptr [edi + 0x14]
// 0064bfa9  8d4b01               lea ecx, [ebx + 1]
// 0064bfac  3bc1                 cmp eax, ecx
// 0064bfae  7d0a                 jge 0x64bfba
// 0064bfb0  5d                   pop ebp
// 0064bfb1  5b                   pop ebx
// 0064bfb2  5f                   pop edi
// 0064bfb3  32c0                 xor al, al
// 0064bfb5  5e                   pop esi
// 0064bfb6  83c41c               add esp, 0x1c
// 0064bfb9  c3                   ret 
// 0064bfba  2bc1                 sub eax, ecx
// 0064bfbc  50                   push eax
// 0064bfbd  51                   push ecx
// 0064bfbe  8d442418             lea eax, [esp + 0x18]
// 0064bfc2  50                   push eax
// 0064bfc3  8bcf                 mov ecx, edi
// 0064bfc5  ff1570e48900         call dword ptr [0x89e470]
// 0064bfcb  397018               cmp dword ptr [eax + 0x18], esi
// 0064bfce  7205                 jb 0x64bfd5
// 0064bfd0  8b4004               mov eax, dword ptr [eax + 4]
// 0064bfd3  eb03                 jmp 0x64bfd8
// 0064bfd5  83c004               add eax, 4
// 0064bfd8  50                   push eax
// 0064bfd9  ff15ece88900         call dword ptr [0x89e8ec]
// 0064bfdf  d95d08               fstp dword ptr [ebp + 8]
// 0064bfe2  83c404               add esp, 4
// 0064bfe5  8d4c2410             lea ecx, [esp + 0x10]
// 0064bfe9  ff15c4e48900         call dword ptr [0x89e4c4]
// 0064bfef  5d                   pop ebp
// 0064bff0  5b                   pop ebx
// 0064bff1  5f                   pop edi
// 0064bff2  b001                 mov al, 1
// 0064bff4  5e                   pop esi
// 0064bff5  83c41c               add esp, 0x1c
// 0064bff8  c3                   ret 
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