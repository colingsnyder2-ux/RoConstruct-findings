// roc 2009-06 00509310  unit: RBX::Network::PhysicsSender::Job  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00509310
//
// 00509310  85c9                 test ecx, ecx
// 00509312  7405                 je 0x509319
// 00509314  8d41f4               lea eax, [ecx - 0xc]
// 00509317  eb02                 jmp 0x50931b
// 00509319  33c0                 xor eax, eax
// 0050931b  8b4004               mov eax, dword ptr [eax + 4]
// 0050931e  836060fe             and dword ptr [eax + 0x60], 0xfffffffe
// 00509322  83c060               add eax, 0x60
// 00509325  85c9                 test ecx, ecx
// 00509327  7405                 je 0x50932e
// 00509329  8d41f4               lea eax, [ecx - 0xc]
// 0050932c  eb02                 jmp 0x509330
// 0050932e  33c0                 xor eax, eax
// 00509330  8b4004               mov eax, dword ptr [eax + 4]
// 00509333  83606001             and dword ptr [eax + 0x60], 1
// 00509337  83c060               add eax, 0x60
// 0050933a  85c9                 test ecx, ecx
// 0050933c  7405                 je 0x509343
// 0050933e  8d41f4               lea eax, [ecx - 0xc]
// 00509341  eb02                 jmp 0x509345
// 00509343  33c0                 xor eax, eax
// 00509345  8b4004               mov eax, dword ptr [eax + 4]
// 00509348  85c0                 test eax, eax
// 0050934a  7405                 je 0x509351
// 0050934c  8d5060               lea edx, [eax + 0x60]
// 0050934f  eb02                 jmp 0x509353
// 00509351  33d2                 xor edx, edx
// 00509353  85c9                 test ecx, ecx
// 00509355  7405                 je 0x50935c
// 00509357  8d41f4               lea eax, [ecx - 0xc]
// 0050935a  eb02                 jmp 0x50935e
// 0050935c  33c0                 xor eax, eax
// 0050935e  8b4004               mov eax, dword ptr [eax + 4]
// 00509361  895064               mov dword ptr [eax + 0x64], edx
// 00509364  85c9                 test ecx, ecx
// 00509366  7405                 je 0x50936d
// 00509368  8d41f4               lea eax, [ecx - 0xc]
// 0050936b  eb02                 jmp 0x50936f
// 0050936d  33c0                 xor eax, eax
// 0050936f  8b4004               mov eax, dword ptr [eax + 4]
// 00509372  85c0                 test eax, eax
// 00509374  7405                 je 0x50937b
// 00509376  83c060               add eax, 0x60
// 00509379  eb02                 jmp 0x50937d
// 0050937b  33c0                 xor eax, eax
// 0050937d  85c9                 test ecx, ecx
// 0050937f  7407                 je 0x509388
// 00509381  8b49f8               mov ecx, dword ptr [ecx - 8]
// 00509384  894168               mov dword ptr [ecx + 0x68], eax
// 00509387  c3                   ret 
// 00509388  33c9                 xor ecx, ecx
// 0050938a  8b5104               mov edx, dword ptr [ecx + 4]
// 0050938d  894268               mov dword ptr [edx + 0x68], eax
// 00509390  c3                   ret 
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