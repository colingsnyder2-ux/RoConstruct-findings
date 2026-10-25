// from server: 100% by king_originala
// roc 2008-06 004e96f0  unit: RBX::ViewNew::Texture  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e96f0
//
// 004e96f0  6aff                 push -1
// 004e96f2  64a100000000         mov eax, dword ptr fs:[0]
// 004e96f8  68b6a77c00           push 0x7ca7b6
// 004e96fd  50                   push eax
// 004e96fe  64892500000000       mov dword ptr fs:[0], esp
// 004e9705  83ec08               sub esp, 8
// 004e9708  53                   push ebx
// 004e9709  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004e970d  55                   push ebp
// 004e970e  56                   push esi
// 004e970f  57                   push edi
// 004e9710  8b3b                 mov edi, dword ptr [ebx]
// 004e9712  8bf1                 mov esi, ecx
// 004e9714  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e9717  33d2                 xor edx, edx
// 004e9719  8bc7                 mov eax, edi
// 004e971b  f7f1                 div ecx
// 004e971d  8b4608               mov eax, dword ptr [esi + 8]
// 004e9720  8bea                 mov ebp, edx
// 004e9722  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 004e9725  85c0                 test eax, eax
// 004e9727  755a                 jne 0x4e9783
// 004e9729  6a1c                 push 0x1c
// 004e972b  e800ee0100           call 0x508530
// 004e9730  83c404               add esp, 4
// 004e9733  89442428             mov dword ptr [esp + 0x28], eax
// 004e9737  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004e973f  85c0                 test eax, eax
// 004e9741  7433                 je 0x4e9776
// 004e9743  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e9747  6a00                 push 0
// 004e9749  57                   push edi
// 004e974a  83ec10               sub esp, 0x10
// 004e974d  8bcc                 mov ecx, esp
// 004e974f  89642428             mov dword ptr [esp + 0x28], esp
// 004e9753  52                   push edx
// 004e9754  c701046c8200         mov dword ptr [ecx], 0x826c04
// 004e975a  e821e1ffff           call 0x4e7880
// 004e975f  8b03                 mov eax, dword ptr [ebx]
// 004e9761  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004e9765  50                   push eax
// 004e9766  e855f3ffff           call 0x4e8ac0
// 004e976b  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e976e  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e9771  e9f5000000           jmp 0x4e986b
// 004e9776  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e9779  33c0                 xor eax, eax
// 004e977b  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e977e  e9e8000000           jmp 0x4e986b
// 004e9783  bb01000000           mov ebx, 1
// 004e9788  8ad3                 mov dl, bl
// 004e978a  8d9b00000000         lea ebx, [ebx]
// 004e9790  84d2                 test dl, dl
// 004e9792  7408                 je 0x4e979c
// 004e9794  3b38                 cmp edi, dword ptr [eax]
// 004e9796  7504                 jne 0x4e979c
// 004e9798  b201                 mov dl, 1
// 004e979a  eb02                 jmp 0x4e979e
// 004e979c  32d2                 xor dl, dl
// 004e979e  3b38                 cmp edi, dword ptr [eax]
// 004e97a0  7509                 jne 0x4e97ab
// 004e97a2  397804               cmp dword ptr [eax + 4], edi
// 004e97a5  0f8489000000         je 0x4e9834
// 004e97ab  8b4018               mov eax, dword ptr [eax + 0x18]
// 004e97ae  43                   inc ebx
// 004e97af  85c0                 test eax, eax
// 004e97b1  75dd                 jne 0x4e9790
// 004e97b3  84d2                 test dl, dl
// 004e97b5  0f94c0               sete al
// 004e97b8  33d2                 xor edx, edx
// 004e97ba  83fb05               cmp ebx, 5
// 004e97bd  0f9fc2               setg dl
// 004e97c0  85c2                 test edx, eax
// 004e97c2  741a                 je 0x4e97de
// 004e97c4  8b4604               mov eax, dword ptr [esi + 4]
// 004e97c7  8d0480               lea eax, [eax + eax*4]
// 004e97ca  03c0                 add eax, eax
// 004e97cc  03c0                 add eax, eax
// 004e97ce  3bc8                 cmp ecx, eax
// 004e97d0  7d0c                 jge 0x4e97de
// 004e97d2  8d4c0901             lea ecx, [ecx + ecx + 1]
// 004e97d6  51                   push ecx
// 004e97d7  8bce                 mov ecx, esi
// 004e97d9  e832c6ffff           call 0x4e5e10
// 004e97de  33d2                 xor edx, edx
// 004e97e0  8bc7                 mov eax, edi
// 004e97e2  f7760c               div dword ptr [esi + 0xc]
// 004e97e5  6a1c                 push 0x1c
// 004e97e7  8bda                 mov ebx, edx
// 004e97e9  e842ed0100           call 0x508530
// 004e97ee  8be8                 mov ebp, eax
// 004e97f0  83c404               add esp, 4
// 004e97f3  896c2410             mov dword ptr [esp + 0x10], ebp
// 004e97f7  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004e97ff  85ed                 test ebp, ebp
// 004e9801  7460                 je 0x4e9863
// 004e9803  8b5608               mov edx, dword ptr [esi + 8]
// 004e9806  8b049a               mov eax, dword ptr [edx + ebx*4]
// 004e9809  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e980d  50                   push eax
// 004e980e  57                   push edi
// 004e980f  83ec10               sub esp, 0x10
// 004e9812  8bcc                 mov ecx, esp
// 004e9814  8964242c             mov dword ptr [esp + 0x2c], esp
// 004e9818  52                   push edx
// 004e9819  c701046c8200         mov dword ptr [ecx], 0x826c04
// 004e981f  e85ce0ffff           call 0x4e7880
// 004e9824  8b442440             mov eax, dword ptr [esp + 0x40]
// 004e9828  8b08                 mov ecx, dword ptr [eax]
// 004e982a  51                   push ecx
// 004e982b  8bcd                 mov ecx, ebp
// 004e982d  e88ef2ffff           call 0x4e8ac0
// 004e9832  eb31                 jmp 0x4e9865
// 004e9834  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004e9838  8d7008               lea esi, [eax + 8]
// 004e983b  3bf7                 cmp esi, edi
// 004e983d  742f                 je 0x4e986e
// 004e983f  8bce                 mov ecx, esi
// 004e9841  e8eae5feff           call 0x4d7e30
// 004e9846  57                   push edi
// 004e9847  8bce                 mov ecx, esi
// 004e9849  e832e0ffff           call 0x4e7880
// 004e984e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e9852  64890d00000000       mov dword ptr fs:[0], ecx
// 004e9859  5f                   pop edi
// 004e985a  5e                   pop esi
// 004e985b  5d                   pop ebp
// 004e985c  5b                   pop ebx
// 004e985d  83c414               add esp, 0x14
// 004e9860  c20800               ret 8
// 004e9863  33c0                 xor eax, eax
// 004e9865  8b5608               mov edx, dword ptr [esi + 8]
// 004e9868  89049a               mov dword ptr [edx + ebx*4], eax
// 004e986b  ff4604               inc dword ptr [esi + 4]
// 004e986e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e9872  5f                   pop edi
// 004e9873  5e                   pop esi
// 004e9874  5d                   pop ebp
// 004e9875  64890d00000000       mov dword ptr fs:[0], ecx
// 004e987c  5b                   pop ebx
// 004e987d  83c414               add esp, 0x14
// 004e9880  c20800               ret 8

extern char valueTag;

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Value {
    void *tag;
    unsigned int data[3];

    Value(const Value &);
    void copy(const Value &);
    void clear();
};

inline Value::Value(const Value &other) : tag(&valueTag)
{
    copy(other);
}

struct Node {
    unsigned int key;
    unsigned int hash;
    Value value;
    Node *next;

    Node(unsigned int, Value, unsigned int, Node *);
};

struct Table {
    int unused;
    int count;
    Node **buckets;
    int capacity;

    void resize(int);
    void set(const unsigned int &, const Value &);
};

void Table::set(const unsigned int &key, const Value &value)
{
    unsigned int hash = key;
    unsigned int bucket = hash % capacity;
    Node *node = buckets[bucket];

    if (!node) {
        buckets[bucket] = new Node(key, value, hash, 0);
        ++count;
        return;
    }

    int length = 1;
    bool sameHash = true;

    do {
        sameHash = sameHash && hash == node->key;

        if (hash == node->key && node->hash == hash) {
            if (&node->value != &value) {
                node->value.clear();
                node->value.copy(value);
            }
            return;
        }

        node = node->next;
        ++length;
    } while (node);

    if ((!sameHash) & (length > 5)) {
        if (capacity < count * 20)
            resize(capacity * 2 + 1);
    }

    bucket = hash % capacity;
    buckets[bucket] = new Node(key, value, hash, buckets[bucket]);
    ++count;
}
