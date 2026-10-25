// from server: 100% by king_originala
// roc 2008-06 004acc30  unit: RBX::Network::Replicator::ChangePropertyItem  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004acc30
//
// 004acc30  85c9                 test ecx, ecx
// 004acc32  7405                 je 0x4acc39
// 004acc34  8d41f4               lea eax, [ecx - 0xc]
// 004acc37  eb02                 jmp 0x4acc3b
// 004acc39  33c0                 xor eax, eax
// 004acc3b  8b4004               mov eax, dword ptr [eax + 4]
// 004acc3e  83a080020000fe       and dword ptr [eax + 0x280], 0xfffffffe
// 004acc45  0580020000           add eax, 0x280
// 004acc4a  85c9                 test ecx, ecx
// 004acc4c  7405                 je 0x4acc53
// 004acc4e  8d41f4               lea eax, [ecx - 0xc]
// 004acc51  eb02                 jmp 0x4acc55
// 004acc53  33c0                 xor eax, eax
// 004acc55  8b4004               mov eax, dword ptr [eax + 4]
// 004acc58  83a08002000001       and dword ptr [eax + 0x280], 1
// 004acc5f  0580020000           add eax, 0x280
// 004acc64  85c9                 test ecx, ecx
// 004acc66  7405                 je 0x4acc6d
// 004acc68  8d41f4               lea eax, [ecx - 0xc]
// 004acc6b  eb02                 jmp 0x4acc6f
// 004acc6d  33c0                 xor eax, eax
// 004acc6f  8b4004               mov eax, dword ptr [eax + 4]
// 004acc72  85c0                 test eax, eax
// 004acc74  7408                 je 0x4acc7e
// 004acc76  8d9080020000         lea edx, [eax + 0x280]
// 004acc7c  eb02                 jmp 0x4acc80
// 004acc7e  33d2                 xor edx, edx
// 004acc80  85c9                 test ecx, ecx
// 004acc82  7405                 je 0x4acc89
// 004acc84  8d41f4               lea eax, [ecx - 0xc]
// 004acc87  eb02                 jmp 0x4acc8b
// 004acc89  33c0                 xor eax, eax
// 004acc8b  8b4004               mov eax, dword ptr [eax + 4]
// 004acc8e  899084020000         mov dword ptr [eax + 0x284], edx
// 004acc94  85c9                 test ecx, ecx
// 004acc96  7405                 je 0x4acc9d
// 004acc98  8d41f4               lea eax, [ecx - 0xc]
// 004acc9b  eb02                 jmp 0x4acc9f
// 004acc9d  33c0                 xor eax, eax
// 004acc9f  8b4004               mov eax, dword ptr [eax + 4]
// 004acca2  85c0                 test eax, eax
// 004acca4  7407                 je 0x4accad
// 004acca6  0580020000           add eax, 0x280
// 004accab  eb02                 jmp 0x4accaf
// 004accad  33c0                 xor eax, eax
// 004accaf  85c9                 test ecx, ecx
// 004accb1  740a                 je 0x4accbd
// 004accb3  8b49f8               mov ecx, dword ptr [ecx - 8]
// 004accb6  898188020000         mov dword ptr [ecx + 0x288], eax
// 004accbc  c3                   ret 
// 004accbd  33c9                 xor ecx, ecx
// 004accbf  8b5104               mov edx, dword ptr [ecx + 4]
// 004accc2  898288020000         mov dword ptr [edx + 0x288], eax
// 004accc8  c3                   ret 

struct Node {
    unsigned int flag : 1;
    unsigned int remaining : 31;
    Node* previous;
    Node* next;

    void clearFlag();
    void clearRemaining();
};

inline void Node::clearFlag()
{
    flag = 0;
}

inline void Node::clearRemaining()
{
    remaining = 0;
}

struct Padding {
    unsigned char bytes[0x280];
};

struct Owner : Padding, Node {
};

struct S {
    void reset();
};

struct ItemPrefix {
    unsigned int unused;
    Owner* owner;
    unsigned int reserved;
};

struct ChangeItem : ItemPrefix, S {
};

void S::reset()
{
    static_cast<ChangeItem*>(this)->owner->clearFlag();
    static_cast<ChangeItem*>(this)->owner->clearRemaining();
    static_cast<ChangeItem*>(this)->owner->previous =
        static_cast<Node*>(static_cast<ChangeItem*>(this)->owner);
    static_cast<ChangeItem*>(this)->owner->next =
        static_cast<Node*>(static_cast<ChangeItem*>(this)->owner);
}
