// from server: 100% by tester
// roc 2008-06 005cf160  unit: DxUserInput  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf160
//
// 005cf160  51                   push ecx
// 005cf161  56                   push esi
// 005cf162  57                   push edi
// 005cf163  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005cf167  8db180010000         lea esi, [ecx + 0x180]
// 005cf16d  56                   push esi
// 005cf16e  8bcf                 mov ecx, edi
// 005cf170  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005cf178  ff155c248000         call dword ptr [0x80245c]
// 005cf17e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005cf181  89471c               mov dword ptr [edi + 0x1c], eax
// 005cf184  8bc7                 mov eax, edi
// 005cf186  5f                   pop edi
// 005cf187  5e                   pop esi
// 005cf188  59                   pop ecx
// 005cf189  c20400               ret 4

struct Value {
    char stringData[28];
    unsigned int extra;
};

typedef void (__thiscall *StringCopy)(void *, const void *);
extern StringCopy copyString;

struct Block {
    char padding[0x180];
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
