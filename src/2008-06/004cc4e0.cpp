// from server: 100% by king_originala
// roc 2008-06 004cc4e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cc4e0
//
// 004cc4e0  55                   push ebp
// 004cc4e1  56                   push esi
// 004cc4e2  8bf1                 mov esi, ecx
// 004cc4e4  57                   push edi
// 004cc4e5  85f6                 test esi, esi
// 004cc4e7  7405                 je 0x4cc4ee
// 004cc4e9  8d46f4               lea eax, [esi - 0xc]
// 004cc4ec  eb02                 jmp 0x4cc4f0
// 004cc4ee  33c0                 xor eax, eax
// 004cc4f0  8b4030               mov eax, dword ptr [eax + 0x30]
// 004cc4f3  40                   inc eax
// 004cc4f4  50                   push eax
// 004cc4f5  e826f9ffff           call 0x4cbe20
// 004cc4fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cc4fe  8b09                 mov ecx, dword ptr [ecx]
// 004cc500  8bc1                 mov eax, ecx
// 004cc502  c1e803               shr eax, 3
// 004cc505  03c1                 add eax, ecx
// 004cc507  33d2                 xor edx, edx
// 004cc509  f77608               div dword ptr [esi + 8]
// 004cc50c  8bea                 mov ebp, edx
// 004cc50e  8b5614               mov edx, dword ptr [esi + 0x14]
// 004cc511  8b04aa               mov eax, dword ptr [edx + ebp*4]
// 004cc514  8d3caa               lea edi, [edx + ebp*4]
// 004cc517  3bc7                 cmp eax, edi
// 004cc519  741a                 je 0x4cc535
// 004cc51b  eb03                 jmp 0x4cc520
// 004cc51d  8d4900               lea ecx, [ecx]
// 004cc520  85c0                 test eax, eax
// 004cc522  7405                 je 0x4cc529
// 004cc524  8d5090               lea edx, [eax - 0x70]
// 004cc527  eb02                 jmp 0x4cc52b
// 004cc529  33d2                 xor edx, edx
// 004cc52b  3b0a                 cmp ecx, dword ptr [edx]
// 004cc52d  7425                 je 0x4cc554
// 004cc52f  8b00                 mov eax, dword ptr [eax]
// 004cc531  3bc7                 cmp eax, edi
// 004cc533  75eb                 jne 0x4cc520
// 004cc535  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cc539  53                   push ebx
// 004cc53a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004cc53e  53                   push ebx
// 004cc53f  50                   push eax
// 004cc540  8bce                 mov ecx, esi
// 004cc542  e859f9ffff           call 0x4cbea0
// 004cc547  3bc3                 cmp eax, ebx
// 004cc549  752e                 jne 0x4cc579
// 004cc54b  85db                 test ebx, ebx
// 004cc54d  741a                 je 0x4cc569
// 004cc54f  8d4b70               lea ecx, [ebx + 0x70]
// 004cc552  eb17                 jmp 0x4cc56b
// 004cc554  85c0                 test eax, eax
// 004cc556  7409                 je 0x4cc561
// 004cc558  5f                   pop edi
// 004cc559  5e                   pop esi
// 004cc55a  83c090               add eax, -0x70
// 004cc55d  5d                   pop ebp
// 004cc55e  c20800               ret 8
// 004cc561  5f                   pop edi
// 004cc562  5e                   pop esi
// 004cc563  33c0                 xor eax, eax
// 004cc565  5d                   pop ebp
// 004cc566  c20800               ret 8
// 004cc569  33c9                 xor ecx, ecx
// 004cc56b  8b17                 mov edx, dword ptr [edi]
// 004cc56d  8911                 mov dword ptr [ecx], edx
// 004cc56f  890f                 mov dword ptr [edi], ecx
// 004cc571  396e20               cmp dword ptr [esi + 0x20], ebp
// 004cc574  7603                 jbe 0x4cc579
// 004cc576  896e20               mov dword ptr [esi + 0x20], ebp
// 004cc579  5b                   pop ebx
// 004cc57a  5f                   pop edi
// 004cc57b  5e                   pop esi
// 004cc57c  5d                   pop ebp
// 004cc57d  c20800               ret 8

typedef unsigned int UInt;

struct Link {
    Link* next;
};

struct Payload {
    UInt key;
    char padding[108];
};

struct Node : Payload, Link {
};

struct Prefix {
    char padding[12];
};

struct Table {
    char padding0[8];
    UInt bucketCount;
    char padding1[8];
    Link** buckets;
    char padding2[8];
    UInt firstBucket;

    void reserve(UInt count);
    Node* create(const UInt* key, Node* node);
    Node* insert(const UInt* key, Node* node);
};

struct Owner : Prefix, Table {
    UInt count;
};

Node* Table::insert(const UInt* key, Node* node)
{
    reserve(static_cast<Owner*>(this)->count + 1);

    UInt value = *key;
    UInt bucket = ((value >> 3) + value) % bucketCount;
    Link** head = buckets + bucket;
    Link* sentinel = reinterpret_cast<Link*>(head);
    Link* current = *head;

    while (current != sentinel) {
        if (value == static_cast<Node*>(current)->key)
            return static_cast<Node*>(current);
        current = current->next;
    }

    Node* result = create(key, node);
    if (result == node) {
        Link* link = static_cast<Link*>(node);
        link->next = *head;
        *head = link;
        if (firstBucket > bucket)
            firstBucket = bucket;
    }
    return result;
}
