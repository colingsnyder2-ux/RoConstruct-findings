// roc 2010-06 005f5e20  unit: RBX::P8HopperBin::?$SetImpl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f5e20
//
// 005f5e20  6aff                 push -1
// 005f5e22  6868a09900           push 0x99a068
// 005f5e27  64a100000000         mov eax, dword ptr fs:[0]
// 005f5e2d  50                   push eax
// 005f5e2e  64892500000000       mov dword ptr fs:[0], esp
// 005f5e35  51                   push ecx
// 005f5e36  53                   push ebx
// 005f5e37  56                   push esi
// 005f5e38  8bf1                 mov esi, ecx
// 005f5e3a  57                   push edi
// 005f5e3b  8974240c             mov dword ptr [esp + 0xc], esi
// 005f5e3f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005f5e43  8d7e04               lea edi, [esi + 4]
// 005f5e46  53                   push ebx
// 005f5e47  8bcf                 mov ecx, edi
// 005f5e49  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005f5e51  c706e8f8a200         mov dword ptr [esi], 0xa2f8e8
// 005f5e57  ff150ca49e00         call dword ptr [0x9ea40c]
// 005f5e5d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005f5e60  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f5e64  89471c               mov dword ptr [edi + 0x1c], eax
// 005f5e67  5f                   pop edi
// 005f5e68  8bc6                 mov eax, esi
// 005f5e6a  5e                   pop esi
// 005f5e6b  5b                   pop ebx
// 005f5e6c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f5e73  83c410               add esp, 0x10
// 005f5e76  c20400               ret 4
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