// roc 2010-06 00699c00  unit: RBX::PolyContact  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699c00
//
// 00699c00  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00699c06  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00699c09  8b8198000000         mov eax, dword ptr [ecx + 0x98]
// 00699c0f  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000013@@QAEHXZ)

namespace ns_ROCX000013 {
struct S
{
    int f();
};

int S::f()
{
    struct A
    {
        char pad[0xd0];
        void* p;
    };

    struct B
    {
        char pad[0x24];
        void* p;
    };

    struct C
    {
        char pad[0x98];
        int value;
    };

    return ((C*)((B*)((A*)this)->p)->p)->value;
}
}
