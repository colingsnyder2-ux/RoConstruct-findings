// roc 2012-06 005ae5d0  unit: RBX::Network::ErrorCompPhysicsSender  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ae5d0
//
// 005ae5d0  85c9                 test ecx, ecx
// 005ae5d2  7405                 je 0x5ae5d9
// 005ae5d4  8d41f4               lea eax, [ecx - 0xc]
// 005ae5d7  eb02                 jmp 0x5ae5db
// 005ae5d9  33c0                 xor eax, eax
// 005ae5db  8b4004               mov eax, dword ptr [eax + 4]
// 005ae5de  836050fe             and dword ptr [eax + 0x50], 0xfffffffe
// 005ae5e2  83c050               add eax, 0x50
// 005ae5e5  85c9                 test ecx, ecx
// 005ae5e7  7405                 je 0x5ae5ee
// 005ae5e9  8d41f4               lea eax, [ecx - 0xc]
// 005ae5ec  eb02                 jmp 0x5ae5f0
// 005ae5ee  33c0                 xor eax, eax
// 005ae5f0  8b4004               mov eax, dword ptr [eax + 4]
// 005ae5f3  83605001             and dword ptr [eax + 0x50], 1
// 005ae5f7  83c050               add eax, 0x50
// 005ae5fa  85c9                 test ecx, ecx
// 005ae5fc  7405                 je 0x5ae603
// 005ae5fe  8d41f4               lea eax, [ecx - 0xc]
// 005ae601  eb02                 jmp 0x5ae605
// 005ae603  33c0                 xor eax, eax
// 005ae605  8b4004               mov eax, dword ptr [eax + 4]
// 005ae608  85c0                 test eax, eax
// 005ae60a  7405                 je 0x5ae611
// 005ae60c  8d5050               lea edx, [eax + 0x50]
// 005ae60f  eb02                 jmp 0x5ae613
// 005ae611  33d2                 xor edx, edx
// 005ae613  85c9                 test ecx, ecx
// 005ae615  7405                 je 0x5ae61c
// 005ae617  8d41f4               lea eax, [ecx - 0xc]
// 005ae61a  eb02                 jmp 0x5ae61e
// 005ae61c  33c0                 xor eax, eax
// 005ae61e  8b4004               mov eax, dword ptr [eax + 4]
// 005ae621  895054               mov dword ptr [eax + 0x54], edx
// 005ae624  85c9                 test ecx, ecx
// 005ae626  7405                 je 0x5ae62d
// 005ae628  8d41f4               lea eax, [ecx - 0xc]
// 005ae62b  eb02                 jmp 0x5ae62f
// 005ae62d  33c0                 xor eax, eax
// 005ae62f  8b4004               mov eax, dword ptr [eax + 4]
// 005ae632  85c0                 test eax, eax
// 005ae634  7405                 je 0x5ae63b
// 005ae636  83c050               add eax, 0x50
// 005ae639  eb02                 jmp 0x5ae63d
// 005ae63b  33c0                 xor eax, eax
// 005ae63d  85c9                 test ecx, ecx
// 005ae63f  7407                 je 0x5ae648
// 005ae641  8b49f8               mov ecx, dword ptr [ecx - 8]
// 005ae644  894158               mov dword ptr [ecx + 0x58], eax
// 005ae647  c3                   ret 
// 005ae648  33c9                 xor ecx, ecx
// 005ae64a  8b5104               mov edx, dword ptr [ecx + 4]
// 005ae64d  894258               mov dword ptr [edx + 0x58], eax
// 005ae650  c3                   ret 
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