// roc 2011-06 00678810  unit: RBX::Animation  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00678810
//
// 00678810  6aff                 push -1
// 00678812  68a82b9e00           push 0x9e2ba8
// 00678817  64a100000000         mov eax, dword ptr fs:[0]
// 0067881d  50                   push eax
// 0067881e  64892500000000       mov dword ptr fs:[0], esp
// 00678825  51                   push ecx
// 00678826  53                   push ebx
// 00678827  56                   push esi
// 00678828  8bf1                 mov esi, ecx
// 0067882a  57                   push edi
// 0067882b  8974240c             mov dword ptr [esp + 0xc], esi
// 0067882f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00678833  8d7e04               lea edi, [esi + 4]
// 00678836  53                   push ebx
// 00678837  8bcf                 mov ecx, edi
// 00678839  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00678841  c7061cd7a900         mov dword ptr [esi], 0xa9d71c
// 00678847  ff15c804a400         call dword ptr [0xa404c8]
// 0067884d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00678850  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00678854  89471c               mov dword ptr [edi + 0x1c], eax
// 00678857  5f                   pop edi
// 00678858  8bc6                 mov eax, esi
// 0067885a  5e                   pop esi
// 0067885b  5b                   pop ebx
// 0067885c  64890d00000000       mov dword ptr fs:[0], ecx
// 00678863  83c410               add esp, 0x10
// 00678866  c20400               ret 4
// copied from an identical function in another client (function ??0S@@QAE@ABUSource@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct StringData {
    unsigned char data[28];
};

extern void (__thiscall *copy_string)(StringData*, const StringData&);

struct Source {
    StringData text;
    int value;

    Source(const Source& other)
    {
        copy_string(&text, other.text);
        value = other.value;
    }
};

struct Base {
    virtual ~Base();
};

struct S : Base {
    Source data;

    S(const Source&);
    virtual ~S();
};

S::S(const Source& source) : data(source)
{
}