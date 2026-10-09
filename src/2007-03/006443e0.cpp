// roc 2007-03 006443e0  unit: seg_00640000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006443e0
//
// 006443e0  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 006443e6  33c9                 xor ecx, ecx
// 006443e8  394834               cmp dword ptr [eax + 0x34], ecx
// 006443eb  0f95c1               setne cl
// 006443ee  8bc1                 mov eax, ecx
// 006443f0  c3                   ret 
// copied from an identical function in another client (function ?func@Outer@ns_ROCX000024@@QAEHXZ)

namespace ns_ROCX000024 {
struct Inner {
    char pad[0x34];
    int value;
};

struct Outer {
    char pad[0xa8];
    Inner* ptr;
    int func();
};

int Outer::func() {
    return ptr->value != 0;
}
}
