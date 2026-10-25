// from server: 100% by king_originala
// roc 2008-06 0060f340  unit: RBX::BlockBlockContact  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060f340
//
// 0060f340  51                   push ecx
// 0060f341  53                   push ebx
// 0060f342  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0060f346  55                   push ebp
// 0060f347  56                   push esi
// 0060f348  6a00                 push 0
// 0060f34a  6850dd9200           push 0x92dd50
// 0060f34f  687c909200           push 0x92907c
// 0060f354  6a00                 push 0
// 0060f356  53                   push ebx
// 0060f357  e86a240900           call 0x6a17c6
// 0060f35c  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0060f360  83c414               add esp, 0x14
// 0060f363  85c0                 test eax, eax
// 0060f365  7415                 je 0x60f37c
// 0060f367  0528020000           add eax, 0x228
// 0060f36c  8944240c             mov dword ptr [esp + 0xc], eax
// 0060f370  8d44240c             lea eax, [esp + 0xc]
// 0060f374  50                   push eax
// 0060f375  8bcd                 mov ecx, ebp
// 0060f377  e82420e1ff           call 0x4213a0
// 0060f37c  8bcb                 mov ecx, ebx
// 0060f37e  33f6                 xor esi, esi
// 0060f380  e89bbae7ff           call 0x48ae20
// 0060f385  85c0                 test eax, eax
// 0060f387  763d                 jbe 0x60f3c6
// 0060f389  57                   push edi
// 0060f38a  8d9b00000000         lea ebx, [ebx]
// 0060f390  8bbb08010000         mov edi, dword ptr [ebx + 0x108]
// 0060f396  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0060f399  2b4f0c               sub ecx, dword ptr [edi + 0xc]
// 0060f39c  c1f903               sar ecx, 3
// 0060f39f  3bf1                 cmp esi, ecx
// 0060f3a1  7206                 jb 0x60f3a9
// 0060f3a3  ff1590288000         call dword ptr [0x802890]
// 0060f3a9  8b570c               mov edx, dword ptr [edi + 0xc]
// 0060f3ac  8b04f2               mov eax, dword ptr [edx + esi*8]
// 0060f3af  55                   push ebp
// 0060f3b0  50                   push eax
// 0060f3b1  e88affffff           call 0x60f340
// 0060f3b6  83c408               add esp, 8
// 0060f3b9  8bcb                 mov ecx, ebx
// 0060f3bb  46                   inc esi
// 0060f3bc  e85fbae7ff           call 0x48ae20
// 0060f3c1  3bf0                 cmp esi, eax
// 0060f3c3  72cb                 jb 0x60f390
// 0060f3c5  5f                   pop edi
// 0060f3c6  5e                   pop esi
// 0060f3c7  5d                   pop ebp
// 0060f3c8  5b                   pop ebx
// 0060f3c9  59                   pop ecx
// 0060f3ca  c3                   ret 

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

extern char instance_type;
extern char part_instance_type;
extern "C" void (__cdecl * const invalid_parameter_noinfo)();

struct Instance;

struct Entry {
    Instance* object;
    void* control;
};

struct Children {
    char padding[12];
    Entry* begin;
    Entry* end;
};

struct Instance {
    char padding[264];
    Children* children;
    unsigned int count();
};

struct Output {
    void append(char* const&);
};

void __cdecl collect(Instance* object, Output* output)
{
    char* part = static_cast<char*>(__RTDynamicCast(
        object, 0, &instance_type, &part_instance_type, 0));

    if (part) {
        char* value = part + 552;
        output->append(value);
    }

    for (unsigned int i = 0; i < object->count(); ++i) {
        Children* children = object->children;
        if (i >= static_cast<unsigned int>(children->end - children->begin))
            invalid_parameter_noinfo();
        collect(children->begin[i].object, output);
    }
}
