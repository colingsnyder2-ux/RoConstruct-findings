// from server: 100% by colin
// roc 2007-08 00574080  unit: RBX::PartInstance  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574080
//
// 00574080  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00574086  33c9                 xor ecx, ecx
// 00574088  39486c               cmp dword ptr [eax + 0x6c], ecx
// 0057408b  0f95c1               setne cl
// 0057408e  8ac1                 mov al, cl
// 00574090  c3                   ret 

struct S_00574080_inner {
    char pad[0x6c];
    void* value;
};

struct S_00574080 {
    char pad[0x1d8];
    S_00574080_inner* ptr;
    bool f();
};

bool S_00574080::f() {
    return ptr->value != 0;
}
