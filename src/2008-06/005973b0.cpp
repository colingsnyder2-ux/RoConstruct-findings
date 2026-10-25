// from server: 100% by king_originala
// roc 2008-06 005973b0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005973b0
//
// 005973b0  6aff                 push -1
// 005973b2  6898987d00           push 0x7d9898
// 005973b7  64a100000000         mov eax, dword ptr fs:[0]
// 005973bd  50                   push eax
// 005973be  64892500000000       mov dword ptr fs:[0], esp
// 005973c5  51                   push ecx
// 005973c6  53                   push ebx
// 005973c7  56                   push esi
// 005973c8  8bf1                 mov esi, ecx
// 005973ca  57                   push edi
// 005973cb  8974240c             mov dword ptr [esp + 0xc], esi
// 005973cf  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005973d3  8d7e04               lea edi, [esi + 4]
// 005973d6  53                   push ebx
// 005973d7  8bcf                 mov ecx, edi
// 005973d9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005973e1  c7066c238300         mov dword ptr [esi], 0x83236c
// 005973e7  ff155c248000         call dword ptr [0x80245c]
// 005973ed  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005973f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005973f4  89471c               mov dword ptr [edi + 0x1c], eax
// 005973f7  5f                   pop edi
// 005973f8  8bc6                 mov eax, esi
// 005973fa  5e                   pop esi
// 005973fb  5b                   pop ebx
// 005973fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00597403  83c410               add esp, 0x10
// 00597406  c20400               ret 4

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
