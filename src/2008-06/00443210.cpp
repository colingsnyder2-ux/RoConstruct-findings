// from server: 100% by king_originala
// roc 2008-06 00443210  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443210
//
// 00443210  8b8930010000         mov ecx, dword ptr [ecx + 0x130]
// 00443216  85c9                 test ecx, ecx
// 00443218  7405                 je 0x44321f
// 0044321a  e921ffffff           jmp 0x443140
// 0044321f  33c0                 xor eax, eax
// 00443221  c20800               ret 8

struct Target {
    int invoke(int a, int b);
};

struct S {
    char padding[0x130];
    Target* target;
    int invoke(int a, int b);
};

int S::invoke(int a, int b)
{
    if (target)
        return target->invoke(a, b);
    return 0;
}
