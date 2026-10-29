// roc 2009-12 0068e9a0  unit: ChatEnter  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068e9a0
//
// 0068e9a0  6aff                 push -1
// 0068e9a2  6888989300           push 0x939888
// 0068e9a7  64a100000000         mov eax, dword ptr fs:[0]
// 0068e9ad  50                   push eax
// 0068e9ae  64892500000000       mov dword ptr fs:[0], esp
// 0068e9b5  51                   push ecx
// 0068e9b6  53                   push ebx
// 0068e9b7  56                   push esi
// 0068e9b8  8bf1                 mov esi, ecx
// 0068e9ba  57                   push edi
// 0068e9bb  8974240c             mov dword ptr [esp + 0xc], esi
// 0068e9bf  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0068e9c3  8d7e04               lea edi, [esi + 4]
// 0068e9c6  53                   push ebx
// 0068e9c7  8bcf                 mov ecx, edi
// 0068e9c9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0068e9d1  c70688159d00         mov dword ptr [esi], 0x9d1588
// 0068e9d7  ff15f0b69800         call dword ptr [0x98b6f0]
// 0068e9dd  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0068e9e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068e9e4  89471c               mov dword ptr [edi + 0x1c], eax
// 0068e9e7  5f                   pop edi
// 0068e9e8  8bc6                 mov eax, esi
// 0068e9ea  5e                   pop esi
// 0068e9eb  5b                   pop ebx
// 0068e9ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0068e9f3  83c410               add esp, 0x10
// 0068e9f6  c20400               ret 4
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