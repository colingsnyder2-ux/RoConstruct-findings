// roc 2011-06 00650c10  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00650c10
//
// 00650c10  83ec1c               sub esp, 0x1c
// 00650c13  56                   push esi
// 00650c14  57                   push edi
// 00650c15  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00650c19  6a02                 push 2
// 00650c1b  6a00                 push 0
// 00650c1d  685ca2a900           push 0xa9a25c
// 00650c22  8bcf                 mov ecx, edi
// 00650c24  ff15dc06a400         call dword ptr [0xa406dc]
// 00650c2a  8bf0                 mov esi, eax
// 00650c2c  85f6                 test esi, esi
// 00650c2e  7d08                 jge 0x650c38
// 00650c30  5f                   pop edi
// 00650c31  32c0                 xor al, al
// 00650c33  5e                   pop esi
// 00650c34  83c41c               add esp, 0x1c
// 00650c37  c3                   ret 
// 00650c38  56                   push esi
// 00650c39  6a00                 push 0
// 00650c3b  8d442410             lea eax, [esp + 0x10]
// 00650c3f  50                   push eax
// 00650c40  8bcf                 mov ecx, edi
// 00650c42  ff153004a400         call dword ptr [0xa40430]
// 00650c48  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00650c4c  7205                 jb 0x650c53
// 00650c4e  8b4004               mov eax, dword ptr [eax + 4]
// 00650c51  eb03                 jmp 0x650c56
// 00650c53  83c004               add eax, 4
// 00650c56  53                   push ebx
// 00650c57  55                   push ebp
// 00650c58  50                   push eax
// 00650c59  ff155408a400         call dword ptr [0xa40854]
// 00650c5f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00650c63  83c404               add esp, 4
// 00650c66  d95d00               fstp dword ptr [ebp]
// 00650c69  8d4c2410             lea ecx, [esp + 0x10]
// 00650c6d  ff15d004a400         call dword ptr [0xa404d0]
// 00650c73  6a02                 push 2
// 00650c75  46                   inc esi
// 00650c76  56                   push esi
// 00650c77  685ca2a900           push 0xa9a25c
// 00650c7c  8bcf                 mov ecx, edi
// 00650c7e  ff15dc06a400         call dword ptr [0xa406dc]
// 00650c84  8bd8                 mov ebx, eax
// 00650c86  3bde                 cmp ebx, esi
// 00650c88  7c46                 jl 0x650cd0
// 00650c8a  8bcb                 mov ecx, ebx
// 00650c8c  2bce                 sub ecx, esi
// 00650c8e  51                   push ecx
// 00650c8f  56                   push esi
// 00650c90  8d542418             lea edx, [esp + 0x18]
// 00650c94  52                   push edx
// 00650c95  8bcf                 mov ecx, edi
// 00650c97  ff153004a400         call dword ptr [0xa40430]
// 00650c9d  be10000000           mov esi, 0x10
// 00650ca2  397018               cmp dword ptr [eax + 0x18], esi
// 00650ca5  7205                 jb 0x650cac
// 00650ca7  8b4004               mov eax, dword ptr [eax + 4]
// 00650caa  eb03                 jmp 0x650caf
// 00650cac  83c004               add eax, 4
// 00650caf  50                   push eax
// 00650cb0  ff155408a400         call dword ptr [0xa40854]
// 00650cb6  d95d04               fstp dword ptr [ebp + 4]
// 00650cb9  83c404               add esp, 4
// 00650cbc  8d4c2410             lea ecx, [esp + 0x10]
// 00650cc0  ff15d004a400         call dword ptr [0xa404d0]
// 00650cc6  8b4714               mov eax, dword ptr [edi + 0x14]
// 00650cc9  8d4b01               lea ecx, [ebx + 1]
// 00650ccc  3bc1                 cmp eax, ecx
// 00650cce  7d0a                 jge 0x650cda
// 00650cd0  5d                   pop ebp
// 00650cd1  5b                   pop ebx
// 00650cd2  5f                   pop edi
// 00650cd3  32c0                 xor al, al
// 00650cd5  5e                   pop esi
// 00650cd6  83c41c               add esp, 0x1c
// 00650cd9  c3                   ret 
// 00650cda  2bc1                 sub eax, ecx
// 00650cdc  50                   push eax
// 00650cdd  51                   push ecx
// 00650cde  8d442418             lea eax, [esp + 0x18]
// 00650ce2  50                   push eax
// 00650ce3  8bcf                 mov ecx, edi
// 00650ce5  ff153004a400         call dword ptr [0xa40430]
// 00650ceb  397018               cmp dword ptr [eax + 0x18], esi
// 00650cee  7205                 jb 0x650cf5
// 00650cf0  8b4004               mov eax, dword ptr [eax + 4]
// 00650cf3  eb03                 jmp 0x650cf8
// 00650cf5  83c004               add eax, 4
// 00650cf8  50                   push eax
// 00650cf9  ff155408a400         call dword ptr [0xa40854]
// 00650cff  d95d08               fstp dword ptr [ebp + 8]
// 00650d02  83c404               add esp, 4
// 00650d05  8d4c2410             lea ecx, [esp + 0x10]
// 00650d09  ff15d004a400         call dword ptr [0xa404d0]
// 00650d0f  5d                   pop ebp
// 00650d10  5b                   pop ebx
// 00650d11  5f                   pop edi
// 00650d12  b001                 mov al, 1
// 00650d14  5e                   pop esi
// 00650d15  83c41c               add esp, 0x1c
// 00650d18  c3                   ret 
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