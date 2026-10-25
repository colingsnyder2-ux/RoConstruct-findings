// from server: 100% by king_originala
// roc 2008-06 004e9210  unit: RBX::ViewNew::Texture  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e9210
//
// 004e9210  6aff                 push -1
// 004e9212  64a100000000         mov eax, dword ptr fs:[0]
// 004e9218  68b6a77c00           push 0x7ca7b6
// 004e921d  50                   push eax
// 004e921e  64892500000000       mov dword ptr fs:[0], esp
// 004e9225  83ec08               sub esp, 8
// 004e9228  53                   push ebx
// 004e9229  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004e922d  55                   push ebp
// 004e922e  56                   push esi
// 004e922f  57                   push edi
// 004e9230  8b3b                 mov edi, dword ptr [ebx]
// 004e9232  8bf1                 mov esi, ecx
// 004e9234  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e9237  33d2                 xor edx, edx
// 004e9239  8bc7                 mov eax, edi
// 004e923b  f7f1                 div ecx
// 004e923d  8b4608               mov eax, dword ptr [esi + 8]
// 004e9240  8bea                 mov ebp, edx
// 004e9242  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 004e9245  85c0                 test eax, eax
// 004e9247  755a                 jne 0x4e92a3
// 004e9249  6a1c                 push 0x1c
// 004e924b  e8e0f20100           call 0x508530
// 004e9250  83c404               add esp, 4
// 004e9253  89442428             mov dword ptr [esp + 0x28], eax
// 004e9257  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004e925f  85c0                 test eax, eax
// 004e9261  7433                 je 0x4e9296
// 004e9263  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e9267  6a00                 push 0
// 004e9269  57                   push edi
// 004e926a  83ec10               sub esp, 0x10
// 004e926d  8bcc                 mov ecx, esp
// 004e926f  89642428             mov dword ptr [esp + 0x28], esp
// 004e9273  52                   push edx
// 004e9274  c7011c6c8200         mov dword ptr [ecx], 0x826c1c
// 004e927a  e801e6ffff           call 0x4e7880
// 004e927f  8b03                 mov eax, dword ptr [ebx]
// 004e9281  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004e9285  50                   push eax
// 004e9286  e8f5f5ffff           call 0x4e8880
// 004e928b  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e928e  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e9291  e9f5000000           jmp 0x4e938b
// 004e9296  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e9299  33c0                 xor eax, eax
// 004e929b  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e929e  e9e8000000           jmp 0x4e938b
// 004e92a3  bb01000000           mov ebx, 1
// 004e92a8  8ad3                 mov dl, bl
// 004e92aa  8d9b00000000         lea ebx, [ebx]
// 004e92b0  84d2                 test dl, dl
// 004e92b2  7408                 je 0x4e92bc
// 004e92b4  3b38                 cmp edi, dword ptr [eax]
// 004e92b6  7504                 jne 0x4e92bc
// 004e92b8  b201                 mov dl, 1
// 004e92ba  eb02                 jmp 0x4e92be
// 004e92bc  32d2                 xor dl, dl
// 004e92be  3b38                 cmp edi, dword ptr [eax]
// 004e92c0  7509                 jne 0x4e92cb
// 004e92c2  397804               cmp dword ptr [eax + 4], edi
// 004e92c5  0f8489000000         je 0x4e9354
// 004e92cb  8b4018               mov eax, dword ptr [eax + 0x18]
// 004e92ce  43                   inc ebx
// 004e92cf  85c0                 test eax, eax
// 004e92d1  75dd                 jne 0x4e92b0
// 004e92d3  84d2                 test dl, dl
// 004e92d5  0f94c0               sete al
// 004e92d8  33d2                 xor edx, edx
// 004e92da  83fb05               cmp ebx, 5
// 004e92dd  0f9fc2               setg dl
// 004e92e0  85c2                 test edx, eax
// 004e92e2  741a                 je 0x4e92fe
// 004e92e4  8b4604               mov eax, dword ptr [esi + 4]
// 004e92e7  8d0480               lea eax, [eax + eax*4]
// 004e92ea  03c0                 add eax, eax
// 004e92ec  03c0                 add eax, eax
// 004e92ee  3bc8                 cmp ecx, eax
// 004e92f0  7d0c                 jge 0x4e92fe
// 004e92f2  8d4c0901             lea ecx, [ecx + ecx + 1]
// 004e92f6  51                   push ecx
// 004e92f7  8bce                 mov ecx, esi
// 004e92f9  e812cbffff           call 0x4e5e10
// 004e92fe  33d2                 xor edx, edx
// 004e9300  8bc7                 mov eax, edi
// 004e9302  f7760c               div dword ptr [esi + 0xc]
// 004e9305  6a1c                 push 0x1c
// 004e9307  8bda                 mov ebx, edx
// 004e9309  e822f20100           call 0x508530
// 004e930e  8be8                 mov ebp, eax
// 004e9310  83c404               add esp, 4
// 004e9313  896c2410             mov dword ptr [esp + 0x10], ebp
// 004e9317  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004e931f  85ed                 test ebp, ebp
// 004e9321  7460                 je 0x4e9383
// 004e9323  8b5608               mov edx, dword ptr [esi + 8]
// 004e9326  8b049a               mov eax, dword ptr [edx + ebx*4]
// 004e9329  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e932d  50                   push eax
// 004e932e  57                   push edi
// 004e932f  83ec10               sub esp, 0x10
// 004e9332  8bcc                 mov ecx, esp
// 004e9334  8964242c             mov dword ptr [esp + 0x2c], esp
// 004e9338  52                   push edx
// 004e9339  c7011c6c8200         mov dword ptr [ecx], 0x826c1c
// 004e933f  e83ce5ffff           call 0x4e7880
// 004e9344  8b442440             mov eax, dword ptr [esp + 0x40]
// 004e9348  8b08                 mov ecx, dword ptr [eax]
// 004e934a  51                   push ecx
// 004e934b  8bcd                 mov ecx, ebp
// 004e934d  e82ef5ffff           call 0x4e8880
// 004e9352  eb31                 jmp 0x4e9385
// 004e9354  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004e9358  8d7008               lea esi, [eax + 8]
// 004e935b  3bf7                 cmp esi, edi
// 004e935d  742f                 je 0x4e938e
// 004e935f  8bce                 mov ecx, esi
// 004e9361  e8caeafeff           call 0x4d7e30
// 004e9366  57                   push edi
// 004e9367  8bce                 mov ecx, esi
// 004e9369  e812e5ffff           call 0x4e7880
// 004e936e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e9372  64890d00000000       mov dword ptr fs:[0], ecx
// 004e9379  5f                   pop edi
// 004e937a  5e                   pop esi
// 004e937b  5d                   pop ebp
// 004e937c  5b                   pop ebx
// 004e937d  83c414               add esp, 0x14
// 004e9380  c20800               ret 8
// 004e9383  33c0                 xor eax, eax
// 004e9385  8b5608               mov edx, dword ptr [esi + 8]
// 004e9388  89049a               mov dword ptr [edx + ebx*4], eax
// 004e938b  ff4604               inc dword ptr [esi + 4]
// 004e938e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e9392  5f                   pop edi
// 004e9393  5e                   pop esi
// 004e9394  5d                   pop ebp
// 004e9395  64890d00000000       mov dword ptr fs:[0], ecx
// 004e939c  5b                   pop ebx
// 004e939d  83c414               add esp, 0x14
// 004e93a0  c20800               ret 8

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);
extern void* valueTable[];

struct Value
{
    void* table;
    unsigned int data[3];

    Value(const Value&);
    ~Value();
    void copy(const Value&);
    void release();
};

inline Value::Value(const Value& other) : table(valueTable)
{
    copy(other);
}

inline Value::~Value()
{
    release();
}

struct Entry
{
    unsigned int key;
    unsigned int hash;
    Value value;
    Entry* next;

    Entry(unsigned int, Value, unsigned int, Entry*);
};

struct S
{
    unsigned int reserved;
    int size;
    Entry** buckets;
    int bucketCount;

    void resize(int);
    void f(const unsigned int&, const Value&);
};

void S::f(const unsigned int& key, const Value& value)
{
    unsigned int hash = key;
    unsigned int bucket = hash % bucketCount;
    Entry* entry = buckets[bucket];

    if (!entry) {
        buckets[bucket] = new Entry(key, value, hash, 0);
        ++size;
        return;
    }

    int length = 1;
    bool sameHash = true;

    do {
        sameHash = sameHash && hash == entry->key;

        if (hash == entry->key && entry->hash == hash) {
            Value* destination = &entry->value;
            if (destination != &value) {
                destination->release();
                destination->copy(value);
            }
            return;
        }

        entry = entry->next;
        ++length;
    } while (entry);

    if ((!sameHash) & (length > 5)) {
        if (bucketCount < size * 20)
            resize(bucketCount * 2 + 1);
    }

    bucket = hash % bucketCount;
    buckets[bucket] = new Entry(key, value, hash, buckets[bucket]);
    ++size;
}
