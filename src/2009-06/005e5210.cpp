// roc 2009-06 005e5210  unit: RBX::ThreadPool::UPoolData::?$sp_counted_impl_p  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5210
//
// 005e5210  6aff                 push -1
// 005e5212  68a8688600           push 0x8668a8
// 005e5217  64a100000000         mov eax, dword ptr fs:[0]
// 005e521d  50                   push eax
// 005e521e  64892500000000       mov dword ptr fs:[0], esp
// 005e5225  51                   push ecx
// 005e5226  53                   push ebx
// 005e5227  56                   push esi
// 005e5228  8bf1                 mov esi, ecx
// 005e522a  57                   push edi
// 005e522b  8974240c             mov dword ptr [esp + 0xc], esi
// 005e522f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005e5233  8d7e04               lea edi, [esi + 4]
// 005e5236  53                   push ebx
// 005e5237  8bcf                 mov ecx, edi
// 005e5239  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005e5241  c7066c5c8d00         mov dword ptr [esi], 0x8d5c6c
// 005e5247  ff15b8e48900         call dword ptr [0x89e4b8]
// 005e524d  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005e5250  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e5254  89471c               mov dword ptr [edi + 0x1c], eax
// 005e5257  5f                   pop edi
// 005e5258  8bc6                 mov eax, esi
// 005e525a  5e                   pop esi
// 005e525b  5b                   pop ebx
// 005e525c  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5263  83c410               add esp, 0x10
// 005e5266  c20400               ret 4
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