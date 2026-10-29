// roc 2010-06 0050cdc0  unit: RBX::Network::NetworkOwnerJob  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050cdc0
//
// 0050cdc0  85c9                 test ecx, ecx
// 0050cdc2  7405                 je 0x50cdc9
// 0050cdc4  8d41f4               lea eax, [ecx - 0xc]
// 0050cdc7  eb02                 jmp 0x50cdcb
// 0050cdc9  33c0                 xor eax, eax
// 0050cdcb  8b4004               mov eax, dword ptr [eax + 4]
// 0050cdce  836060fe             and dword ptr [eax + 0x60], 0xfffffffe
// 0050cdd2  83c060               add eax, 0x60
// 0050cdd5  85c9                 test ecx, ecx
// 0050cdd7  7405                 je 0x50cdde
// 0050cdd9  8d41f4               lea eax, [ecx - 0xc]
// 0050cddc  eb02                 jmp 0x50cde0
// 0050cdde  33c0                 xor eax, eax
// 0050cde0  8b4004               mov eax, dword ptr [eax + 4]
// 0050cde3  83606001             and dword ptr [eax + 0x60], 1
// 0050cde7  83c060               add eax, 0x60
// 0050cdea  85c9                 test ecx, ecx
// 0050cdec  7405                 je 0x50cdf3
// 0050cdee  8d41f4               lea eax, [ecx - 0xc]
// 0050cdf1  eb02                 jmp 0x50cdf5
// 0050cdf3  33c0                 xor eax, eax
// 0050cdf5  8b4004               mov eax, dword ptr [eax + 4]
// 0050cdf8  85c0                 test eax, eax
// 0050cdfa  7405                 je 0x50ce01
// 0050cdfc  8d5060               lea edx, [eax + 0x60]
// 0050cdff  eb02                 jmp 0x50ce03
// 0050ce01  33d2                 xor edx, edx
// 0050ce03  85c9                 test ecx, ecx
// 0050ce05  7405                 je 0x50ce0c
// 0050ce07  8d41f4               lea eax, [ecx - 0xc]
// 0050ce0a  eb02                 jmp 0x50ce0e
// 0050ce0c  33c0                 xor eax, eax
// 0050ce0e  8b4004               mov eax, dword ptr [eax + 4]
// 0050ce11  895064               mov dword ptr [eax + 0x64], edx
// 0050ce14  85c9                 test ecx, ecx
// 0050ce16  7405                 je 0x50ce1d
// 0050ce18  8d41f4               lea eax, [ecx - 0xc]
// 0050ce1b  eb02                 jmp 0x50ce1f
// 0050ce1d  33c0                 xor eax, eax
// 0050ce1f  8b4004               mov eax, dword ptr [eax + 4]
// 0050ce22  85c0                 test eax, eax
// 0050ce24  7405                 je 0x50ce2b
// 0050ce26  83c060               add eax, 0x60
// 0050ce29  eb02                 jmp 0x50ce2d
// 0050ce2b  33c0                 xor eax, eax
// 0050ce2d  85c9                 test ecx, ecx
// 0050ce2f  7407                 je 0x50ce38
// 0050ce31  8b49f8               mov ecx, dword ptr [ecx - 8]
// 0050ce34  894168               mov dword ptr [ecx + 0x68], eax
// 0050ce37  c3                   ret 
// 0050ce38  33c9                 xor ecx, ecx
// 0050ce3a  8b5104               mov edx, dword ptr [ecx + 4]
// 0050ce3d  894268               mov dword ptr [edx + 0x68], eax
// 0050ce40  c3                   ret 
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