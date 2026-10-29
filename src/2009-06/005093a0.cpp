// roc 2009-06 005093a0  unit: RBX::Network::PhysicsSender::Job  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005093a0
//
// 005093a0  85c9                 test ecx, ecx
// 005093a2  7405                 je 0x5093a9
// 005093a4  8d41f4               lea eax, [ecx - 0xc]
// 005093a7  eb02                 jmp 0x5093ab
// 005093a9  33c0                 xor eax, eax
// 005093ab  8b4004               mov eax, dword ptr [eax + 4]
// 005093ae  836050fe             and dword ptr [eax + 0x50], 0xfffffffe
// 005093b2  83c050               add eax, 0x50
// 005093b5  85c9                 test ecx, ecx
// 005093b7  7405                 je 0x5093be
// 005093b9  8d41f4               lea eax, [ecx - 0xc]
// 005093bc  eb02                 jmp 0x5093c0
// 005093be  33c0                 xor eax, eax
// 005093c0  8b4004               mov eax, dword ptr [eax + 4]
// 005093c3  83605001             and dword ptr [eax + 0x50], 1
// 005093c7  83c050               add eax, 0x50
// 005093ca  85c9                 test ecx, ecx
// 005093cc  7405                 je 0x5093d3
// 005093ce  8d41f4               lea eax, [ecx - 0xc]
// 005093d1  eb02                 jmp 0x5093d5
// 005093d3  33c0                 xor eax, eax
// 005093d5  8b4004               mov eax, dword ptr [eax + 4]
// 005093d8  85c0                 test eax, eax
// 005093da  7405                 je 0x5093e1
// 005093dc  8d5050               lea edx, [eax + 0x50]
// 005093df  eb02                 jmp 0x5093e3
// 005093e1  33d2                 xor edx, edx
// 005093e3  85c9                 test ecx, ecx
// 005093e5  7405                 je 0x5093ec
// 005093e7  8d41f4               lea eax, [ecx - 0xc]
// 005093ea  eb02                 jmp 0x5093ee
// 005093ec  33c0                 xor eax, eax
// 005093ee  8b4004               mov eax, dword ptr [eax + 4]
// 005093f1  895054               mov dword ptr [eax + 0x54], edx
// 005093f4  85c9                 test ecx, ecx
// 005093f6  7405                 je 0x5093fd
// 005093f8  8d41f4               lea eax, [ecx - 0xc]
// 005093fb  eb02                 jmp 0x5093ff
// 005093fd  33c0                 xor eax, eax
// 005093ff  8b4004               mov eax, dword ptr [eax + 4]
// 00509402  85c0                 test eax, eax
// 00509404  7405                 je 0x50940b
// 00509406  83c050               add eax, 0x50
// 00509409  eb02                 jmp 0x50940d
// 0050940b  33c0                 xor eax, eax
// 0050940d  85c9                 test ecx, ecx
// 0050940f  7407                 je 0x509418
// 00509411  8b49f8               mov ecx, dword ptr [ecx - 8]
// 00509414  894158               mov dword ptr [ecx + 0x58], eax
// 00509417  c3                   ret 
// 00509418  33c9                 xor ecx, ecx
// 0050941a  8b5104               mov edx, dword ptr [ecx + 4]
// 0050941d  894258               mov dword ptr [edx + 0x58], eax
// 00509420  c3                   ret 
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