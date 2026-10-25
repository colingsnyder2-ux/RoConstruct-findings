// from server: 100% by king_originala
// roc 2008-06 004c72b0  unit: RBX::VInstance::?$Association::Item  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c72b0
//
// 004c72b0  53                   push ebx
// 004c72b1  56                   push esi
// 004c72b2  57                   push edi
// 004c72b3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c72b7  57                   push edi
// 004c72b8  8bf1                 mov esi, ecx
// 004c72ba  e8f1320000           call 0x4ca5b0
// 004c72bf  33d2                 xor edx, edx
// 004c72c1  f77608               div dword ptr [esi + 8]
// 004c72c4  8d5e08               lea ebx, [esi + 8]
// 004c72c7  8b4614               mov eax, dword ptr [esi + 0x14]
// 004c72ca  83c404               add esp, 4
// 004c72cd  8d0c90               lea ecx, [eax + edx*4]
// 004c72d0  8b01                 mov eax, dword ptr [ecx]
// 004c72d2  3bc1                 cmp eax, ecx
// 004c72d4  741a                 je 0x4c72f0
// 004c72d6  8b3f                 mov edi, dword ptr [edi]
// 004c72d8  85c0                 test eax, eax
// 004c72da  7408                 je 0x4c72e4
// 004c72dc  8d9070fdffff         lea edx, [eax - 0x290]
// 004c72e2  eb02                 jmp 0x4c72e6
// 004c72e4  33d2                 xor edx, edx
// 004c72e6  3b3a                 cmp edi, dword ptr [edx]
// 004c72e8  7418                 je 0x4c7302
// 004c72ea  8b00                 mov eax, dword ptr [eax]
// 004c72ec  3bc1                 cmp eax, ecx
// 004c72ee  75e8                 jne 0x4c72d8
// 004c72f0  8b4ef8               mov ecx, dword ptr [esi - 8]
// 004c72f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c72f7  5f                   pop edi
// 004c72f8  5e                   pop esi
// 004c72f9  895804               mov dword ptr [eax + 4], ebx
// 004c72fc  8908                 mov dword ptr [eax], ecx
// 004c72fe  5b                   pop ebx
// 004c72ff  c21000               ret 0x10
// 004c7302  85c0                 test eax, eax
// 004c7304  7415                 je 0x4c731b
// 004c7306  8d8870fdffff         lea ecx, [eax - 0x290]
// 004c730c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c7310  5f                   pop edi
// 004c7311  5e                   pop esi
// 004c7312  895804               mov dword ptr [eax + 4], ebx
// 004c7315  8908                 mov dword ptr [eax], ecx
// 004c7317  5b                   pop ebx
// 004c7318  c21000               ret 0x10
// 004c731b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c731f  5f                   pop edi
// 004c7320  33c9                 xor ecx, ecx
// 004c7322  5e                   pop esi
// 004c7323  895804               mov dword ptr [eax + 4], ebx
// 004c7326  8908                 mov dword ptr [eax], ecx
// 004c7328  5b                   pop ebx
// 004c7329  c21000               ret 0x10

extern "C" int __cdecl sub_5122C0(unsigned int* p);

struct Link
{
    Link* next;
};

struct Node
{
    unsigned int key;
    char padding[0x28C];
    Link link;
};

struct Table
{
    unsigned int bucketCount;
};

struct Result
{
    Node* node;
    Table* owner;

    Result();
    Result(Node*, Table*);
};

inline Result::Result()
{
}

inline Result::Result(Node* n, Table* t)
{
    owner = t;
    node = n;
}

struct S
{
    char padding[8];
    unsigned int bucketCount;
    char reserved[8];
    Link** buckets;

    Result find(unsigned int* key, unsigned int, unsigned int);
};

Result S::find(unsigned int* key, unsigned int, unsigned int)
{
    unsigned int hash = (unsigned int)sub_5122C0(key);
    unsigned int index = hash % bucketCount;
    Table* owner = reinterpret_cast<Table*>(padding + 8);
    Link** bucket = buckets + index;
    Link* current = *bucket;

    while (current != reinterpret_cast<Link*>(bucket))
    {
        Node* node = current
            ? reinterpret_cast<Node*>(reinterpret_cast<char*>(current) - 0x290)
            : 0;

        if (*key == node->key)
        {
            Result result;
            result.owner = owner;
            result.node = current
                ? reinterpret_cast<Node*>(reinterpret_cast<char*>(current) - 0x290)
                : 0;
            return result;
        }

        current = current->next;
    }

    return Result(
        *reinterpret_cast<Node**>(reinterpret_cast<char*>(this) - 8),
        owner);
}
