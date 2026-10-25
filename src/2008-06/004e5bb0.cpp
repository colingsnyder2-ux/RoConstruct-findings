// from server: 100% by tester
// roc 2008-06 004e5bb0  unit: RBX::Block  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5bb0
//
// 004e5bb0  51                   push ecx
// 004e5bb1  56                   push esi
// 004e5bb2  57                   push edi
// 004e5bb3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e5bb7  8db144010000         lea esi, [ecx + 0x144]
// 004e5bbd  56                   push esi
// 004e5bbe  8bcf                 mov ecx, edi
// 004e5bc0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e5bc8  ff155c248000         call dword ptr [0x80245c]
// 004e5bce  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004e5bd1  89471c               mov dword ptr [edi + 0x1c], eax
// 004e5bd4  8bc7                 mov eax, edi
// 004e5bd6  5f                   pop edi
// 004e5bd7  5e                   pop esi
// 004e5bd8  59                   pop ecx
// 004e5bd9  c20400               ret 4

struct Value {
    char stringData[28];
    unsigned int extra;
};

typedef void (__thiscall *StringCopy)(void *, const void *);
extern StringCopy copyString;

struct Block {
    char padding[0x144];
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
