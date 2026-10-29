// roc 2011-06 0059eec0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059eec0
//
// 0059eec0  6aff                 push -1
// 0059eec2  68a82b9e00           push 0x9e2ba8
// 0059eec7  64a100000000         mov eax, dword ptr fs:[0]
// 0059eecd  50                   push eax
// 0059eece  64892500000000       mov dword ptr fs:[0], esp
// 0059eed5  51                   push ecx
// 0059eed6  53                   push ebx
// 0059eed7  56                   push esi
// 0059eed8  8bf1                 mov esi, ecx
// 0059eeda  57                   push edi
// 0059eedb  8974240c             mov dword ptr [esp + 0xc], esi
// 0059eedf  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0059eee3  8d7e04               lea edi, [esi + 4]
// 0059eee6  53                   push ebx
// 0059eee7  8bcf                 mov ecx, edi
// 0059eee9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0059eef1  c706e8c7a800         mov dword ptr [esi], 0xa8c7e8
// 0059eef7  ff15c804a400         call dword ptr [0xa404c8]
// 0059eefd  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0059ef00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059ef04  89471c               mov dword ptr [edi + 0x1c], eax
// 0059ef07  5f                   pop edi
// 0059ef08  8bc6                 mov eax, esi
// 0059ef0a  5e                   pop esi
// 0059ef0b  5b                   pop ebx
// 0059ef0c  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ef13  83c410               add esp, 0x10
// 0059ef16  c20400               ret 4
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