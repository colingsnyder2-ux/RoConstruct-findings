// roc 2009-06 00624c50  unit: ChatEnter  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624c50
//
// 00624c50  6aff                 push -1
// 00624c52  68a8688600           push 0x8668a8
// 00624c57  64a100000000         mov eax, dword ptr fs:[0]
// 00624c5d  50                   push eax
// 00624c5e  64892500000000       mov dword ptr fs:[0], esp
// 00624c65  51                   push ecx
// 00624c66  53                   push ebx
// 00624c67  56                   push esi
// 00624c68  8bf1                 mov esi, ecx
// 00624c6a  57                   push edi
// 00624c6b  8974240c             mov dword ptr [esp + 0xc], esi
// 00624c6f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00624c73  8d7e04               lea edi, [esi + 4]
// 00624c76  53                   push ebx
// 00624c77  8bcf                 mov ecx, edi
// 00624c79  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00624c81  c706349e8d00         mov dword ptr [esi], 0x8d9e34
// 00624c87  ff15b8e48900         call dword ptr [0x89e4b8]
// 00624c8d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00624c90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00624c94  89471c               mov dword ptr [edi + 0x1c], eax
// 00624c97  5f                   pop edi
// 00624c98  8bc6                 mov eax, esi
// 00624c9a  5e                   pop esi
// 00624c9b  5b                   pop ebx
// 00624c9c  64890d00000000       mov dword ptr fs:[0], ecx
// 00624ca3  83c410               add esp, 0x10
// 00624ca6  c20400               ret 4
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