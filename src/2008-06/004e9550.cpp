// from server: 100% by king_originala
// roc 2008-06 004e9550  unit: RBX::ViewNew::Texture  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e9550
//
// 004e9550  6aff                 push -1
// 004e9552  64a100000000         mov eax, dword ptr fs:[0]
// 004e9558  68b6a77c00           push 0x7ca7b6
// 004e955d  50                   push eax
// 004e955e  64892500000000       mov dword ptr fs:[0], esp
// 004e9565  83ec08               sub esp, 8
// 004e9568  53                   push ebx
// 004e9569  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004e956d  55                   push ebp
// 004e956e  56                   push esi
// 004e956f  57                   push edi
// 004e9570  8b3b                 mov edi, dword ptr [ebx]
// 004e9572  8bf1                 mov esi, ecx
// 004e9574  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e9577  33d2                 xor edx, edx
// 004e9579  8bc7                 mov eax, edi
// 004e957b  f7f1                 div ecx
// 004e957d  8b4608               mov eax, dword ptr [esi + 8]
// 004e9580  8bea                 mov ebp, edx
// 004e9582  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 004e9585  85c0                 test eax, eax
// 004e9587  755a                 jne 0x4e95e3
// 004e9589  6a1c                 push 0x1c
// 004e958b  e8a0ef0100           call 0x508530
// 004e9590  83c404               add esp, 4
// 004e9593  89442428             mov dword ptr [esp + 0x28], eax
// 004e9597  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004e959f  85c0                 test eax, eax
// 004e95a1  7433                 je 0x4e95d6
// 004e95a3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e95a7  6a00                 push 0
// 004e95a9  57                   push edi
// 004e95aa  83ec10               sub esp, 0x10
// 004e95ad  8bcc                 mov ecx, esp
// 004e95af  89642428             mov dword ptr [esp + 0x28], esp
// 004e95b3  52                   push edx
// 004e95b4  c701fc6b8200         mov dword ptr [ecx], 0x826bfc
// 004e95ba  e8c1e2ffff           call 0x4e7880
// 004e95bf  8b03                 mov eax, dword ptr [ebx]
// 004e95c1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004e95c5  50                   push eax
// 004e95c6  e835f4ffff           call 0x4e8a00
// 004e95cb  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e95ce  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e95d1  e9f5000000           jmp 0x4e96cb
// 004e95d6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e95d9  33c0                 xor eax, eax
// 004e95db  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e95de  e9e8000000           jmp 0x4e96cb
// 004e95e3  bb01000000           mov ebx, 1
// 004e95e8  8ad3                 mov dl, bl
// 004e95ea  8d9b00000000         lea ebx, [ebx]
// 004e95f0  84d2                 test dl, dl
// 004e95f2  7408                 je 0x4e95fc
// 004e95f4  3b38                 cmp edi, dword ptr [eax]
// 004e95f6  7504                 jne 0x4e95fc
// 004e95f8  b201                 mov dl, 1
// 004e95fa  eb02                 jmp 0x4e95fe
// 004e95fc  32d2                 xor dl, dl
// 004e95fe  3b38                 cmp edi, dword ptr [eax]
// 004e9600  7509                 jne 0x4e960b
// 004e9602  397804               cmp dword ptr [eax + 4], edi
// 004e9605  0f8489000000         je 0x4e9694
// 004e960b  8b4018               mov eax, dword ptr [eax + 0x18]
// 004e960e  43                   inc ebx
// 004e960f  85c0                 test eax, eax
// 004e9611  75dd                 jne 0x4e95f0
// 004e9613  84d2                 test dl, dl
// 004e9615  0f94c0               sete al
// 004e9618  33d2                 xor edx, edx
// 004e961a  83fb05               cmp ebx, 5
// 004e961d  0f9fc2               setg dl
// 004e9620  85c2                 test edx, eax
// 004e9622  741a                 je 0x4e963e
// 004e9624  8b4604               mov eax, dword ptr [esi + 4]
// 004e9627  8d0480               lea eax, [eax + eax*4]
// 004e962a  03c0                 add eax, eax
// 004e962c  03c0                 add eax, eax
// 004e962e  3bc8                 cmp ecx, eax
// 004e9630  7d0c                 jge 0x4e963e
// 004e9632  8d4c0901             lea ecx, [ecx + ecx + 1]
// 004e9636  51                   push ecx
// 004e9637  8bce                 mov ecx, esi
// 004e9639  e8d2c7ffff           call 0x4e5e10
// 004e963e  33d2                 xor edx, edx
// 004e9640  8bc7                 mov eax, edi
// 004e9642  f7760c               div dword ptr [esi + 0xc]
// 004e9645  6a1c                 push 0x1c
// 004e9647  8bda                 mov ebx, edx
// 004e9649  e8e2ee0100           call 0x508530
// 004e964e  8be8                 mov ebp, eax
// 004e9650  83c404               add esp, 4
// 004e9653  896c2410             mov dword ptr [esp + 0x10], ebp
// 004e9657  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004e965f  85ed                 test ebp, ebp
// 004e9661  7460                 je 0x4e96c3
// 004e9663  8b5608               mov edx, dword ptr [esi + 8]
// 004e9666  8b049a               mov eax, dword ptr [edx + ebx*4]
// 004e9669  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e966d  50                   push eax
// 004e966e  57                   push edi
// 004e966f  83ec10               sub esp, 0x10
// 004e9672  8bcc                 mov ecx, esp
// 004e9674  8964242c             mov dword ptr [esp + 0x2c], esp
// 004e9678  52                   push edx
// 004e9679  c701fc6b8200         mov dword ptr [ecx], 0x826bfc
// 004e967f  e8fce1ffff           call 0x4e7880
// 004e9684  8b442440             mov eax, dword ptr [esp + 0x40]
// 004e9688  8b08                 mov ecx, dword ptr [eax]
// 004e968a  51                   push ecx
// 004e968b  8bcd                 mov ecx, ebp
// 004e968d  e86ef3ffff           call 0x4e8a00
// 004e9692  eb31                 jmp 0x4e96c5
// 004e9694  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004e9698  8d7008               lea esi, [eax + 8]
// 004e969b  3bf7                 cmp esi, edi
// 004e969d  742f                 je 0x4e96ce
// 004e969f  8bce                 mov ecx, esi
// 004e96a1  e88ae7feff           call 0x4d7e30
// 004e96a6  57                   push edi
// 004e96a7  8bce                 mov ecx, esi
// 004e96a9  e8d2e1ffff           call 0x4e7880
// 004e96ae  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e96b2  64890d00000000       mov dword ptr fs:[0], ecx
// 004e96b9  5f                   pop edi
// 004e96ba  5e                   pop esi
// 004e96bb  5d                   pop ebp
// 004e96bc  5b                   pop ebx
// 004e96bd  83c414               add esp, 0x14
// 004e96c0  c20800               ret 8
// 004e96c3  33c0                 xor eax, eax
// 004e96c5  8b5608               mov edx, dword ptr [esi + 8]
// 004e96c8  89049a               mov dword ptr [edx + ebx*4], eax
// 004e96cb  ff4604               inc dword ptr [esi + 4]
// 004e96ce  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e96d2  5f                   pop edi
// 004e96d3  5e                   pop esi
// 004e96d4  5d                   pop ebp
// 004e96d5  64890d00000000       mov dword ptr fs:[0], ecx
// 004e96dc  5b                   pop ebx
// 004e96dd  83c414               add esp, 0x14
// 004e96e0  c20800               ret 8

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Value {
    unsigned int data[3];

    Value(const Value& other) { copy(other); }
    virtual ~Value();

    void copy(const Value&);
    void clear();
};

struct Node {
    unsigned int key;
    unsigned int hash;
    Value value;
    Node* next;

    Node(unsigned int, Value, unsigned int, Node*);
};

struct Table {
    unsigned int reserved;
    int count;
    Node** buckets;
    int bucketCount;

    void resize(int);
    void set(const unsigned int&, const Value&);
};

void Table::set(const unsigned int& key, const Value& value)
{
    unsigned int hash = key;
    unsigned int bucket = hash % bucketCount;
    Node* node = buckets[bucket];

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
            Value* destination = &node->value;
            if (destination != &value) {
                destination->clear();
                destination->copy(value);
            }
            return;
        }

        node = node->next;
        ++length;
    } while (node);

    if ((length > 5) & !sameHash) {
        if (bucketCount < count * 20)
            resize(bucketCount * 2 + 1);
    }

    bucket = hash % bucketCount;
    buckets[bucket] = new Node(key, value, hash, buckets[bucket]);
    ++count;
}
