// roc 2010-06 00643fa0  unit: RBX::VAnimation::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00643fa0
//
// 00643fa0  6aff                 push -1
// 00643fa2  6868a09900           push 0x99a068
// 00643fa7  64a100000000         mov eax, dword ptr fs:[0]
// 00643fad  50                   push eax
// 00643fae  64892500000000       mov dword ptr fs:[0], esp
// 00643fb5  51                   push ecx
// 00643fb6  53                   push ebx
// 00643fb7  56                   push esi
// 00643fb8  8bf1                 mov esi, ecx
// 00643fba  57                   push edi
// 00643fbb  8974240c             mov dword ptr [esp + 0xc], esi
// 00643fbf  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00643fc3  8d7e04               lea edi, [esi + 4]
// 00643fc6  53                   push ebx
// 00643fc7  8bcf                 mov ecx, edi
// 00643fc9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00643fd1  c706bc71a300         mov dword ptr [esi], 0xa371bc
// 00643fd7  ff150ca49e00         call dword ptr [0x9ea40c]
// 00643fdd  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00643fe0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00643fe4  89471c               mov dword ptr [edi + 0x1c], eax
// 00643fe7  5f                   pop edi
// 00643fe8  8bc6                 mov eax, esi
// 00643fea  5e                   pop esi
// 00643feb  5b                   pop ebx
// 00643fec  64890d00000000       mov dword ptr fs:[0], ecx
// 00643ff3  83c410               add esp, 0x10
// 00643ff6  c20400               ret 4
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