// roc 2011-06 00518f20  unit: RBX::Network::ErrorCompPhysicsSender  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00518f20
//
// 00518f20  85c9                 test ecx, ecx
// 00518f22  7405                 je 0x518f29
// 00518f24  8d41f4               lea eax, [ecx - 0xc]
// 00518f27  eb02                 jmp 0x518f2b
// 00518f29  33c0                 xor eax, eax
// 00518f2b  8b4004               mov eax, dword ptr [eax + 4]
// 00518f2e  836050fe             and dword ptr [eax + 0x50], 0xfffffffe
// 00518f32  83c050               add eax, 0x50
// 00518f35  85c9                 test ecx, ecx
// 00518f37  7405                 je 0x518f3e
// 00518f39  8d41f4               lea eax, [ecx - 0xc]
// 00518f3c  eb02                 jmp 0x518f40
// 00518f3e  33c0                 xor eax, eax
// 00518f40  8b4004               mov eax, dword ptr [eax + 4]
// 00518f43  83605001             and dword ptr [eax + 0x50], 1
// 00518f47  83c050               add eax, 0x50
// 00518f4a  85c9                 test ecx, ecx
// 00518f4c  7405                 je 0x518f53
// 00518f4e  8d41f4               lea eax, [ecx - 0xc]
// 00518f51  eb02                 jmp 0x518f55
// 00518f53  33c0                 xor eax, eax
// 00518f55  8b4004               mov eax, dword ptr [eax + 4]
// 00518f58  85c0                 test eax, eax
// 00518f5a  7405                 je 0x518f61
// 00518f5c  8d5050               lea edx, [eax + 0x50]
// 00518f5f  eb02                 jmp 0x518f63
// 00518f61  33d2                 xor edx, edx
// 00518f63  85c9                 test ecx, ecx
// 00518f65  7405                 je 0x518f6c
// 00518f67  8d41f4               lea eax, [ecx - 0xc]
// 00518f6a  eb02                 jmp 0x518f6e
// 00518f6c  33c0                 xor eax, eax
// 00518f6e  8b4004               mov eax, dword ptr [eax + 4]
// 00518f71  895054               mov dword ptr [eax + 0x54], edx
// 00518f74  85c9                 test ecx, ecx
// 00518f76  7405                 je 0x518f7d
// 00518f78  8d41f4               lea eax, [ecx - 0xc]
// 00518f7b  eb02                 jmp 0x518f7f
// 00518f7d  33c0                 xor eax, eax
// 00518f7f  8b4004               mov eax, dword ptr [eax + 4]
// 00518f82  85c0                 test eax, eax
// 00518f84  7405                 je 0x518f8b
// 00518f86  83c050               add eax, 0x50
// 00518f89  eb02                 jmp 0x518f8d
// 00518f8b  33c0                 xor eax, eax
// 00518f8d  85c9                 test ecx, ecx
// 00518f8f  7407                 je 0x518f98
// 00518f91  8b49f8               mov ecx, dword ptr [ecx - 8]
// 00518f94  894158               mov dword ptr [ecx + 0x58], eax
// 00518f97  c3                   ret 
// 00518f98  33c9                 xor ecx, ecx
// 00518f9a  8b5104               mov edx, dword ptr [ecx + 4]
// 00518f9d  894258               mov dword ptr [edx + 0x58], eax
// 00518fa0  c3                   ret 
// copied from an identical function in another client (function ?reset@S@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
struct Hook {
    unsigned int marked : 1;
    unsigned int value : 31;
    Hook* next;
    Hook* previous;

    Hook& clearMarked();
    Hook& clearValue();
};

struct Prefix {
    unsigned char padding[80];
};

struct Node : Prefix, Hook {
};

struct S {
    void reset();
};

struct OwnerPrefix {
    unsigned int reserved;
    Node* node;
    unsigned int unused;
};

struct Owner : OwnerPrefix, S {
};

inline Hook& Hook::clearMarked()
{
    marked = 0;
    return *this;
}

inline Hook& Hook::clearValue()
{
    value = 0;
    return *this;
}

void S::reset()
{
    static_cast<Owner*>(this)->node->clearMarked();
    static_cast<Owner*>(this)->node->clearValue();
    static_cast<Owner*>(this)->node->next =
        static_cast<Hook*>(static_cast<Owner*>(this)->node);
    static_cast<Owner*>(this)->node->previous =
        static_cast<Hook*>(static_cast<Owner*>(this)->node);
}
}
