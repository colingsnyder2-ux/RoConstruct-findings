// roc 2009-12 0055e300  unit: RBX::Network::NetworkOwnerJob  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055e300
//
// 0055e300  85c9                 test ecx, ecx
// 0055e302  7405                 je 0x55e309
// 0055e304  8d41f4               lea eax, [ecx - 0xc]
// 0055e307  eb02                 jmp 0x55e30b
// 0055e309  33c0                 xor eax, eax
// 0055e30b  8b4004               mov eax, dword ptr [eax + 4]
// 0055e30e  836060fe             and dword ptr [eax + 0x60], 0xfffffffe
// 0055e312  83c060               add eax, 0x60
// 0055e315  85c9                 test ecx, ecx
// 0055e317  7405                 je 0x55e31e
// 0055e319  8d41f4               lea eax, [ecx - 0xc]
// 0055e31c  eb02                 jmp 0x55e320
// 0055e31e  33c0                 xor eax, eax
// 0055e320  8b4004               mov eax, dword ptr [eax + 4]
// 0055e323  83606001             and dword ptr [eax + 0x60], 1
// 0055e327  83c060               add eax, 0x60
// 0055e32a  85c9                 test ecx, ecx
// 0055e32c  7405                 je 0x55e333
// 0055e32e  8d41f4               lea eax, [ecx - 0xc]
// 0055e331  eb02                 jmp 0x55e335
// 0055e333  33c0                 xor eax, eax
// 0055e335  8b4004               mov eax, dword ptr [eax + 4]
// 0055e338  85c0                 test eax, eax
// 0055e33a  7405                 je 0x55e341
// 0055e33c  8d5060               lea edx, [eax + 0x60]
// 0055e33f  eb02                 jmp 0x55e343
// 0055e341  33d2                 xor edx, edx
// 0055e343  85c9                 test ecx, ecx
// 0055e345  7405                 je 0x55e34c
// 0055e347  8d41f4               lea eax, [ecx - 0xc]
// 0055e34a  eb02                 jmp 0x55e34e
// 0055e34c  33c0                 xor eax, eax
// 0055e34e  8b4004               mov eax, dword ptr [eax + 4]
// 0055e351  895064               mov dword ptr [eax + 0x64], edx
// 0055e354  85c9                 test ecx, ecx
// 0055e356  7405                 je 0x55e35d
// 0055e358  8d41f4               lea eax, [ecx - 0xc]
// 0055e35b  eb02                 jmp 0x55e35f
// 0055e35d  33c0                 xor eax, eax
// 0055e35f  8b4004               mov eax, dword ptr [eax + 4]
// 0055e362  85c0                 test eax, eax
// 0055e364  7405                 je 0x55e36b
// 0055e366  83c060               add eax, 0x60
// 0055e369  eb02                 jmp 0x55e36d
// 0055e36b  33c0                 xor eax, eax
// 0055e36d  85c9                 test ecx, ecx
// 0055e36f  7407                 je 0x55e378
// 0055e371  8b49f8               mov ecx, dword ptr [ecx - 8]
// 0055e374  894168               mov dword ptr [ecx + 0x68], eax
// 0055e377  c3                   ret 
// 0055e378  33c9                 xor ecx, ecx
// 0055e37a  8b5104               mov edx, dword ptr [ecx + 4]
// 0055e37d  894268               mov dword ptr [edx + 0x68], eax
// 0055e380  c3                   ret 
// copied from an identical function in another client (function ?reset@S@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Node {
    unsigned int flag : 1;
    unsigned int parent : 31;
    Node* left;
    Node* right;

    Node* clearFlag();
    Node* clearParent();
};

__forceinline Node* Node::clearFlag()
{
    flag = 0;
    return this;
}

__forceinline Node* Node::clearParent()
{
    parent = 0;
    return this;
}

struct Padding {
    unsigned char data[0x60];
};

struct Owner : Padding, Node {
};

struct S {
    unsigned int reserved;
    void reset();
};

struct Prefix {
    unsigned int reserved0;
    Owner* owner;
    unsigned int reserved1;
};

struct Holder : Prefix, S {
};

void S::reset()
{
    static_cast<Holder*>(this)->owner->clearFlag();
    static_cast<Holder*>(this)->owner->clearParent();
    static_cast<Holder*>(this)->owner->left =
        static_cast<Node*>(static_cast<Holder*>(this)->owner);
    static_cast<Holder*>(this)->owner->right =
        static_cast<Node*>(static_cast<Holder*>(this)->owner);
}