// from server: 100% by king_originala
// roc 2008-06 005bebb0  unit: RBX::Soundscape::SoundService  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bebb0
//
// 005bebb0  83ec1c               sub esp, 0x1c
// 005bebb3  56                   push esi
// 005bebb4  57                   push edi
// 005bebb5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005bebb9  6a02                 push 2
// 005bebbb  6a00                 push 0
// 005bebbd  6860848300           push 0x838460
// 005bebc2  8bcf                 mov ecx, edi
// 005bebc4  ff15c4248000         call dword ptr [0x8024c4]
// 005bebca  8bf0                 mov esi, eax
// 005bebcc  85f6                 test esi, esi
// 005bebce  7d08                 jge 0x5bebd8
// 005bebd0  5f                   pop edi
// 005bebd1  32c0                 xor al, al
// 005bebd3  5e                   pop esi
// 005bebd4  83c41c               add esp, 0x1c
// 005bebd7  c3                   ret 
// 005bebd8  56                   push esi
// 005bebd9  6a00                 push 0
// 005bebdb  8d442410             lea eax, [esp + 0x10]
// 005bebdf  50                   push eax
// 005bebe0  8bcf                 mov ecx, edi
// 005bebe2  ff15e0238000         call dword ptr [0x8023e0]
// 005bebe8  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005bebec  7205                 jb 0x5bebf3
// 005bebee  8b4004               mov eax, dword ptr [eax + 4]
// 005bebf1  eb03                 jmp 0x5bebf6
// 005bebf3  83c004               add eax, 4
// 005bebf6  53                   push ebx
// 005bebf7  55                   push ebp
// 005bebf8  50                   push eax
// 005bebf9  ff15fc278000         call dword ptr [0x8027fc]
// 005bebff  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005bec03  83c404               add esp, 4
// 005bec06  d95d00               fstp dword ptr [ebp]
// 005bec09  8d4c2410             lea ecx, [esp + 0x10]
// 005bec0d  ff1568248000         call dword ptr [0x802468]
// 005bec13  6a02                 push 2
// 005bec15  46                   inc esi
// 005bec16  56                   push esi
// 005bec17  6860848300           push 0x838460
// 005bec1c  8bcf                 mov ecx, edi
// 005bec1e  ff15c4248000         call dword ptr [0x8024c4]
// 005bec24  8bd8                 mov ebx, eax
// 005bec26  3bde                 cmp ebx, esi
// 005bec28  7c46                 jl 0x5bec70
// 005bec2a  8bcb                 mov ecx, ebx
// 005bec2c  2bce                 sub ecx, esi
// 005bec2e  51                   push ecx
// 005bec2f  56                   push esi
// 005bec30  8d542418             lea edx, [esp + 0x18]
// 005bec34  52                   push edx
// 005bec35  8bcf                 mov ecx, edi
// 005bec37  ff15e0238000         call dword ptr [0x8023e0]
// 005bec3d  be10000000           mov esi, 0x10
// 005bec42  397018               cmp dword ptr [eax + 0x18], esi
// 005bec45  7205                 jb 0x5bec4c
// 005bec47  8b4004               mov eax, dword ptr [eax + 4]
// 005bec4a  eb03                 jmp 0x5bec4f
// 005bec4c  83c004               add eax, 4
// 005bec4f  50                   push eax
// 005bec50  ff15fc278000         call dword ptr [0x8027fc]
// 005bec56  d95d04               fstp dword ptr [ebp + 4]
// 005bec59  83c404               add esp, 4
// 005bec5c  8d4c2410             lea ecx, [esp + 0x10]
// 005bec60  ff1568248000         call dword ptr [0x802468]
// 005bec66  8b4714               mov eax, dword ptr [edi + 0x14]
// 005bec69  8d4b01               lea ecx, [ebx + 1]
// 005bec6c  3bc1                 cmp eax, ecx
// 005bec6e  7d0a                 jge 0x5bec7a
// 005bec70  5d                   pop ebp
// 005bec71  5b                   pop ebx
// 005bec72  5f                   pop edi
// 005bec73  32c0                 xor al, al
// 005bec75  5e                   pop esi
// 005bec76  83c41c               add esp, 0x1c
// 005bec79  c3                   ret 
// 005bec7a  2bc1                 sub eax, ecx
// 005bec7c  50                   push eax
// 005bec7d  51                   push ecx
// 005bec7e  8d442418             lea eax, [esp + 0x18]
// 005bec82  50                   push eax
// 005bec83  8bcf                 mov ecx, edi
// 005bec85  ff15e0238000         call dword ptr [0x8023e0]
// 005bec8b  397018               cmp dword ptr [eax + 0x18], esi
// 005bec8e  7205                 jb 0x5bec95
// 005bec90  8b4004               mov eax, dword ptr [eax + 4]
// 005bec93  eb03                 jmp 0x5bec98
// 005bec95  83c004               add eax, 4
// 005bec98  50                   push eax
// 005bec99  ff15fc278000         call dword ptr [0x8027fc]
// 005bec9f  d95d08               fstp dword ptr [ebp + 8]
// 005beca2  83c404               add esp, 4
// 005beca5  8d4c2410             lea ecx, [esp + 0x10]
// 005beca9  ff1568248000         call dword ptr [0x802468]
// 005becaf  5d                   pop ebp
// 005becb0  5b                   pop ebx
// 005becb1  5f                   pop edi
// 005becb2  b001                 mov al, 1
// 005becb4  5e                   pop esi
// 005becb5  83c41c               add esp, 0x1c
// 005becb8  c3                   ret 

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
