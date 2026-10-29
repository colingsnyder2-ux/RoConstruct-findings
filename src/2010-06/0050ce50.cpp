// roc 2010-06 0050ce50  unit: RBX::Network::NetworkOwnerJob  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050ce50
//
// 0050ce50  85c9                 test ecx, ecx
// 0050ce52  7405                 je 0x50ce59
// 0050ce54  8d41f4               lea eax, [ecx - 0xc]
// 0050ce57  eb02                 jmp 0x50ce5b
// 0050ce59  33c0                 xor eax, eax
// 0050ce5b  8b4004               mov eax, dword ptr [eax + 4]
// 0050ce5e  836050fe             and dword ptr [eax + 0x50], 0xfffffffe
// 0050ce62  83c050               add eax, 0x50
// 0050ce65  85c9                 test ecx, ecx
// 0050ce67  7405                 je 0x50ce6e
// 0050ce69  8d41f4               lea eax, [ecx - 0xc]
// 0050ce6c  eb02                 jmp 0x50ce70
// 0050ce6e  33c0                 xor eax, eax
// 0050ce70  8b4004               mov eax, dword ptr [eax + 4]
// 0050ce73  83605001             and dword ptr [eax + 0x50], 1
// 0050ce77  83c050               add eax, 0x50
// 0050ce7a  85c9                 test ecx, ecx
// 0050ce7c  7405                 je 0x50ce83
// 0050ce7e  8d41f4               lea eax, [ecx - 0xc]
// 0050ce81  eb02                 jmp 0x50ce85
// 0050ce83  33c0                 xor eax, eax
// 0050ce85  8b4004               mov eax, dword ptr [eax + 4]
// 0050ce88  85c0                 test eax, eax
// 0050ce8a  7405                 je 0x50ce91
// 0050ce8c  8d5050               lea edx, [eax + 0x50]
// 0050ce8f  eb02                 jmp 0x50ce93
// 0050ce91  33d2                 xor edx, edx
// 0050ce93  85c9                 test ecx, ecx
// 0050ce95  7405                 je 0x50ce9c
// 0050ce97  8d41f4               lea eax, [ecx - 0xc]
// 0050ce9a  eb02                 jmp 0x50ce9e
// 0050ce9c  33c0                 xor eax, eax
// 0050ce9e  8b4004               mov eax, dword ptr [eax + 4]
// 0050cea1  895054               mov dword ptr [eax + 0x54], edx
// 0050cea4  85c9                 test ecx, ecx
// 0050cea6  7405                 je 0x50cead
// 0050cea8  8d41f4               lea eax, [ecx - 0xc]
// 0050ceab  eb02                 jmp 0x50ceaf
// 0050cead  33c0                 xor eax, eax
// 0050ceaf  8b4004               mov eax, dword ptr [eax + 4]
// 0050ceb2  85c0                 test eax, eax
// 0050ceb4  7405                 je 0x50cebb
// 0050ceb6  83c050               add eax, 0x50
// 0050ceb9  eb02                 jmp 0x50cebd
// 0050cebb  33c0                 xor eax, eax
// 0050cebd  85c9                 test ecx, ecx
// 0050cebf  7407                 je 0x50cec8
// 0050cec1  8b49f8               mov ecx, dword ptr [ecx - 8]
// 0050cec4  894158               mov dword ptr [ecx + 0x58], eax
// 0050cec7  c3                   ret 
// 0050cec8  33c9                 xor ecx, ecx
// 0050ceca  8b5104               mov edx, dword ptr [ecx + 4]
// 0050cecd  894258               mov dword ptr [edx + 0x58], eax
// 0050ced0  c3                   ret 
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