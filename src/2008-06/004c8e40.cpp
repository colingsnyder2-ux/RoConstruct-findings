// from server: 100% by king_originala
// roc 2008-06 004c8e40  unit: RBX::Network::DirectPhysicsReceiver  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c8e40
//
// 004c8e40  51                   push ecx
// 004c8e41  53                   push ebx
// 004c8e42  56                   push esi
// 004c8e43  8bf1                 mov esi, ecx
// 004c8e45  57                   push edi
// 004c8e46  85f6                 test esi, esi
// 004c8e48  7405                 je 0x4c8e4f
// 004c8e4a  8d46f4               lea eax, [esi - 0xc]
// 004c8e4d  eb02                 jmp 0x4c8e51
// 004c8e4f  33c0                 xor eax, eax
// 004c8e51  8b4030               mov eax, dword ptr [eax + 0x30]
// 004c8e54  40                   inc eax
// 004c8e55  50                   push eax
// 004c8e56  e8d5e8ffff           call 0x4c7730
// 004c8e5b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c8e5f  57                   push edi
// 004c8e60  e84b170000           call 0x4ca5b0
// 004c8e65  33d2                 xor edx, edx
// 004c8e67  f77608               div dword ptr [esi + 8]
// 004c8e6a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004c8e6d  83c404               add esp, 4
// 004c8e70  c644240c00           mov byte ptr [esp + 0xc], 0
// 004c8e75  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c8e79  50                   push eax
// 004c8e7a  8bda                 mov ebx, edx
// 004c8e7c  8d1499               lea edx, [ecx + ebx*4]
// 004c8e7f  8d4c2418             lea ecx, [esp + 0x18]
// 004c8e83  51                   push ecx
// 004c8e84  57                   push edi
// 004c8e85  8bce                 mov ecx, esi
// 004c8e87  89542420             mov dword ptr [esp + 0x20], edx
// 004c8e8b  e820e2ffff           call 0x4c70b0
// 004c8e90  84c0                 test al, al
// 004c8e92  751d                 jne 0x4c8eb1
// 004c8e94  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c8e98  85c0                 test eax, eax
// 004c8e9a  740c                 je 0x4c8ea8
// 004c8e9c  5f                   pop edi
// 004c8e9d  5e                   pop esi
// 004c8e9e  0570fdffff           add eax, 0xfffffd70
// 004c8ea3  5b                   pop ebx
// 004c8ea4  59                   pop ecx
// 004c8ea5  c20800               ret 8
// 004c8ea8  5f                   pop edi
// 004c8ea9  5e                   pop esi
// 004c8eaa  33c0                 xor eax, eax
// 004c8eac  5b                   pop ebx
// 004c8ead  59                   pop ecx
// 004c8eae  c20800               ret 8
// 004c8eb1  55                   push ebp
// 004c8eb2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004c8eb6  55                   push ebp
// 004c8eb7  57                   push edi
// 004c8eb8  8bce                 mov ecx, esi
// 004c8eba  e831feffff           call 0x4c8cf0
// 004c8ebf  3bc5                 cmp eax, ebp
// 004c8ec1  7520                 jne 0x4c8ee3
// 004c8ec3  85ed                 test ebp, ebp
// 004c8ec5  7408                 je 0x4c8ecf
// 004c8ec7  8d8d90020000         lea ecx, [ebp + 0x290]
// 004c8ecd  eb02                 jmp 0x4c8ed1
// 004c8ecf  33c9                 xor ecx, ecx
// 004c8ed1  8b542418             mov edx, dword ptr [esp + 0x18]
// 004c8ed5  8b3a                 mov edi, dword ptr [edx]
// 004c8ed7  8939                 mov dword ptr [ecx], edi
// 004c8ed9  890a                 mov dword ptr [edx], ecx
// 004c8edb  395e20               cmp dword ptr [esi + 0x20], ebx
// 004c8ede  7603                 jbe 0x4c8ee3
// 004c8ee0  895e20               mov dword ptr [esi + 0x20], ebx
// 004c8ee3  5d                   pop ebp
// 004c8ee4  5f                   pop edi
// 004c8ee5  5e                   pop esi
// 004c8ee6  5b                   pop ebx
// 004c8ee7  59                   pop ecx
// 004c8ee8  c20800               ret 8

struct Node
{
    Node* next;
};

struct Object
{
    char padding[0x290];
    Node link;
};

struct Flag
{
    bool value;
};

extern "C" int __cdecl sub_5122C0(unsigned int* p);

struct Receiver
{
    char padding0[8];
    unsigned int bucketCount;
    char padding1[8];
    Node** buckets;
    char padding2[8];
    unsigned int firstBucket;
    unsigned int count;

    void reserve(unsigned int n);
    bool find(unsigned int* key, unsigned int** position, Flag flag);
    Object* insert(unsigned int* key, Object* object);
    Object* receive(unsigned int* key, Object* object);
};

Object* Receiver::receive(unsigned int* key, Object* object)
{
    char* base = this ? reinterpret_cast<char*>(this) - 12 : 0;
    reserve(*reinterpret_cast<unsigned int*>(base + 0x30) + 1);

    unsigned int* savedKey = key;
    unsigned int bucket =
        static_cast<unsigned int>(sub_5122C0(savedKey)) % bucketCount;

    Flag flag;
    flag.value = false;
    key = reinterpret_cast<unsigned int*>(buckets + bucket);
    if (!find(savedKey, &key, flag))
        return key ? reinterpret_cast<Object*>(
                         reinterpret_cast<char*>(key) - 0x290) : 0;

    Object* result = insert(savedKey, object);
    if (result == object)
    {
        Node* node = object ? &object->link : 0;
        Node** position = reinterpret_cast<Node**>(key);
        node->next = *position;
        *position = node;
        if (firstBucket > bucket)
            firstBucket = bucket;
    }
    return result;
}
