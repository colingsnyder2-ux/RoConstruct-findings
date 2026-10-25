// from server: 100% by king_originala
// roc 2008-06 005a4a80  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4a80
//
// 005a4a80  8b442404             mov eax, dword ptr [esp + 4]
// 005a4a84  83ec0c               sub esp, 0xc
// 005a4a87  56                   push esi
// 005a4a88  6a00                 push 0
// 005a4a8a  68b8819400           push 0x9481b8
// 005a4a8f  68fc919200           push 0x9291fc
// 005a4a94  6a00                 push 0
// 005a4a96  50                   push eax
// 005a4a97  8bf1                 mov esi, ecx
// 005a4a99  e828cd0f00           call 0x6a17c6
// 005a4a9e  83c414               add esp, 0x14
// 005a4aa1  85c0                 test eax, eax
// 005a4aa3  751e                 jne 0x5a4ac3
// 005a4aa5  6834ba8000           push 0x80ba34
// 005a4aaa  8d4c2408             lea ecx, [esp + 8]
// 005a4aae  ff1564288000         call dword ptr [0x802864]
// 005a4ab4  682c368d00           push 0x8d362c
// 005a4ab9  8d4c2408             lea ecx, [esp + 8]
// 005a4abd  51                   push ecx
// 005a4abe  e8c9ca0f00           call 0x6a158c
// 005a4ac3  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 005a4ac9  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005a4acc  8b140a               mov edx, dword ptr [edx + ecx]
// 005a4acf  03563c               add edx, dword ptr [esi + 0x3c]
// 005a4ad2  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 005a4ad9  8b4638               mov eax, dword ptr [esi + 0x38]
// 005a4adc  ffd0                 call eax
// 005a4ade  5e                   pop esi
// 005a4adf  83c40c               add esp, 0xc
// 005a4ae2  c20800               ret 8

extern "C" void *__cdecl runtime_cast(void *, int, const void *, const void *, int);
extern "C" __declspec(noreturn) void __cdecl raise_exception(void *, const void *);

extern unsigned char source_type;
extern unsigned char destination_type;
extern unsigned char exception_type;
extern const char bad_cast_message[];

extern void *(__thiscall *construct_bad_cast)(void *, const char *);

struct Descriptor
{
    unsigned char reserved[0x38];
    void (__thiscall *function)(void *);
    int displacement;
    int table_offset;

    void invoke(void *, void *);
};

void Descriptor::invoke(void *object, void *)
{
    void *converted = runtime_cast(object, 0, &source_type, &destination_type, 0);
    if (!converted)
    {
        unsigned char exception[12];
        construct_bad_cast(exception, bad_cast_message);
        raise_exception(exception, &exception_type);
    }

    char *base = static_cast<char *>(converted);
    int *table = *reinterpret_cast<int **>(base + 0x134);
    int adjustment = *reinterpret_cast<int *>(
        reinterpret_cast<char *>(table) + table_offset);
    function(base + 0x134 + adjustment + displacement);
}
