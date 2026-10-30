// roc 2009-06 00643be0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00643be0
//
// 00643be0  6aff                 push -1
// 00643be2  68a8688600           push 0x8668a8
// 00643be7  64a100000000         mov eax, dword ptr fs:[0]
// 00643bed  50                   push eax
// 00643bee  64892500000000       mov dword ptr fs:[0], esp
// 00643bf5  51                   push ecx
// 00643bf6  53                   push ebx
// 00643bf7  56                   push esi
// 00643bf8  8bf1                 mov esi, ecx
// 00643bfa  57                   push edi
// 00643bfb  8974240c             mov dword ptr [esp + 0xc], esi
// 00643bff  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00643c03  8d7e04               lea edi, [esi + 4]
// 00643c06  53                   push ebx
// 00643c07  8bcf                 mov ecx, edi
// 00643c09  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00643c11  c70664e48d00         mov dword ptr [esi], 0x8de464
// 00643c17  ff15b8e48900         call dword ptr [0x89e4b8]
// 00643c1d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00643c20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00643c24  89471c               mov dword ptr [edi + 0x1c], eax
// 00643c27  5f                   pop edi
// 00643c28  8bc6                 mov eax, esi
// 00643c2a  5e                   pop esi
// 00643c2b  5b                   pop ebx
// 00643c2c  64890d00000000       mov dword ptr fs:[0], ecx
// 00643c33  83c410               add esp, 0x10
// 00643c36  c20400               ret 4
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