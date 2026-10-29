// roc 2010-06 00621d10  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00621d10
//
// 00621d10  6aff                 push -1
// 00621d12  6868a09900           push 0x99a068
// 00621d17  64a100000000         mov eax, dword ptr fs:[0]
// 00621d1d  50                   push eax
// 00621d1e  64892500000000       mov dword ptr fs:[0], esp
// 00621d25  51                   push ecx
// 00621d26  53                   push ebx
// 00621d27  56                   push esi
// 00621d28  8bf1                 mov esi, ecx
// 00621d2a  57                   push edi
// 00621d2b  8974240c             mov dword ptr [esp + 0xc], esi
// 00621d2f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00621d33  8d7e04               lea edi, [esi + 4]
// 00621d36  53                   push ebx
// 00621d37  8bcf                 mov ecx, edi
// 00621d39  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00621d41  c706d447a300         mov dword ptr [esi], 0xa347d4
// 00621d47  ff150ca49e00         call dword ptr [0x9ea40c]
// 00621d4d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00621d50  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00621d54  89471c               mov dword ptr [edi + 0x1c], eax
// 00621d57  5f                   pop edi
// 00621d58  8bc6                 mov eax, esi
// 00621d5a  5e                   pop esi
// 00621d5b  5b                   pop ebx
// 00621d5c  64890d00000000       mov dword ptr fs:[0], ecx
// 00621d63  83c410               add esp, 0x10
// 00621d66  c20400               ret 4
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