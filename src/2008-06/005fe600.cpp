// from server: 100% by tester
// roc 2008-06 005fe600  unit: RBX::Tool  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe600
//
// 005fe600  33c0                 xor eax, eax
// 005fe602  83b9c401000005       cmp dword ptr [ecx + 0x1c4], 5
// 005fe609  0f9dc0               setge al
// 005fe60c  c3                   ret 

struct RBX_Tool {
    char pad[0x1c4];
    int field_0x120;
    bool isReady();
};

bool RBX_Tool::isReady() {
    return field_0x120 >= 5;
}
