// roc 2009-12 006df2e0  unit: RBX::VExtrudedPartInstance::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006df2e0
//
// 006df2e0  6aff                 push -1
// 006df2e2  6888989300           push 0x939888
// 006df2e7  64a100000000         mov eax, dword ptr fs:[0]
// 006df2ed  50                   push eax
// 006df2ee  64892500000000       mov dword ptr fs:[0], esp
// 006df2f5  51                   push ecx
// 006df2f6  53                   push ebx
// 006df2f7  56                   push esi
// 006df2f8  8bf1                 mov esi, ecx
// 006df2fa  57                   push edi
// 006df2fb  8974240c             mov dword ptr [esp + 0xc], esi
// 006df2ff  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006df303  8d7e04               lea edi, [esi + 4]
// 006df306  53                   push ebx
// 006df307  8bcf                 mov ecx, edi
// 006df309  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006df311  c706c4a29d00         mov dword ptr [esi], 0x9da2c4
// 006df317  ff15f0b69800         call dword ptr [0x98b6f0]
// 006df31d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 006df320  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006df324  89471c               mov dword ptr [edi + 0x1c], eax
// 006df327  5f                   pop edi
// 006df328  8bc6                 mov eax, esi
// 006df32a  5e                   pop esi
// 006df32b  5b                   pop ebx
// 006df32c  64890d00000000       mov dword ptr fs:[0], ecx
// 006df333  83c410               add esp, 0x10
// 006df336  c20400               ret 4
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