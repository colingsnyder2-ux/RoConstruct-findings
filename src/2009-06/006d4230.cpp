// roc 2009-06 006d4230  unit: RBX::Ball  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d4230
//
// 006d4230  a16433a200           mov eax, dword ptr [0xa23364]
// 006d4235  40                   inc eax
// 006d4236  a36433a200           mov dword ptr [0xa23364], eax
// 006d423b  3dffffff7f           cmp eax, 0x7fffffff
// 006d4240  750a                 jne 0x6d424c
// 006d4242  b801000000           mov eax, 1
// 006d4247  a36433a200           mov dword ptr [0xa23364], eax
// 006d424c  898198000000         mov dword ptr [ecx + 0x98], eax
// 006d4252  c3                   ret 
// copied from an identical function in another client (function ?setValue@Ball@ns_ROCX000014@@QAEXXZ)

namespace ns_ROCX000014 {
// from server: 100% by atomic.potato
int g_00B633EC;

struct Ball
{
    char padding[0x98];
    int value;

    void setValue();
};

void Ball::setValue()
{
    int value = ++g_00B633EC;
    if (value == 0x7fffffff)
    {
        value = 1;
        g_00B633EC = value;
    }
    this->value = value;
}
}
