// roc 2012-06 005ae540  unit: RBX::Network::ErrorCompPhysicsSender  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ae540
//
// 005ae540  85c9                 test ecx, ecx
// 005ae542  7405                 je 0x5ae549
// 005ae544  8d41f4               lea eax, [ecx - 0xc]
// 005ae547  eb02                 jmp 0x5ae54b
// 005ae549  33c0                 xor eax, eax
// 005ae54b  8b4004               mov eax, dword ptr [eax + 4]
// 005ae54e  836060fe             and dword ptr [eax + 0x60], 0xfffffffe
// 005ae552  83c060               add eax, 0x60
// 005ae555  85c9                 test ecx, ecx
// 005ae557  7405                 je 0x5ae55e
// 005ae559  8d41f4               lea eax, [ecx - 0xc]
// 005ae55c  eb02                 jmp 0x5ae560
// 005ae55e  33c0                 xor eax, eax
// 005ae560  8b4004               mov eax, dword ptr [eax + 4]
// 005ae563  83606001             and dword ptr [eax + 0x60], 1
// 005ae567  83c060               add eax, 0x60
// 005ae56a  85c9                 test ecx, ecx
// 005ae56c  7405                 je 0x5ae573
// 005ae56e  8d41f4               lea eax, [ecx - 0xc]
// 005ae571  eb02                 jmp 0x5ae575
// 005ae573  33c0                 xor eax, eax
// 005ae575  8b4004               mov eax, dword ptr [eax + 4]
// 005ae578  85c0                 test eax, eax
// 005ae57a  7405                 je 0x5ae581
// 005ae57c  8d5060               lea edx, [eax + 0x60]
// 005ae57f  eb02                 jmp 0x5ae583
// 005ae581  33d2                 xor edx, edx
// 005ae583  85c9                 test ecx, ecx
// 005ae585  7405                 je 0x5ae58c
// 005ae587  8d41f4               lea eax, [ecx - 0xc]
// 005ae58a  eb02                 jmp 0x5ae58e
// 005ae58c  33c0                 xor eax, eax
// 005ae58e  8b4004               mov eax, dword ptr [eax + 4]
// 005ae591  895064               mov dword ptr [eax + 0x64], edx
// 005ae594  85c9                 test ecx, ecx
// 005ae596  7405                 je 0x5ae59d
// 005ae598  8d41f4               lea eax, [ecx - 0xc]
// 005ae59b  eb02                 jmp 0x5ae59f
// 005ae59d  33c0                 xor eax, eax
// 005ae59f  8b4004               mov eax, dword ptr [eax + 4]
// 005ae5a2  85c0                 test eax, eax
// 005ae5a4  7405                 je 0x5ae5ab
// 005ae5a6  83c060               add eax, 0x60
// 005ae5a9  eb02                 jmp 0x5ae5ad
// 005ae5ab  33c0                 xor eax, eax
// 005ae5ad  85c9                 test ecx, ecx
// 005ae5af  7407                 je 0x5ae5b8
// 005ae5b1  8b49f8               mov ecx, dword ptr [ecx - 8]
// 005ae5b4  894168               mov dword ptr [ecx + 0x68], eax
// 005ae5b7  c3                   ret 
// 005ae5b8  33c9                 xor ecx, ecx
// 005ae5ba  8b5104               mov edx, dword ptr [ecx + 4]
// 005ae5bd  894268               mov dword ptr [edx + 0x68], eax
// 005ae5c0  c3                   ret 
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