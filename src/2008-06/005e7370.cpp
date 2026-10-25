// from server: 100% by king_originala
// roc 2008-06 005e7370  unit: RBX::ModelInstance  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7370
//
// 005e7370  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005e7373  85c9                 test ecx, ecx
// 005e7375  7407                 je 0x5e737e
// 005e7377  e8f4ffffff           call 0x5e7370
// 005e737c  40                   inc eax
// 005e737d  c3                   ret 
// 005e737e  b801000000           mov eax, 1
// 005e7383  c3                   ret 

struct S {
    char padding[20];
    S* parent;
    int depth();
};

int S::depth() {
    if (parent)
        return parent->depth() + 1;
    return 1;
}
