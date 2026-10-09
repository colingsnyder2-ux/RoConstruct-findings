// roc 2007-03 0062f4b0  unit: seg_00620000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f4b0
//
// 0062f4b0  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0062f4b6  85c9                 test ecx, ecx
// 0062f4b8  7405                 je 0x62f4bf
// 0062f4ba  e981980000           jmp 0x638d40
// 0062f4bf  33c0                 xor eax, eax
// 0062f4c1  c3                   ret 
// copied from an identical function in another client (function ?get@CXTPControl@ns_ROCX000041@@QAEHXZ)

namespace ns_ROCX000041 {
struct Inner {
    int method();
};

struct CXTPControl {
    char pad[0xfc];
    Inner* ptr;
    int get();
};

int CXTPControl::get() {
    if (ptr)
        return ptr->method();
    return 0;
}
}
