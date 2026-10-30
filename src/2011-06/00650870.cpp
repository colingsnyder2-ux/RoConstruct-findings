// roc 2011-06 00650870  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00650870
//
// 00650870  83ec1c               sub esp, 0x1c
// 00650873  56                   push esi
// 00650874  8b742424             mov esi, dword ptr [esp + 0x24]
// 00650878  57                   push edi
// 00650879  6a02                 push 2
// 0065087b  6a00                 push 0
// 0065087d  685ca2a900           push 0xa9a25c
// 00650882  8bce                 mov ecx, esi
// 00650884  ff15dc06a400         call dword ptr [0xa406dc]
// 0065088a  8bf8                 mov edi, eax
// 0065088c  85ff                 test edi, edi
// 0065088e  7d08                 jge 0x650898
// 00650890  5f                   pop edi
// 00650891  32c0                 xor al, al
// 00650893  5e                   pop esi
// 00650894  83c41c               add esp, 0x1c
// 00650897  c3                   ret 
// 00650898  57                   push edi
// 00650899  6a00                 push 0
// 0065089b  8d442410             lea eax, [esp + 0x10]
// 0065089f  50                   push eax
// 006508a0  8bce                 mov ecx, esi
// 006508a2  ff153004a400         call dword ptr [0xa40430]
// 006508a8  83781810             cmp dword ptr [eax + 0x18], 0x10
// 006508ac  7205                 jb 0x6508b3
// 006508ae  8b4004               mov eax, dword ptr [eax + 4]
// 006508b1  eb03                 jmp 0x6508b6
// 006508b3  83c004               add eax, 4
// 006508b6  53                   push ebx
// 006508b7  8b1d200aa400         mov ebx, dword ptr [0xa40a20]
// 006508bd  55                   push ebp
// 006508be  50                   push eax
// 006508bf  ffd3                 call ebx
// 006508c1  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 006508c5  83c404               add esp, 4
// 006508c8  8d4c2410             lea ecx, [esp + 0x10]
// 006508cc  66894500             mov word ptr [ebp], ax
// 006508d0  ff15d004a400         call dword ptr [0xa404d0]
// 006508d6  8b4614               mov eax, dword ptr [esi + 0x14]
// 006508d9  8d4f01               lea ecx, [edi + 1]
// 006508dc  3bc1                 cmp eax, ecx
// 006508de  7d0a                 jge 0x6508ea
// 006508e0  5d                   pop ebp
// 006508e1  5b                   pop ebx
// 006508e2  5f                   pop edi
// 006508e3  32c0                 xor al, al
// 006508e5  5e                   pop esi
// 006508e6  83c41c               add esp, 0x1c
// 006508e9  c3                   ret 
// 006508ea  2bc1                 sub eax, ecx
// 006508ec  50                   push eax
// 006508ed  51                   push ecx
// 006508ee  8d4c2418             lea ecx, [esp + 0x18]
// 006508f2  51                   push ecx
// 006508f3  8bce                 mov ecx, esi
// 006508f5  ff153004a400         call dword ptr [0xa40430]
// 006508fb  83781810             cmp dword ptr [eax + 0x18], 0x10
// 006508ff  7205                 jb 0x650906
// 00650901  8b4004               mov eax, dword ptr [eax + 4]
// 00650904  eb03                 jmp 0x650909
// 00650906  83c004               add eax, 4
// 00650909  50                   push eax
// 0065090a  ffd3                 call ebx
// 0065090c  83c404               add esp, 4
// 0065090f  8d4c2410             lea ecx, [esp + 0x10]
// 00650913  66894502             mov word ptr [ebp + 2], ax
// 00650917  ff15d004a400         call dword ptr [0xa404d0]
// 0065091d  5d                   pop ebp
// 0065091e  5b                   pop ebx
// 0065091f  5f                   pop edi
// 00650920  b001                 mov al, 1
// 00650922  5e                   pop esi
// 00650923  83c41c               add esp, 0x1c
// 00650926  c3                   ret 
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