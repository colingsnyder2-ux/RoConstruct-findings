// from server: 100% by king_originala
// roc 2008-06 0064a5b0  unit: RBX::CleanStage  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a5b0
//
// 0064a5b0  56                   push esi
// 0064a5b1  57                   push edi
// 0064a5b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064a5b6  837f0400             cmp dword ptr [edi + 4], 0
// 0064a5ba  8bf1                 mov esi, ecx
// 0064a5bc  7425                 je 0x64a5e3
// 0064a5be  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064a5c1  8b01                 mov eax, dword ptr [ecx]
// 0064a5c3  8b5004               mov edx, dword ptr [eax + 4]
// 0064a5c6  53                   push ebx
// 0064a5c7  ffd2                 call edx
// 0064a5c9  8bd8                 mov ebx, eax
// 0064a5cb  8b06                 mov eax, dword ptr [esi]
// 0064a5cd  8b5004               mov edx, dword ptr [eax + 4]
// 0064a5d0  8bce                 mov ecx, esi
// 0064a5d2  ffd2                 call edx
// 0064a5d4  3bd8                 cmp ebx, eax
// 0064a5d6  5b                   pop ebx
// 0064a5d7  7c0a                 jl 0x64a5e3
// 0064a5d9  8b4718               mov eax, dword ptr [edi + 0x18]
// 0064a5dc  8b00                 mov eax, dword ptr [eax]
// 0064a5de  5f                   pop edi
// 0064a5df  5e                   pop esi
// 0064a5e0  c20400               ret 4
// 0064a5e3  5f                   pop edi
// 0064a5e4  33c0                 xor eax, eax
// 0064a5e6  5e                   pop esi
// 0064a5e7  c20400               ret 4

struct Edge {
    int pad0;
    void* prim0;
    int pad8;
    int padC;
    int pad10;
    int pad14;
    void* joint;
};

struct IStage {
    virtual int getStageType();
    virtual int getPriority();
};

struct CleanStage : IStage {
    int getPriority();
    void* primitivesAreOk(Edge* e);
};

void* CleanStage::primitivesAreOk(Edge* e)
{
    if (e->prim0 != 0) {
        if (((IStage*)e->prim0)->getPriority() >= getPriority())
            return *(void**)e->joint;
    }
    return 0;
}
