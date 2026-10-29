// roc 2010-06 0061f800  unit: RBX::DropperTool  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0061f800
//
// 0061f800  83ec1c               sub esp, 0x1c
// 0061f803  56                   push esi
// 0061f804  57                   push edi
// 0061f805  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0061f809  6a02                 push 2
// 0061f80b  6a00                 push 0
// 0061f80d  68e829a300           push 0xa329e8
// 0061f812  8bcf                 mov ecx, edi
// 0061f814  ff1530a69e00         call dword ptr [0x9ea630]
// 0061f81a  8bf0                 mov esi, eax
// 0061f81c  85f6                 test esi, esi
// 0061f81e  7d08                 jge 0x61f828
// 0061f820  5f                   pop edi
// 0061f821  32c0                 xor al, al
// 0061f823  5e                   pop esi
// 0061f824  83c41c               add esp, 0x1c
// 0061f827  c3                   ret 
// 0061f828  56                   push esi
// 0061f829  6a00                 push 0
// 0061f82b  8d442410             lea eax, [esp + 0x10]
// 0061f82f  50                   push eax
// 0061f830  8bcf                 mov ecx, edi
// 0061f832  ff155ca49e00         call dword ptr [0x9ea45c]
// 0061f838  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0061f83c  7205                 jb 0x61f843
// 0061f83e  8b4004               mov eax, dword ptr [eax + 4]
// 0061f841  eb03                 jmp 0x61f846
// 0061f843  83c004               add eax, 4
// 0061f846  53                   push ebx
// 0061f847  55                   push ebp
// 0061f848  50                   push eax
// 0061f849  ff1548a79e00         call dword ptr [0x9ea748]
// 0061f84f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0061f853  83c404               add esp, 4
// 0061f856  d95d00               fstp dword ptr [ebp]
// 0061f859  8d4c2410             lea ecx, [esp + 0x10]
// 0061f85d  ff1500a49e00         call dword ptr [0x9ea400]
// 0061f863  6a02                 push 2
// 0061f865  46                   inc esi
// 0061f866  56                   push esi
// 0061f867  68e829a300           push 0xa329e8
// 0061f86c  8bcf                 mov ecx, edi
// 0061f86e  ff1530a69e00         call dword ptr [0x9ea630]
// 0061f874  8bd8                 mov ebx, eax
// 0061f876  3bde                 cmp ebx, esi
// 0061f878  7c46                 jl 0x61f8c0
// 0061f87a  8bcb                 mov ecx, ebx
// 0061f87c  2bce                 sub ecx, esi
// 0061f87e  51                   push ecx
// 0061f87f  56                   push esi
// 0061f880  8d542418             lea edx, [esp + 0x18]
// 0061f884  52                   push edx
// 0061f885  8bcf                 mov ecx, edi
// 0061f887  ff155ca49e00         call dword ptr [0x9ea45c]
// 0061f88d  be10000000           mov esi, 0x10
// 0061f892  397018               cmp dword ptr [eax + 0x18], esi
// 0061f895  7205                 jb 0x61f89c
// 0061f897  8b4004               mov eax, dword ptr [eax + 4]
// 0061f89a  eb03                 jmp 0x61f89f
// 0061f89c  83c004               add eax, 4
// 0061f89f  50                   push eax
// 0061f8a0  ff1548a79e00         call dword ptr [0x9ea748]
// 0061f8a6  d95d04               fstp dword ptr [ebp + 4]
// 0061f8a9  83c404               add esp, 4
// 0061f8ac  8d4c2410             lea ecx, [esp + 0x10]
// 0061f8b0  ff1500a49e00         call dword ptr [0x9ea400]
// 0061f8b6  8b4714               mov eax, dword ptr [edi + 0x14]
// 0061f8b9  8d4b01               lea ecx, [ebx + 1]
// 0061f8bc  3bc1                 cmp eax, ecx
// 0061f8be  7d0a                 jge 0x61f8ca
// 0061f8c0  5d                   pop ebp
// 0061f8c1  5b                   pop ebx
// 0061f8c2  5f                   pop edi
// 0061f8c3  32c0                 xor al, al
// 0061f8c5  5e                   pop esi
// 0061f8c6  83c41c               add esp, 0x1c
// 0061f8c9  c3                   ret 
// 0061f8ca  2bc1                 sub eax, ecx
// 0061f8cc  50                   push eax
// 0061f8cd  51                   push ecx
// 0061f8ce  8d442418             lea eax, [esp + 0x18]
// 0061f8d2  50                   push eax
// 0061f8d3  8bcf                 mov ecx, edi
// 0061f8d5  ff155ca49e00         call dword ptr [0x9ea45c]
// 0061f8db  397018               cmp dword ptr [eax + 0x18], esi
// 0061f8de  7205                 jb 0x61f8e5
// 0061f8e0  8b4004               mov eax, dword ptr [eax + 4]
// 0061f8e3  eb03                 jmp 0x61f8e8
// 0061f8e5  83c004               add eax, 4
// 0061f8e8  50                   push eax
// 0061f8e9  ff1548a79e00         call dword ptr [0x9ea748]
// 0061f8ef  d95d08               fstp dword ptr [ebp + 8]
// 0061f8f2  83c404               add esp, 4
// 0061f8f5  8d4c2410             lea ecx, [esp + 0x10]
// 0061f8f9  ff1500a49e00         call dword ptr [0x9ea400]
// 0061f8ff  5d                   pop ebp
// 0061f900  5b                   pop ebx
// 0061f901  5f                   pop edi
// 0061f902  b001                 mov al, 1
// 0061f904  5e                   pop esi
// 0061f905  83c41c               add esp, 0x1c
// 0061f908  c3                   ret 
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