// from server: 100% by tester
// roc 2008-06 004e5f20  unit: RBX::Block  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5f20
//
// 004e5f20  51                   push ecx
// 004e5f21  56                   push esi
// 004e5f22  57                   push edi
// 004e5f23  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e5f27  8db160010000         lea esi, [ecx + 0x160]
// 004e5f2d  56                   push esi
// 004e5f2e  8bcf                 mov ecx, edi
// 004e5f30  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e5f38  ff155c248000         call dword ptr [0x80245c]
// 004e5f3e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004e5f41  89471c               mov dword ptr [edi + 0x1c], eax
// 004e5f44  8bc7                 mov eax, edi
// 004e5f46  5f                   pop edi
// 004e5f47  5e                   pop esi
// 004e5f48  59                   pop ecx
// 004e5f49  c20400               ret 4

struct Value {
    char stringData[28];
    unsigned int extra;
};

typedef void (__thiscall *StringCopy)(void *, const void *);
extern StringCopy copyString;

struct Block {
    char padding[0x160];
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
