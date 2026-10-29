// roc 2010-06 004e6260  unit: G3D::VCoordinateFrame::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6260
//
// 004e6260  6aff                 push -1
// 004e6262  6868a09900           push 0x99a068
// 004e6267  64a100000000         mov eax, dword ptr fs:[0]
// 004e626d  50                   push eax
// 004e626e  64892500000000       mov dword ptr fs:[0], esp
// 004e6275  51                   push ecx
// 004e6276  53                   push ebx
// 004e6277  56                   push esi
// 004e6278  8bf1                 mov esi, ecx
// 004e627a  57                   push edi
// 004e627b  8974240c             mov dword ptr [esp + 0xc], esi
// 004e627f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004e6283  8d7e04               lea edi, [esi + 4]
// 004e6286  53                   push ebx
// 004e6287  8bcf                 mov ecx, edi
// 004e6289  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004e6291  c706d8b0a100         mov dword ptr [esi], 0xa1b0d8
// 004e6297  ff150ca49e00         call dword ptr [0x9ea40c]
// 004e629d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 004e62a0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e62a4  89471c               mov dword ptr [edi + 0x1c], eax
// 004e62a7  5f                   pop edi
// 004e62a8  8bc6                 mov eax, esi
// 004e62aa  5e                   pop esi
// 004e62ab  5b                   pop ebx
// 004e62ac  64890d00000000       mov dword ptr fs:[0], ecx
// 004e62b3  83c410               add esp, 0x10
// 004e62b6  c20400               ret 4
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