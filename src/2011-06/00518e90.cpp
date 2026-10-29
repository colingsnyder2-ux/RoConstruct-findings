// roc 2011-06 00518e90  unit: RBX::Network::ErrorCompPhysicsSender  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00518e90
//
// 00518e90  85c9                 test ecx, ecx
// 00518e92  7405                 je 0x518e99
// 00518e94  8d41f4               lea eax, [ecx - 0xc]
// 00518e97  eb02                 jmp 0x518e9b
// 00518e99  33c0                 xor eax, eax
// 00518e9b  8b4004               mov eax, dword ptr [eax + 4]
// 00518e9e  836060fe             and dword ptr [eax + 0x60], 0xfffffffe
// 00518ea2  83c060               add eax, 0x60
// 00518ea5  85c9                 test ecx, ecx
// 00518ea7  7405                 je 0x518eae
// 00518ea9  8d41f4               lea eax, [ecx - 0xc]
// 00518eac  eb02                 jmp 0x518eb0
// 00518eae  33c0                 xor eax, eax
// 00518eb0  8b4004               mov eax, dword ptr [eax + 4]
// 00518eb3  83606001             and dword ptr [eax + 0x60], 1
// 00518eb7  83c060               add eax, 0x60
// 00518eba  85c9                 test ecx, ecx
// 00518ebc  7405                 je 0x518ec3
// 00518ebe  8d41f4               lea eax, [ecx - 0xc]
// 00518ec1  eb02                 jmp 0x518ec5
// 00518ec3  33c0                 xor eax, eax
// 00518ec5  8b4004               mov eax, dword ptr [eax + 4]
// 00518ec8  85c0                 test eax, eax
// 00518eca  7405                 je 0x518ed1
// 00518ecc  8d5060               lea edx, [eax + 0x60]
// 00518ecf  eb02                 jmp 0x518ed3
// 00518ed1  33d2                 xor edx, edx
// 00518ed3  85c9                 test ecx, ecx
// 00518ed5  7405                 je 0x518edc
// 00518ed7  8d41f4               lea eax, [ecx - 0xc]
// 00518eda  eb02                 jmp 0x518ede
// 00518edc  33c0                 xor eax, eax
// 00518ede  8b4004               mov eax, dword ptr [eax + 4]
// 00518ee1  895064               mov dword ptr [eax + 0x64], edx
// 00518ee4  85c9                 test ecx, ecx
// 00518ee6  7405                 je 0x518eed
// 00518ee8  8d41f4               lea eax, [ecx - 0xc]
// 00518eeb  eb02                 jmp 0x518eef
// 00518eed  33c0                 xor eax, eax
// 00518eef  8b4004               mov eax, dword ptr [eax + 4]
// 00518ef2  85c0                 test eax, eax
// 00518ef4  7405                 je 0x518efb
// 00518ef6  83c060               add eax, 0x60
// 00518ef9  eb02                 jmp 0x518efd
// 00518efb  33c0                 xor eax, eax
// 00518efd  85c9                 test ecx, ecx
// 00518eff  7407                 je 0x518f08
// 00518f01  8b49f8               mov ecx, dword ptr [ecx - 8]
// 00518f04  894168               mov dword ptr [ecx + 0x68], eax
// 00518f07  c3                   ret 
// 00518f08  33c9                 xor ecx, ecx
// 00518f0a  8b5104               mov edx, dword ptr [ecx + 4]
// 00518f0d  894268               mov dword ptr [edx + 0x68], eax
// 00518f10  c3                   ret 
// copied from an identical function in another client (function ?reset@S@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
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
}
