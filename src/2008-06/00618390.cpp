// from server: 86% by colin
// from server: 78% by king_originala
// roc 2008-06 00618390  unit: RBX::Flag  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618390
//
// 00618390  8b542404             mov edx, dword ptr [esp + 4]
// 00618394  80ba7c01000000       cmp byte ptr [edx + 0x17c], 0
// 0061839b  7405                 je 0x6183a2
// 0061839d  32c0                 xor al, al
// 0061839f  c20400               ret 4
// 006183a2  8b818c020000         mov eax, dword ptr [ecx + 0x28c]
// 006183a8  398278010000         cmp dword ptr [edx + 0x178], eax
// 006183ae  0f95c0               setne al
// 006183b1  c20400               ret 4

struct Argument
{
    char padding[0x178];
    unsigned long value;
    bool disabled;
};

struct S
{
    char padding[0x28c];
    unsigned long value;

    bool f(const Argument* argument);
};

bool S::f(const Argument* argument)
{
    if (argument->disabled)
        return false;
    if (value != argument->value)
        return true;
    return false;
}
