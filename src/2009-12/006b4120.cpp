// roc 2009-12 006b4120  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b4120
//
// 006b4120  6aff                 push -1
// 006b4122  6888989300           push 0x939888
// 006b4127  64a100000000         mov eax, dword ptr fs:[0]
// 006b412d  50                   push eax
// 006b412e  64892500000000       mov dword ptr fs:[0], esp
// 006b4135  51                   push ecx
// 006b4136  53                   push ebx
// 006b4137  56                   push esi
// 006b4138  8bf1                 mov esi, ecx
// 006b413a  57                   push edi
// 006b413b  8974240c             mov dword ptr [esp + 0xc], esi
// 006b413f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006b4143  8d7e04               lea edi, [esi + 4]
// 006b4146  53                   push ebx
// 006b4147  8bcf                 mov ecx, edi
// 006b4149  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006b4151  c706f05c9d00         mov dword ptr [esi], 0x9d5cf0
// 006b4157  ff15f0b69800         call dword ptr [0x98b6f0]
// 006b415d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 006b4160  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b4164  89471c               mov dword ptr [edi + 0x1c], eax
// 006b4167  5f                   pop edi
// 006b4168  8bc6                 mov eax, esi
// 006b416a  5e                   pop esi
// 006b416b  5b                   pop ebx
// 006b416c  64890d00000000       mov dword ptr fs:[0], ecx
// 006b4173  83c410               add esp, 0x10
// 006b4176  c20400               ret 4
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