// from server: 100% by atomic.potato
// roc 2008-06 00449440  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449440
//
// 00449440  a158d39600           mov eax, dword ptr [0x96d358]
// 00449445  85c0                 test eax, eax
// 00449447  750b                 jne 0x449454
// 00449449  8b8130010000         mov eax, dword ptr [ecx + 0x130]
// 0044944f  a358d39600           mov dword ptr [0x96d358], eax
// 00449454  c3                   ret 

int g_value;

struct S
{
    int f();
    char padding[0x130];
    int value;
};

int S::f()
{
    if (!g_value)
        g_value = value;
    return g_value;
}
