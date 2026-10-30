// roc 2009-12 00537e60  unit: G3D::VCoordinateFrame::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537e60
//
// 00537e60  6aff                 push -1
// 00537e62  6888989300           push 0x939888
// 00537e67  64a100000000         mov eax, dword ptr fs:[0]
// 00537e6d  50                   push eax
// 00537e6e  64892500000000       mov dword ptr fs:[0], esp
// 00537e75  51                   push ecx
// 00537e76  53                   push ebx
// 00537e77  56                   push esi
// 00537e78  8bf1                 mov esi, ecx
// 00537e7a  57                   push edi
// 00537e7b  8974240c             mov dword ptr [esp + 0xc], esi
// 00537e7f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00537e83  8d7e04               lea edi, [esi + 4]
// 00537e86  53                   push ebx
// 00537e87  8bcf                 mov ecx, edi
// 00537e89  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00537e91  c706f8d19b00         mov dword ptr [esi], 0x9bd1f8
// 00537e97  ff15f0b69800         call dword ptr [0x98b6f0]
// 00537e9d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00537ea0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00537ea4  89471c               mov dword ptr [edi + 0x1c], eax
// 00537ea7  5f                   pop edi
// 00537ea8  8bc6                 mov eax, esi
// 00537eaa  5e                   pop esi
// 00537eab  5b                   pop ebx
// 00537eac  64890d00000000       mov dword ptr fs:[0], ecx
// 00537eb3  83c410               add esp, 0x10
// 00537eb6  c20400               ret 4
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