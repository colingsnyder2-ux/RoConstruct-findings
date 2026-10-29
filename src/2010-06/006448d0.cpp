// roc 2010-06 006448d0  unit: RBX::Animation  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006448d0
//
// 006448d0  6aff                 push -1
// 006448d2  6868a09900           push 0x99a068
// 006448d7  64a100000000         mov eax, dword ptr fs:[0]
// 006448dd  50                   push eax
// 006448de  64892500000000       mov dword ptr fs:[0], esp
// 006448e5  51                   push ecx
// 006448e6  53                   push ebx
// 006448e7  56                   push esi
// 006448e8  8bf1                 mov esi, ecx
// 006448ea  57                   push edi
// 006448eb  8974240c             mov dword ptr [esp + 0xc], esi
// 006448ef  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006448f3  8d7e04               lea edi, [esi + 4]
// 006448f6  53                   push ebx
// 006448f7  8bcf                 mov ecx, edi
// 006448f9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00644901  c706fc72a300         mov dword ptr [esi], 0xa372fc
// 00644907  ff150ca49e00         call dword ptr [0x9ea40c]
// 0064490d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00644910  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00644914  89471c               mov dword ptr [edi + 0x1c], eax
// 00644917  5f                   pop edi
// 00644918  8bc6                 mov eax, esi
// 0064491a  5e                   pop esi
// 0064491b  5b                   pop ebx
// 0064491c  64890d00000000       mov dword ptr fs:[0], ecx
// 00644923  83c410               add esp, 0x10
// 00644926  c20400               ret 4
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