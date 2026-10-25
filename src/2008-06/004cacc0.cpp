// from server: 100% by king_originala
// roc 2008-06 004cacc0  unit: RBX::Network::RoundRobinPhysicsSender  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cacc0
//
// 004cacc0  85c9                 test ecx, ecx
// 004cacc2  7405                 je 0x4cacc9
// 004cacc4  8d41f4               lea eax, [ecx - 0xc]
// 004cacc7  eb02                 jmp 0x4caccb
// 004cacc9  33c0                 xor eax, eax
// 004caccb  8b4004               mov eax, dword ptr [eax + 4]
// 004cacce  836060fe             and dword ptr [eax + 0x60], 0xfffffffe
// 004cacd2  83c060               add eax, 0x60
// 004cacd5  85c9                 test ecx, ecx
// 004cacd7  7405                 je 0x4cacde
// 004cacd9  8d41f4               lea eax, [ecx - 0xc]
// 004cacdc  eb02                 jmp 0x4cace0
// 004cacde  33c0                 xor eax, eax
// 004cace0  8b4004               mov eax, dword ptr [eax + 4]
// 004cace3  83606001             and dword ptr [eax + 0x60], 1
// 004cace7  83c060               add eax, 0x60
// 004cacea  85c9                 test ecx, ecx
// 004cacec  7405                 je 0x4cacf3
// 004cacee  8d41f4               lea eax, [ecx - 0xc]
// 004cacf1  eb02                 jmp 0x4cacf5
// 004cacf3  33c0                 xor eax, eax
// 004cacf5  8b4004               mov eax, dword ptr [eax + 4]
// 004cacf8  85c0                 test eax, eax
// 004cacfa  7405                 je 0x4cad01
// 004cacfc  8d5060               lea edx, [eax + 0x60]
// 004cacff  eb02                 jmp 0x4cad03
// 004cad01  33d2                 xor edx, edx
// 004cad03  85c9                 test ecx, ecx
// 004cad05  7405                 je 0x4cad0c
// 004cad07  8d41f4               lea eax, [ecx - 0xc]
// 004cad0a  eb02                 jmp 0x4cad0e
// 004cad0c  33c0                 xor eax, eax
// 004cad0e  8b4004               mov eax, dword ptr [eax + 4]
// 004cad11  895064               mov dword ptr [eax + 0x64], edx
// 004cad14  85c9                 test ecx, ecx
// 004cad16  7405                 je 0x4cad1d
// 004cad18  8d41f4               lea eax, [ecx - 0xc]
// 004cad1b  eb02                 jmp 0x4cad1f
// 004cad1d  33c0                 xor eax, eax
// 004cad1f  8b4004               mov eax, dword ptr [eax + 4]
// 004cad22  85c0                 test eax, eax
// 004cad24  7405                 je 0x4cad2b
// 004cad26  83c060               add eax, 0x60
// 004cad29  eb02                 jmp 0x4cad2d
// 004cad2b  33c0                 xor eax, eax
// 004cad2d  85c9                 test ecx, ecx
// 004cad2f  7407                 je 0x4cad38
// 004cad31  8b49f8               mov ecx, dword ptr [ecx - 8]
// 004cad34  894168               mov dword ptr [ecx + 0x68], eax
// 004cad37  c3                   ret 
// 004cad38  33c9                 xor ecx, ecx
// 004cad3a  8b5104               mov edx, dword ptr [ecx + 4]
// 004cad3d  894268               mov dword ptr [edx + 0x68], eax
// 004cad40  c3                   ret 

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
