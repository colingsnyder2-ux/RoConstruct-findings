// from server: 100% by colinlaptop
// roc 2007-08 005d2d00  unit: RBX::Tool  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2d00
//
// 005d2d00  33c0                 xor eax, eax
// 005d2d02  83b96c01000005       cmp dword ptr [ecx + 0x16c], 5
// 005d2d09  0f9dc0               setge al
// 005d2d0c  c3                   ret 

struct RBX_Tool {
    int checkPermission();
};

int RBX_Tool::checkPermission() {
    if (*(int*)((char*)this + 0x16c) >= 5) {
        return 1;
    } else {
        return 0;
    }
}
