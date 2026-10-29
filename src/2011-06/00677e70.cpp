// roc 2011-06 00677e70  unit: RBX::VAnimation::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00677e70
//
// 00677e70  6aff                 push -1
// 00677e72  68a82b9e00           push 0x9e2ba8
// 00677e77  64a100000000         mov eax, dword ptr fs:[0]
// 00677e7d  50                   push eax
// 00677e7e  64892500000000       mov dword ptr fs:[0], esp
// 00677e85  51                   push ecx
// 00677e86  53                   push ebx
// 00677e87  56                   push esi
// 00677e88  8bf1                 mov esi, ecx
// 00677e8a  57                   push edi
// 00677e8b  8974240c             mov dword ptr [esp + 0xc], esi
// 00677e8f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00677e93  8d7e04               lea edi, [esi + 4]
// 00677e96  53                   push ebx
// 00677e97  8bcf                 mov ecx, edi
// 00677e99  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00677ea1  c706dcd5a900         mov dword ptr [esi], 0xa9d5dc
// 00677ea7  ff15c804a400         call dword ptr [0xa404c8]
// 00677ead  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00677eb0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00677eb4  89471c               mov dword ptr [edi + 0x1c], eax
// 00677eb7  5f                   pop edi
// 00677eb8  8bc6                 mov eax, esi
// 00677eba  5e                   pop esi
// 00677ebb  5b                   pop ebx
// 00677ebc  64890d00000000       mov dword ptr fs:[0], ecx
// 00677ec3  83c410               add esp, 0x10
// 00677ec6  c20400               ret 4
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