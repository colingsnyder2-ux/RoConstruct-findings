// roc 2011-06 0062d930  unit: RBX::VStarterPackService::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062d930
//
// 0062d930  6aff                 push -1
// 0062d932  68a82b9e00           push 0x9e2ba8
// 0062d937  64a100000000         mov eax, dword ptr fs:[0]
// 0062d93d  50                   push eax
// 0062d93e  64892500000000       mov dword ptr fs:[0], esp
// 0062d945  51                   push ecx
// 0062d946  53                   push ebx
// 0062d947  56                   push esi
// 0062d948  8bf1                 mov esi, ecx
// 0062d94a  57                   push edi
// 0062d94b  8974240c             mov dword ptr [esp + 0xc], esi
// 0062d94f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0062d953  8d7e04               lea edi, [esi + 4]
// 0062d956  53                   push ebx
// 0062d957  8bcf                 mov ecx, edi
// 0062d959  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0062d961  c706085da900         mov dword ptr [esi], 0xa95d08
// 0062d967  ff15c804a400         call dword ptr [0xa404c8]
// 0062d96d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0062d970  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062d974  89471c               mov dword ptr [edi + 0x1c], eax
// 0062d977  5f                   pop edi
// 0062d978  8bc6                 mov eax, esi
// 0062d97a  5e                   pop esi
// 0062d97b  5b                   pop ebx
// 0062d97c  64890d00000000       mov dword ptr fs:[0], ecx
// 0062d983  83c410               add esp, 0x10
// 0062d986  c20400               ret 4
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