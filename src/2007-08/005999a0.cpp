// from server: 100% by colin
// roc 2007-08 005999a0  unit: RBX::VCamera::?$FactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005999a0
//
// 005999a0  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 005999a6  85c0                 test eax, eax
// 005999a8  7418                 je 0x5999c2
// 005999aa  6a00                 push 0
// 005999ac  68088f8900           push 0x898f08
// 005999b1  684c1f8800           push 0x881f4c
// 005999b6  6a00                 push 0
// 005999b8  50                   push eax
// 005999b9  e878730900           call 0x630d36
// 005999be  83c414               add esp, 0x14
// 005999c1  c3                   ret 
// 005999c2  33c0                 xor eax, eax
// 005999c4  c3                   ret 

struct VCamera {
    char pad[0x194];
    void* field_194;
    void* getCameraSubject();
};

extern "C" void __cdecl sub_630D36(void*, void*, void*, void*, void*);

void* VCamera::getCameraSubject() {
    void* p = field_194;
    if (p) {
        sub_630D36(p, 0, (void*)0x881f4c, (void*)0x898f08, 0);
    } else {
        return 0;
    }
}
