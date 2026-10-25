// from server: 100% by king_originala
// roc 2008-06 00669150  unit: RBX::TreeStage  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669150
//
// 00669150  83ec10               sub esp, 0x10
// 00669153  53                   push ebx
// 00669154  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00669158  894c2404             mov dword ptr [esp + 4], ecx
// 0066915c  56                   push esi
// 0066915d  8bcb                 mov ecx, ebx
// 0066915f  e82ceaf7ff           call 0x5e7b90
// 00669164  8bf0                 mov esi, eax
// 00669166  85f6                 test esi, esi
// 00669168  746e                 je 0x6691d8
// 0066916a  55                   push ebp
// 0066916b  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0066916f  57                   push edi
// 00669170  807e2400             cmp byte ptr [esi + 0x24], 0
// 00669174  7452                 je 0x6691c8
// 00669176  8b06                 mov eax, dword ptr [esi]
// 00669178  8b500c               mov edx, dword ptr [eax + 0xc]
// 0066917b  8bce                 mov ecx, esi
// 0066917d  ffd2                 call edx
// 0066917f  85c0                 test eax, eax
// 00669181  7545                 jne 0x6691c8
// 00669183  8b06                 mov eax, dword ptr [esi]
// 00669185  8b5014               mov edx, dword ptr [eax + 0x14]
// 00669188  8bce                 mov ecx, esi
// 0066918a  ffd2                 call edx
// 0066918c  83f805               cmp eax, 5
// 0066918f  7c37                 jl 0x6691c8
// 00669191  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00669194  3bdf                 cmp ebx, edi
// 00669196  7503                 jne 0x66919b
// 00669198  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0066919b  56                   push esi
// 0066919c  897c2428             mov dword ptr [esp + 0x28], edi
// 006691a0  e8ebe2f7ff           call 0x5e7490
// 006691a5  83c404               add esp, 4
// 006691a8  3bf8                 cmp edi, eax
// 006691aa  751c                 jne 0x6691c8
// 006691ac  8d442424             lea eax, [esp + 0x24]
// 006691b0  50                   push eax
// 006691b1  8d4c2418             lea ecx, [esp + 0x18]
// 006691b5  51                   push ecx
// 006691b6  8bcd                 mov ecx, ebp
// 006691b8  e883faf7ff           call 0x5e8c40
// 006691bd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006691c1  55                   push ebp
// 006691c2  57                   push edi
// 006691c3  e888ffffff           call 0x669150
// 006691c8  56                   push esi
// 006691c9  8bcb                 mov ecx, ebx
// 006691cb  e8d0e9f7ff           call 0x5e7ba0
// 006691d0  8bf0                 mov esi, eax
// 006691d2  85f6                 test esi, esi
// 006691d4  759a                 jne 0x669170
// 006691d6  5f                   pop edi
// 006691d7  5d                   pop ebp
// 006691d8  5e                   pop esi
// 006691d9  5b                   pop ebx
// 006691da  83c410               add esp, 0x10
// 006691dd  c20800               ret 8

struct Primitive;
struct Edge;

struct InsertResult
{
    void* data[3];
};

struct Primitive
{
    Edge* first();
    Edge* next(Edge*);
    InsertResult insert(Primitive* const&);
};

struct Edge
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int inactive();
    virtual void v4();
    virtual int kind();

    unsigned char padding0[8];
    Primitive* endpoint0;
    Primitive* endpoint1;
    unsigned char padding1[16];
    unsigned char enabled;
};

Primitive* __cdecl selectedEndpoint(Edge*);

struct TreeStage
{
    void process(Primitive*, Primitive*);
};

void TreeStage::process(Primitive* primitive, Primitive* collection)
{
    Edge* edge = primitive->first();
    while (edge)
    {
        if (edge->enabled && !edge->inactive() && edge->kind() >= 5)
        {
            Primitive* other = edge->endpoint0;
            if (primitive == other)
                other = edge->endpoint1;

            Primitive* value = other;
            if (other == selectedEndpoint(edge))
            {
                collection->insert(value);
                process(other, collection);
            }
        }
        edge = primitive->next(edge);
    }
}
