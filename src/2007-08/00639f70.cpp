// from server: 100% by colin
// roc 2007-08 00639f70  unit: CXTPControl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639f70
//
// 00639f70  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00639f76  85c9                 test ecx, ecx
// 00639f78  7405                 je 0x639f7f
// 00639f7a  e9319a0000           jmp 0x6439b0
// 00639f7f  33c0                 xor eax, eax
// 00639f81  c3                   ret 

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
