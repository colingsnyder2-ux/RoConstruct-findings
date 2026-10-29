// roc 2009-12 0055e390  unit: RBX::Network::NetworkOwnerJob  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055e390
//
// 0055e390  85c9                 test ecx, ecx
// 0055e392  7405                 je 0x55e399
// 0055e394  8d41f4               lea eax, [ecx - 0xc]
// 0055e397  eb02                 jmp 0x55e39b
// 0055e399  33c0                 xor eax, eax
// 0055e39b  8b4004               mov eax, dword ptr [eax + 4]
// 0055e39e  836050fe             and dword ptr [eax + 0x50], 0xfffffffe
// 0055e3a2  83c050               add eax, 0x50
// 0055e3a5  85c9                 test ecx, ecx
// 0055e3a7  7405                 je 0x55e3ae
// 0055e3a9  8d41f4               lea eax, [ecx - 0xc]
// 0055e3ac  eb02                 jmp 0x55e3b0
// 0055e3ae  33c0                 xor eax, eax
// 0055e3b0  8b4004               mov eax, dword ptr [eax + 4]
// 0055e3b3  83605001             and dword ptr [eax + 0x50], 1
// 0055e3b7  83c050               add eax, 0x50
// 0055e3ba  85c9                 test ecx, ecx
// 0055e3bc  7405                 je 0x55e3c3
// 0055e3be  8d41f4               lea eax, [ecx - 0xc]
// 0055e3c1  eb02                 jmp 0x55e3c5
// 0055e3c3  33c0                 xor eax, eax
// 0055e3c5  8b4004               mov eax, dword ptr [eax + 4]
// 0055e3c8  85c0                 test eax, eax
// 0055e3ca  7405                 je 0x55e3d1
// 0055e3cc  8d5050               lea edx, [eax + 0x50]
// 0055e3cf  eb02                 jmp 0x55e3d3
// 0055e3d1  33d2                 xor edx, edx
// 0055e3d3  85c9                 test ecx, ecx
// 0055e3d5  7405                 je 0x55e3dc
// 0055e3d7  8d41f4               lea eax, [ecx - 0xc]
// 0055e3da  eb02                 jmp 0x55e3de
// 0055e3dc  33c0                 xor eax, eax
// 0055e3de  8b4004               mov eax, dword ptr [eax + 4]
// 0055e3e1  895054               mov dword ptr [eax + 0x54], edx
// 0055e3e4  85c9                 test ecx, ecx
// 0055e3e6  7405                 je 0x55e3ed
// 0055e3e8  8d41f4               lea eax, [ecx - 0xc]
// 0055e3eb  eb02                 jmp 0x55e3ef
// 0055e3ed  33c0                 xor eax, eax
// 0055e3ef  8b4004               mov eax, dword ptr [eax + 4]
// 0055e3f2  85c0                 test eax, eax
// 0055e3f4  7405                 je 0x55e3fb
// 0055e3f6  83c050               add eax, 0x50
// 0055e3f9  eb02                 jmp 0x55e3fd
// 0055e3fb  33c0                 xor eax, eax
// 0055e3fd  85c9                 test ecx, ecx
// 0055e3ff  7407                 je 0x55e408
// 0055e401  8b49f8               mov ecx, dword ptr [ecx - 8]
// 0055e404  894158               mov dword ptr [ecx + 0x58], eax
// 0055e407  c3                   ret 
// 0055e408  33c9                 xor ecx, ecx
// 0055e40a  8b5104               mov edx, dword ptr [ecx + 4]
// 0055e40d  894258               mov dword ptr [edx + 0x58], eax
// 0055e410  c3                   ret 
// copied from an identical function in another client (function ?reset@S@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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