// roc 2011-06 004f4d60  unit: G3D::VCoordinateFrame::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4d60
//
// 004f4d60  6aff                 push -1
// 004f4d62  68a82b9e00           push 0x9e2ba8
// 004f4d67  64a100000000         mov eax, dword ptr fs:[0]
// 004f4d6d  50                   push eax
// 004f4d6e  64892500000000       mov dword ptr fs:[0], esp
// 004f4d75  51                   push ecx
// 004f4d76  53                   push ebx
// 004f4d77  56                   push esi
// 004f4d78  8bf1                 mov esi, ecx
// 004f4d7a  57                   push edi
// 004f4d7b  8974240c             mov dword ptr [esp + 0xc], esi
// 004f4d7f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004f4d83  8d7e04               lea edi, [esi + 4]
// 004f4d86  53                   push ebx
// 004f4d87  8bcf                 mov ecx, edi
// 004f4d89  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004f4d91  c70654b3a700         mov dword ptr [esi], 0xa7b354
// 004f4d97  ff15c804a400         call dword ptr [0xa404c8]
// 004f4d9d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 004f4da0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f4da4  89471c               mov dword ptr [edi + 0x1c], eax
// 004f4da7  5f                   pop edi
// 004f4da8  8bc6                 mov eax, esi
// 004f4daa  5e                   pop esi
// 004f4dab  5b                   pop ebx
// 004f4dac  64890d00000000       mov dword ptr fs:[0], ecx
// 004f4db3  83c410               add esp, 0x10
// 004f4db6  c20400               ret 4
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