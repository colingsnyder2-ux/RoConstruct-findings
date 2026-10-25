// from server: 100% by king_originala
// roc 2008-06 004cadd0  unit: RBX::Network::RoundRobinPhysicsSender  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cadd0
//
// 004cadd0  85c9                 test ecx, ecx
// 004cadd2  7405                 je 0x4cadd9
// 004cadd4  8d41f4               lea eax, [ecx - 0xc]
// 004cadd7  eb02                 jmp 0x4caddb
// 004cadd9  33c0                 xor eax, eax
// 004caddb  8b4004               mov eax, dword ptr [eax + 4]
// 004cadde  836050fe             and dword ptr [eax + 0x50], 0xfffffffe
// 004cade2  83c050               add eax, 0x50
// 004cade5  85c9                 test ecx, ecx
// 004cade7  7405                 je 0x4cadee
// 004cade9  8d41f4               lea eax, [ecx - 0xc]
// 004cadec  eb02                 jmp 0x4cadf0
// 004cadee  33c0                 xor eax, eax
// 004cadf0  8b4004               mov eax, dword ptr [eax + 4]
// 004cadf3  83605001             and dword ptr [eax + 0x50], 1
// 004cadf7  83c050               add eax, 0x50
// 004cadfa  85c9                 test ecx, ecx
// 004cadfc  7405                 je 0x4cae03
// 004cadfe  8d41f4               lea eax, [ecx - 0xc]
// 004cae01  eb02                 jmp 0x4cae05
// 004cae03  33c0                 xor eax, eax
// 004cae05  8b4004               mov eax, dword ptr [eax + 4]
// 004cae08  85c0                 test eax, eax
// 004cae0a  7405                 je 0x4cae11
// 004cae0c  8d5050               lea edx, [eax + 0x50]
// 004cae0f  eb02                 jmp 0x4cae13
// 004cae11  33d2                 xor edx, edx
// 004cae13  85c9                 test ecx, ecx
// 004cae15  7405                 je 0x4cae1c
// 004cae17  8d41f4               lea eax, [ecx - 0xc]
// 004cae1a  eb02                 jmp 0x4cae1e
// 004cae1c  33c0                 xor eax, eax
// 004cae1e  8b4004               mov eax, dword ptr [eax + 4]
// 004cae21  895054               mov dword ptr [eax + 0x54], edx
// 004cae24  85c9                 test ecx, ecx
// 004cae26  7405                 je 0x4cae2d
// 004cae28  8d41f4               lea eax, [ecx - 0xc]
// 004cae2b  eb02                 jmp 0x4cae2f
// 004cae2d  33c0                 xor eax, eax
// 004cae2f  8b4004               mov eax, dword ptr [eax + 4]
// 004cae32  85c0                 test eax, eax
// 004cae34  7405                 je 0x4cae3b
// 004cae36  83c050               add eax, 0x50
// 004cae39  eb02                 jmp 0x4cae3d
// 004cae3b  33c0                 xor eax, eax
// 004cae3d  85c9                 test ecx, ecx
// 004cae3f  7407                 je 0x4cae48
// 004cae41  8b49f8               mov ecx, dword ptr [ecx - 8]
// 004cae44  894158               mov dword ptr [ecx + 0x58], eax
// 004cae47  c3                   ret 
// 004cae48  33c9                 xor ecx, ecx
// 004cae4a  8b5104               mov edx, dword ptr [ecx + 4]
// 004cae4d  894258               mov dword ptr [edx + 0x58], eax
// 004cae50  c3                   ret 

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
