// from server: 100% by king_originala
// roc 2008-06 004adac0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004adac0
//
// 004adac0  51                   push ecx
// 004adac1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004adac5  8d0424               lea eax, [esp]
// 004adac8  50                   push eax
// 004adac9  51                   push ecx
// 004adaca  e86189ffff           call 0x4a6430
// 004adacf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004adad3  83c408               add esp, 8
// 004adad6  83790400             cmp dword ptr [ecx + 4], 0
// 004adada  7409                 je 0x4adae5
// 004adadc  8d1424               lea edx, [esp]
// 004adadf  52                   push edx
// 004adae0  e8bbf7ffff           call 0x4ad2a0
// 004adae5  59                   pop ecx
// 004adae6  c3                   ret 

struct S {
    unsigned int reserved;
    unsigned int count;
    void apply(unsigned int*);
};

extern void __cdecl prepare(void*, unsigned int*);

void __cdecl f(S* object, void* source)
{
    unsigned int value;
    prepare(source, &value);
    if (object->count != 0)
        object->apply(&value);
}
