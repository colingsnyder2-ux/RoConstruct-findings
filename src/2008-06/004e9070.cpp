// from server: 100% by king_originala
// roc 2008-06 004e9070  unit: RBX::ViewNew::Texture  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e9070
//
// 004e9070  6aff                 push -1
// 004e9072  64a100000000         mov eax, dword ptr fs:[0]
// 004e9078  68b6a77c00           push 0x7ca7b6
// 004e907d  50                   push eax
// 004e907e  64892500000000       mov dword ptr fs:[0], esp
// 004e9085  83ec08               sub esp, 8
// 004e9088  53                   push ebx
// 004e9089  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004e908d  55                   push ebp
// 004e908e  56                   push esi
// 004e908f  57                   push edi
// 004e9090  8b3b                 mov edi, dword ptr [ebx]
// 004e9092  8bf1                 mov esi, ecx
// 004e9094  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e9097  33d2                 xor edx, edx
// 004e9099  8bc7                 mov eax, edi
// 004e909b  f7f1                 div ecx
// 004e909d  8b4608               mov eax, dword ptr [esi + 8]
// 004e90a0  8bea                 mov ebp, edx
// 004e90a2  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 004e90a5  85c0                 test eax, eax
// 004e90a7  755a                 jne 0x4e9103
// 004e90a9  6a1c                 push 0x1c
// 004e90ab  e880f40100           call 0x508530
// 004e90b0  83c404               add esp, 4
// 004e90b3  89442428             mov dword ptr [esp + 0x28], eax
// 004e90b7  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004e90bf  85c0                 test eax, eax
// 004e90c1  7433                 je 0x4e90f6
// 004e90c3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e90c7  6a00                 push 0
// 004e90c9  57                   push edi
// 004e90ca  83ec10               sub esp, 0x10
// 004e90cd  8bcc                 mov ecx, esp
// 004e90cf  89642428             mov dword ptr [esp + 0x28], esp
// 004e90d3  52                   push edx
// 004e90d4  c701f46b8200         mov dword ptr [ecx], 0x826bf4
// 004e90da  e831e7ffff           call 0x4e7810
// 004e90df  8b03                 mov eax, dword ptr [ebx]
// 004e90e1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004e90e5  50                   push eax
// 004e90e6  e8d5f6ffff           call 0x4e87c0
// 004e90eb  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e90ee  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e90f1  e9f5000000           jmp 0x4e91eb
// 004e90f6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e90f9  33c0                 xor eax, eax
// 004e90fb  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e90fe  e9e8000000           jmp 0x4e91eb
// 004e9103  bb01000000           mov ebx, 1
// 004e9108  8ad3                 mov dl, bl
// 004e910a  8d9b00000000         lea ebx, [ebx]
// 004e9110  84d2                 test dl, dl
// 004e9112  7408                 je 0x4e911c
// 004e9114  3b38                 cmp edi, dword ptr [eax]
// 004e9116  7504                 jne 0x4e911c
// 004e9118  b201                 mov dl, 1
// 004e911a  eb02                 jmp 0x4e911e
// 004e911c  32d2                 xor dl, dl
// 004e911e  3b38                 cmp edi, dword ptr [eax]
// 004e9120  7509                 jne 0x4e912b
// 004e9122  397804               cmp dword ptr [eax + 4], edi
// 004e9125  0f8489000000         je 0x4e91b4
// 004e912b  8b4018               mov eax, dword ptr [eax + 0x18]
// 004e912e  43                   inc ebx
// 004e912f  85c0                 test eax, eax
// 004e9131  75dd                 jne 0x4e9110
// 004e9133  84d2                 test dl, dl
// 004e9135  0f94c0               sete al
// 004e9138  33d2                 xor edx, edx
// 004e913a  83fb05               cmp ebx, 5
// 004e913d  0f9fc2               setg dl
// 004e9140  85c2                 test edx, eax
// 004e9142  741a                 je 0x4e915e
// 004e9144  8b4604               mov eax, dword ptr [esi + 4]
// 004e9147  8d0480               lea eax, [eax + eax*4]
// 004e914a  03c0                 add eax, eax
// 004e914c  03c0                 add eax, eax
// 004e914e  3bc8                 cmp ecx, eax
// 004e9150  7d0c                 jge 0x4e915e
// 004e9152  8d4c0901             lea ecx, [ecx + ecx + 1]
// 004e9156  51                   push ecx
// 004e9157  8bce                 mov ecx, esi
// 004e9159  e8b2ccffff           call 0x4e5e10
// 004e915e  33d2                 xor edx, edx
// 004e9160  8bc7                 mov eax, edi
// 004e9162  f7760c               div dword ptr [esi + 0xc]
// 004e9165  6a1c                 push 0x1c
// 004e9167  8bda                 mov ebx, edx
// 004e9169  e8c2f30100           call 0x508530
// 004e916e  8be8                 mov ebp, eax
// 004e9170  83c404               add esp, 4
// 004e9173  896c2410             mov dword ptr [esp + 0x10], ebp
// 004e9177  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004e917f  85ed                 test ebp, ebp
// 004e9181  7460                 je 0x4e91e3
// 004e9183  8b5608               mov edx, dword ptr [esi + 8]
// 004e9186  8b049a               mov eax, dword ptr [edx + ebx*4]
// 004e9189  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e918d  50                   push eax
// 004e918e  57                   push edi
// 004e918f  83ec10               sub esp, 0x10
// 004e9192  8bcc                 mov ecx, esp
// 004e9194  8964242c             mov dword ptr [esp + 0x2c], esp
// 004e9198  52                   push edx
// 004e9199  c701f46b8200         mov dword ptr [ecx], 0x826bf4
// 004e919f  e86ce6ffff           call 0x4e7810
// 004e91a4  8b442440             mov eax, dword ptr [esp + 0x40]
// 004e91a8  8b08                 mov ecx, dword ptr [eax]
// 004e91aa  51                   push ecx
// 004e91ab  8bcd                 mov ecx, ebp
// 004e91ad  e80ef6ffff           call 0x4e87c0
// 004e91b2  eb31                 jmp 0x4e91e5
// 004e91b4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004e91b8  8d7008               lea esi, [eax + 8]
// 004e91bb  3bf7                 cmp esi, edi
// 004e91bd  742f                 je 0x4e91ee
// 004e91bf  8bce                 mov ecx, esi
// 004e91c1  e8faebfeff           call 0x4d7dc0
// 004e91c6  57                   push edi
// 004e91c7  8bce                 mov ecx, esi
// 004e91c9  e842e6ffff           call 0x4e7810
// 004e91ce  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e91d2  64890d00000000       mov dword ptr fs:[0], ecx
// 004e91d9  5f                   pop edi
// 004e91da  5e                   pop esi
// 004e91db  5d                   pop ebp
// 004e91dc  5b                   pop ebx
// 004e91dd  83c414               add esp, 0x14
// 004e91e0  c20800               ret 8
// 004e91e3  33c0                 xor eax, eax
// 004e91e5  8b5608               mov edx, dword ptr [esi + 8]
// 004e91e8  89049a               mov dword ptr [edx + ebx*4], eax
// 004e91eb  ff4604               inc dword ptr [esi + 4]
// 004e91ee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e91f2  5f                   pop edi
// 004e91f3  5e                   pop esi
// 004e91f4  5d                   pop ebp
// 004e91f5  64890d00000000       mov dword ptr fs:[0], ecx
// 004e91fc  5b                   pop ebx
// 004e91fd  83c414               add esp, 0x14
// 004e9200  c20800               ret 8

extern char valueTable;

struct Value
{
    void *table;
    unsigned int data[3];

    Value(const Value &);
    ~Value();
    void copy(const Value &);
};

inline Value::Value(const Value &other)
{
    table = &valueTable;
    copy(other);
}

struct Node
{
    unsigned int key;
    unsigned int hash;
    Value value;
    Node *next;

    Node(unsigned int, Value, unsigned int, Node *);
};

struct S
{
    unsigned int reserved;
    int count;
    Node **buckets;
    int bucketCount;

    void resize(int);
    void f(const unsigned int *, const Value &);
};

void S::f(const unsigned int *key, const Value &value)
{
    unsigned int hash = *key;
    unsigned int bucket = hash % bucketCount;
    Node *node = buckets[bucket];

    if (!node)
    {
        buckets[bucket] = new Node(*key, value, hash, 0);
        ++count;
        return;
    }

    int length = 1;
    bool sameHash = true;
    do
    {
        sameHash = sameHash && hash == node->key;
        if (hash == node->key && node->hash == hash)
        {
            if (&node->value != &value)
            {
                node->value.~Value();
                node->value.copy(value);
            }
            return;
        }
        node = node->next;
        ++length;
    } while (node);

    if ((!sameHash) & (length > 5))
    {
        if (bucketCount < count * 20)
            resize(bucketCount * 2 + 1);
    }

    bucket = hash % bucketCount;
    buckets[bucket] = new Node(*key, value, hash, buckets[bucket]);
    ++count;
}
