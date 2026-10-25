// from server: 100% by king_originala
// roc 2008-06 00582940  unit: RBX::WeldSelectionVerb  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00582940
//
// 00582940  56                   push esi
// 00582941  8bf1                 mov esi, ecx
// 00582943  6a01                 push 1
// 00582945  8d4e14               lea ecx, [esi + 0x14]
// 00582948  e873f3ffff           call 0x581cc0
// 0058294d  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00582953  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00582956  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00582959  c1f903               sar ecx, 3
// 0058295c  85c9                 test ecx, ecx
// 0058295e  7704                 ja 0x582964
// 00582960  32c0                 xor al, al
// 00582962  5e                   pop esi
// 00582963  c3                   ret 
// 00582964  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00582967  85c9                 test ecx, ecx
// 00582969  7407                 je 0x582972
// 0058296b  e8402ae9ff           call 0x4153b0
// 00582970  eb02                 jmp 0x582974
// 00582972  33c0                 xor eax, eax
// 00582974  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 0058297a  8b5010               mov edx, dword ptr [eax + 0x10]
// 0058297d  2b500c               sub edx, dword ptr [eax + 0xc]
// 00582980  33c0                 xor eax, eax
// 00582982  c1fa03               sar edx, 3
// 00582985  3bc2                 cmp eax, edx
// 00582987  1bc0                 sbb eax, eax
// 00582989  f7d8                 neg eax
// 0058298b  5e                   pop esi
// 0058298c  c3                   ret 

struct Item {
    unsigned data[2];
};

struct Selection {
    char padding[12];
    Item* first;
    Item* last;
};

struct Context {
    char padding[0x154];
    Selection* selection;
};

struct Resolver {
    Context* get();
};

struct Handle {
    char padding[12];
    Resolver* resolver;
    Context* get(int);
};

struct S {
    char padding[0x14];
    Handle handle;
    bool f();
};

bool S::f()
{
    Selection* selection = handle.get(1)->selection;
    if (static_cast<unsigned>(selection->last - selection->first) <= 0)
        return false;

    Context* context = handle.resolver ? handle.resolver->get() : 0;
    selection = context->selection;
    return static_cast<unsigned>(selection->last - selection->first) > 0;
}
