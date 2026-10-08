// from server: 58% by colin
// roc 2011-06 005d7540  unit: RBX::VBasicPartInstance::?$ActionStation  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005d7540
//
// 005d7540  8d8170ffffff         lea eax, [ecx - 0x90]
// 005d7546  c3                   ret 

struct RBX_VBasicPartInstance {
    // Assuming the structure layout based on the given assembly
    char _padding[0x90];
};

int func_005d7540(RBX_VBasicPartInstance* thisPtr) {
    return (int)((char*)thisPtr - 0x90);
}
