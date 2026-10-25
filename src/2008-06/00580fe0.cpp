// from server: 100% by king_originala
// roc 2008-06 00580fe0  unit: RBX::DuplicateSelectionVerb  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00580fe0
//
// 00580fe0  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00580fe3  85c9                 test ecx, ecx
// 00580fe5  7407                 je 0x580fee
// 00580fe7  e8c443e9ff           call 0x4153b0
// 00580fec  eb02                 jmp 0x580ff0
// 00580fee  33c0                 xor eax, eax
// 00580ff0  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 00580ff6  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00580ff9  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00580ffc  33d2                 xor edx, edx
// 00580ffe  c1f903               sar ecx, 3
// 00581001  3bd1                 cmp edx, ecx
// 00581003  1bc0                 sbb eax, eax
// 00581005  f7d8                 neg eax
// 00581007  c3                   ret 

struct Element {
    unsigned int data[2];
};

struct Selection {
    char padding[12];
    Element* first;
    Element* last;
};

struct Context {
    char padding[0x154];
    Selection* selection;
};

struct Owner {
    Context* getContext();
};

struct DuplicateSelectionVerb {
    char padding[0x20];
    Owner* owner;
    bool isEnabled();
};

bool DuplicateSelectionVerb::isEnabled()
{
    Context* context = owner ? owner->getContext() : 0;
    Selection* selection = context->selection;
    return static_cast<unsigned int>(selection->last - selection->first) > 0;
}
