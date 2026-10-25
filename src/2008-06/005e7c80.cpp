// from server: 100% by tester
// roc 2008-06 005e7c80  unit: RBX::Geometry  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7c80
//
// 005e7c80  83793c00             cmp dword ptr [ecx + 0x3c], 0
// 005e7c84  7e0c                 jle 0x5e7c92
// 005e7c86  8b4138               mov eax, dword ptr [ecx + 0x38]
// 005e7c89  8b00                 mov eax, dword ptr [eax]
// 005e7c8b  50                   push eax
// 005e7c8c  e87fffffff           call 0x5e7c10
// 005e7c91  c3                   ret 
// 005e7c92  33c0                 xor eax, eax
// 005e7c94  50                   push eax
// 005e7c95  e876ffffff           call 0x5e7c10
// 005e7c9a  c3                   ret 

struct Geometry {
    char pad0[0x38];
    int* field38;
    int field3c;
    int f();
};

int __stdcall helper(int);

int Geometry::f() {
    int value;
    if (field3c > 0) {
        value = *field38;
    } else {
        value = 0;
    }
    return helper(value);
}
