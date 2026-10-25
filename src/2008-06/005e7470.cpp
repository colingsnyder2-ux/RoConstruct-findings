// from server: 100% by king_originala
// roc 2008-06 005e7470  unit: RBX::Ball  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7470
//
// 005e7470  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 005e7476  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005e7479  85c9                 test ecx, ecx
// 005e747b  7407                 je 0x5e7484
// 005e747d  e8eefeffff           call 0x5e7370
// 005e7482  40                   inc eax
// 005e7483  c3                   ret 
// 005e7484  b801000000           mov eax, 1
// 005e7489  c3                   ret 

struct Node {
    int func_005e7370();
};

struct Link {
    char padding[0x14];
    Node* node;
    __forceinline int value();
};

struct Ball {
    char padding[0xa0];
    Link* link;
    int func_005e7470();
};

__forceinline int Link::value()
{
    if (node)
        return node->func_005e7370() + 1;
    return 1;
}

int Ball::func_005e7470()
{
    return link->value();
}
