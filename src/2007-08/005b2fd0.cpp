// from server: 61% by colin
// roc 2007-08 005b2fd0  unit: RBX::Assembly  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2fd0
//
// 005b2fd0  8b4108               mov eax, dword ptr [ecx + 8]
// 005b2fd3  83782800             cmp dword ptr [eax + 0x28], 0
// 005b2fd7  750b                 jne 0x5b2fe4
// 005b2fd9  833800               cmp dword ptr [eax], 0
// 005b2fdc  7506                 jne 0x5b2fe4
// 005b2fde  b801000000           mov eax, 1
// 005b2fe3  c3                   ret 
// 005b2fe4  33c0                 xor eax, eax
// 005b2fe6  c3                   ret 

struct Assembly {
    char pad[8];
    int* field8;
    bool method();
};

bool Assembly::method() {
    int* p = field8;
    if (p[10] == 0)
        return false;
    if (p[0] != 0)
        return false;
    return true;
}
