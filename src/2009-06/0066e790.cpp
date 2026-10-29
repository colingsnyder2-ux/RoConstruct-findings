// roc 2009-06 0066e790  unit: RBX::VHumanoid::?$EventDesc  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066e790
//
// 0066e790  6aff                 push -1
// 0066e792  68a8688600           push 0x8668a8
// 0066e797  64a100000000         mov eax, dword ptr fs:[0]
// 0066e79d  50                   push eax
// 0066e79e  64892500000000       mov dword ptr fs:[0], esp
// 0066e7a5  51                   push ecx
// 0066e7a6  53                   push ebx
// 0066e7a7  56                   push esi
// 0066e7a8  8bf1                 mov esi, ecx
// 0066e7aa  57                   push edi
// 0066e7ab  8974240c             mov dword ptr [esp + 0xc], esi
// 0066e7af  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0066e7b3  8d7e04               lea edi, [esi + 4]
// 0066e7b6  53                   push ebx
// 0066e7b7  8bcf                 mov ecx, edi
// 0066e7b9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0066e7c1  c70698338e00         mov dword ptr [esi], 0x8e3398
// 0066e7c7  ff15b8e48900         call dword ptr [0x89e4b8]
// 0066e7cd  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0066e7d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066e7d4  89471c               mov dword ptr [edi + 0x1c], eax
// 0066e7d7  5f                   pop edi
// 0066e7d8  8bc6                 mov eax, esi
// 0066e7da  5e                   pop esi
// 0066e7db  5b                   pop ebx
// 0066e7dc  64890d00000000       mov dword ptr fs:[0], ecx
// 0066e7e3  83c410               add esp, 0x10
// 0066e7e6  c20400               ret 4
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