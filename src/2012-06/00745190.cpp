// roc 2012-06 00745190  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00745190
//
// 00745190  83ec1c               sub esp, 0x1c
// 00745193  56                   push esi
// 00745194  57                   push edi
// 00745195  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00745199  6a02                 push 2
// 0074519b  6a00                 push 0
// 0074519d  6880a9ba00           push 0xbaa980
// 007451a2  8bcf                 mov ecx, edi
// 007451a4  ff154424b200         call dword ptr [0xb22444]
// 007451aa  8bf0                 mov esi, eax
// 007451ac  85f6                 test esi, esi
// 007451ae  7d08                 jge 0x7451b8
// 007451b0  5f                   pop edi
// 007451b1  32c0                 xor al, al
// 007451b3  5e                   pop esi
// 007451b4  83c41c               add esp, 0x1c
// 007451b7  c3                   ret 
// 007451b8  56                   push esi
// 007451b9  6a00                 push 0
// 007451bb  8d442410             lea eax, [esp + 0x10]
// 007451bf  50                   push eax
// 007451c0  8bcf                 mov ecx, edi
// 007451c2  ff15e826b200         call dword ptr [0xb226e8]
// 007451c8  83781810             cmp dword ptr [eax + 0x18], 0x10
// 007451cc  7205                 jb 0x7451d3
// 007451ce  8b4004               mov eax, dword ptr [eax + 4]
// 007451d1  eb03                 jmp 0x7451d6
// 007451d3  83c004               add eax, 4
// 007451d6  53                   push ebx
// 007451d7  55                   push ebp
// 007451d8  50                   push eax
// 007451d9  ff157c28b200         call dword ptr [0xb2287c]
// 007451df  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 007451e3  83c404               add esp, 4
// 007451e6  d95d00               fstp dword ptr [ebp]
// 007451e9  8d4c2410             lea ecx, [esp + 0x10]
// 007451ed  ff153c26b200         call dword ptr [0xb2263c]
// 007451f3  6a02                 push 2
// 007451f5  46                   inc esi
// 007451f6  56                   push esi
// 007451f7  6880a9ba00           push 0xbaa980
// 007451fc  8bcf                 mov ecx, edi
// 007451fe  ff154424b200         call dword ptr [0xb22444]
// 00745204  8bd8                 mov ebx, eax
// 00745206  3bde                 cmp ebx, esi
// 00745208  7c46                 jl 0x745250
// 0074520a  8bcb                 mov ecx, ebx
// 0074520c  2bce                 sub ecx, esi
// 0074520e  51                   push ecx
// 0074520f  56                   push esi
// 00745210  8d542418             lea edx, [esp + 0x18]
// 00745214  52                   push edx
// 00745215  8bcf                 mov ecx, edi
// 00745217  ff15e826b200         call dword ptr [0xb226e8]
// 0074521d  be10000000           mov esi, 0x10
// 00745222  397018               cmp dword ptr [eax + 0x18], esi
// 00745225  7205                 jb 0x74522c
// 00745227  8b4004               mov eax, dword ptr [eax + 4]
// 0074522a  eb03                 jmp 0x74522f
// 0074522c  83c004               add eax, 4
// 0074522f  50                   push eax
// 00745230  ff157c28b200         call dword ptr [0xb2287c]
// 00745236  d95d04               fstp dword ptr [ebp + 4]
// 00745239  83c404               add esp, 4
// 0074523c  8d4c2410             lea ecx, [esp + 0x10]
// 00745240  ff153c26b200         call dword ptr [0xb2263c]
// 00745246  8b4714               mov eax, dword ptr [edi + 0x14]
// 00745249  8d4b01               lea ecx, [ebx + 1]
// 0074524c  3bc1                 cmp eax, ecx
// 0074524e  7d0a                 jge 0x74525a
// 00745250  5d                   pop ebp
// 00745251  5b                   pop ebx
// 00745252  5f                   pop edi
// 00745253  32c0                 xor al, al
// 00745255  5e                   pop esi
// 00745256  83c41c               add esp, 0x1c
// 00745259  c3                   ret 
// 0074525a  2bc1                 sub eax, ecx
// 0074525c  50                   push eax
// 0074525d  51                   push ecx
// 0074525e  8d442418             lea eax, [esp + 0x18]
// 00745262  50                   push eax
// 00745263  8bcf                 mov ecx, edi
// 00745265  ff15e826b200         call dword ptr [0xb226e8]
// 0074526b  397018               cmp dword ptr [eax + 0x18], esi
// 0074526e  7205                 jb 0x745275
// 00745270  8b4004               mov eax, dword ptr [eax + 4]
// 00745273  eb03                 jmp 0x745278
// 00745275  83c004               add eax, 4
// 00745278  50                   push eax
// 00745279  ff157c28b200         call dword ptr [0xb2287c]
// 0074527f  d95d08               fstp dword ptr [ebp + 8]
// 00745282  83c404               add esp, 4
// 00745285  8d4c2410             lea ecx, [esp + 0x10]
// 00745289  ff153c26b200         call dword ptr [0xb2263c]
// 0074528f  5d                   pop ebp
// 00745290  5b                   pop ebx
// 00745291  5f                   pop edi
// 00745292  b001                 mov al, 1
// 00745294  5e                   pop esi
// 00745295  83c41c               add esp, 0x1c
// 00745298  c3                   ret 
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