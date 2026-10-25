// from server: 100% by tester
// roc 2008-06 005d3a00  unit: RBX::VSpawnLocation::?$BoundPropGetSet  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d3a00
//
// 005d3a00  51                   push ecx
// 005d3a01  56                   push esi
// 005d3a02  57                   push edi
// 005d3a03  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005d3a07  8db154010000         lea esi, [ecx + 0x154]
// 005d3a0d  56                   push esi
// 005d3a0e  8bcf                 mov ecx, edi
// 005d3a10  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d3a18  ff155c248000         call dword ptr [0x80245c]
// 005d3a1e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005d3a21  89471c               mov dword ptr [edi + 0x1c], eax
// 005d3a24  8bc7                 mov eax, edi
// 005d3a26  5f                   pop edi
// 005d3a27  5e                   pop esi
// 005d3a28  59                   pop ecx
// 005d3a29  c20400               ret 4

struct Value {
    char stringData[28];
    unsigned int extra;
};

typedef void (__thiscall *StringCopy)(void *, const void *);
extern StringCopy copyString;

struct Block {
    char padding[0x154];
    Value value;
    Value *copy(Value *result);
};

Value *Block::copy(Value *result)
{
    Value *source = &value;
    volatile int state = 0;
    copyString(result, source);
    result->extra = source->extra;
    return result;
}
