// from server: 100% by king_originala
// roc 2008-06 005564a0  unit: RBX::VRunService::?$SignalDesc  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005564a0
//
// 005564a0  56                   push esi
// 005564a1  8d442408             lea eax, [esp + 8]
// 005564a5  8bf1                 mov esi, ecx
// 005564a7  50                   push eax
// 005564a8  c70600000000         mov dword ptr [esi], 0
// 005564ae  e83d3e0b00           call 0x60a2f0
// 005564b3  83c404               add esp, 4
// 005564b6  84c0                 test al, al
// 005564b8  7526                 jne 0x5564e0
// 005564ba  8d4e08               lea ecx, [esi + 8]
// 005564bd  85c9                 test ecx, ecx
// 005564bf  740a                 je 0x5564cb
// 005564c1  8d542408             lea edx, [esp + 8]
// 005564c5  52                   push edx
// 005564c6  e875ebffff           call 0x555040
// 005564cb  8d4c2410             lea ecx, [esp + 0x10]
// 005564cf  c7061cd58200         mov dword ptr [esi], 0x82d51c
// 005564d5  e886c7ecff           call 0x422c60
// 005564da  8bc6                 mov eax, esi
// 005564dc  5e                   pop esi
// 005564dd  c21c00               ret 0x1c
// 005564e0  8d4c2410             lea ecx, [esp + 0x10]
// 005564e4  c70600000000         mov dword ptr [esi], 0
// 005564ea  e871c7ecff           call 0x422c60
// 005564ef  8bc6                 mov eax, esi
// 005564f1  5e                   pop esi
// 005564f2  c21c00               ret 0x1c

struct Pair
{
    unsigned int data[2];
};

struct Value
{
    unsigned int data[5];
    void destroy();
};

struct Product
{
    unsigned int data[5];
    Product* copy(const Pair*);
};

extern bool __cdecl func_0060a2f0(const Pair*);
extern unsigned char descriptor[];

struct S
{
    void* descriptorPointer;
    unsigned int reserved;
    Product product;

    S* initialize(Pair, Value);
};

S* S::initialize(Pair source, Value value)
{
    descriptorPointer = 0;
    if (!func_0060a2f0(&source))
    {
        Product* destination = &product;
        if (destination)
            destination->copy(&source);
        descriptorPointer = descriptor;
        value.destroy();
        return this;
    }

    descriptorPointer = 0;
    value.destroy();
    return this;
}
