// from server: 100% by king_originala
// roc 2008-06 004c7110  unit: RBX::VInstance::?$Association::Item  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c7110
//
// 004c7110  85c9                 test ecx, ecx
// 004c7112  7405                 je 0x4c7119
// 004c7114  8d41f4               lea eax, [ecx - 0xc]
// 004c7117  eb02                 jmp 0x4c711b
// 004c7119  33c0                 xor eax, eax
// 004c711b  8b5004               mov edx, dword ptr [eax + 4]
// 004c711e  85c9                 test ecx, ecx
// 004c7120  7405                 je 0x4c7127
// 004c7122  8d41f4               lea eax, [ecx - 0xc]
// 004c7125  eb02                 jmp 0x4c7129
// 004c7127  33c0                 xor eax, eax
// 004c7129  8b4004               mov eax, dword ptr [eax + 4]
// 004c712c  8b8080020000         mov eax, dword ptr [eax + 0x280]
// 004c7132  83e0fe               and eax, 0xfffffffe
// 004c7135  7407                 je 0x4c713e
// 004c7137  0580fdffff           add eax, 0xfffffd80
// 004c713c  eb02                 jmp 0x4c7140
// 004c713e  33c0                 xor eax, eax
// 004c7140  b101                 mov cl, 1
// 004c7142  85c0                 test eax, eax
// 004c7144  7430                 je 0x4c7176
// 004c7146  56                   push esi
// 004c7147  8b742408             mov esi, dword ptr [esp + 8]
// 004c714b  eb03                 jmp 0x4c7150
// 004c714d  8d4900               lea ecx, [ecx]
// 004c7150  3b7008               cmp esi, dword ptr [eax + 8]
// 004c7153  8bd0                 mov edx, eax
// 004c7155  0f92c1               setb cl
// 004c7158  84c9                 test cl, cl
// 004c715a  7408                 je 0x4c7164
// 004c715c  8b8084020000         mov eax, dword ptr [eax + 0x284]
// 004c7162  eb06                 jmp 0x4c716a
// 004c7164  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 004c716a  85c0                 test eax, eax
// 004c716c  7407                 je 0x4c7175
// 004c716e  0580fdffff           add eax, 0xfffffd80
// 004c7173  75db                 jne 0x4c7150
// 004c7175  5e                   pop esi
// 004c7176  8b442408             mov eax, dword ptr [esp + 8]
// 004c717a  53                   push ebx
// 004c717b  33db                 xor ebx, ebx
// 004c717d  84c9                 test cl, cl
// 004c717f  0f94c3               sete bl
// 004c7182  8918                 mov dword ptr [eax], ebx
// 004c7184  5b                   pop ebx
// 004c7185  85d2                 test edx, edx
// 004c7187  740e                 je 0x4c7197
// 004c7189  8d8a80020000         lea ecx, [edx + 0x280]
// 004c718f  894804               mov dword ptr [eax + 4], ecx
// 004c7192  b001                 mov al, 1
// 004c7194  c20c00               ret 0xc
// 004c7197  33c9                 xor ecx, ecx
// 004c7199  894804               mov dword ptr [eax + 4], ecx
// 004c719c  b001                 mov al, 1
// 004c719e  c20c00               ret 0xc

struct Link {
    unsigned int parent;
    Link* left;
    Link* right;
};

struct Node {
    unsigned int reserved[2];
    unsigned int key;
    char padding[0x280 - 12];
    Link link;
};

struct Owner {
    unsigned int reserved;
    Node* head;
};

struct Result {
    int right;
    Link* parent;
};

struct Item {
    bool find(unsigned int key, Result* result, unsigned int unused);
};

bool Item::find(unsigned int key, Result* result, unsigned int unused)
{
    Node* parent =
        (this ? reinterpret_cast<Owner*>(
                    reinterpret_cast<char*>(this) - 12) : 0)->head;

    unsigned int root =
        (this ? reinterpret_cast<Owner*>(
                    reinterpret_cast<char*>(this) - 12) : 0)
            ->head->link.parent & ~1u;

    Node* node = root
        ? reinterpret_cast<Node*>(root - 0x280)
        : 0;

    bool left = true;
    while (node) {
        left = key < node->key;
        parent = node;
        Link* next = left ? node->link.left : node->link.right;
        node = next
            ? reinterpret_cast<Node*>(
                  reinterpret_cast<char*>(next) - 0x280)
            : 0;
    }

    result->right = !left;
    result->parent = parent ? &parent->link : 0;
    return true;
}
