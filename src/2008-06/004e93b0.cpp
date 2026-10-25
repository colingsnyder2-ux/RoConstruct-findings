// from server: 100% by king_originala
// roc 2008-06 004e93b0  unit: RBX::ViewNew::Texture  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e93b0
//
// 004e93b0  6aff                 push -1
// 004e93b2  64a100000000         mov eax, dword ptr fs:[0]
// 004e93b8  68b6a77c00           push 0x7ca7b6
// 004e93bd  50                   push eax
// 004e93be  64892500000000       mov dword ptr fs:[0], esp
// 004e93c5  83ec08               sub esp, 8
// 004e93c8  53                   push ebx
// 004e93c9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004e93cd  55                   push ebp
// 004e93ce  56                   push esi
// 004e93cf  57                   push edi
// 004e93d0  8b3b                 mov edi, dword ptr [ebx]
// 004e93d2  8bf1                 mov esi, ecx
// 004e93d4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e93d7  33d2                 xor edx, edx
// 004e93d9  8bc7                 mov eax, edi
// 004e93db  f7f1                 div ecx
// 004e93dd  8b4608               mov eax, dword ptr [esi + 8]
// 004e93e0  8bea                 mov ebp, edx
// 004e93e2  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 004e93e5  85c0                 test eax, eax
// 004e93e7  755a                 jne 0x4e9443
// 004e93e9  6a1c                 push 0x1c
// 004e93eb  e840f10100           call 0x508530
// 004e93f0  83c404               add esp, 4
// 004e93f3  89442428             mov dword ptr [esp + 0x28], eax
// 004e93f7  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004e93ff  85c0                 test eax, eax
// 004e9401  7433                 je 0x4e9436
// 004e9403  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e9407  6a00                 push 0
// 004e9409  57                   push edi
// 004e940a  83ec10               sub esp, 0x10
// 004e940d  8bcc                 mov ecx, esp
// 004e940f  89642428             mov dword ptr [esp + 0x28], esp
// 004e9413  52                   push edx
// 004e9414  c7010c6c8200         mov dword ptr [ecx], 0x826c0c
// 004e941a  e861e4ffff           call 0x4e7880
// 004e941f  8b03                 mov eax, dword ptr [ebx]
// 004e9421  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004e9425  50                   push eax
// 004e9426  e815f5ffff           call 0x4e8940
// 004e942b  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e942e  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e9431  e9f5000000           jmp 0x4e952b
// 004e9436  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e9439  33c0                 xor eax, eax
// 004e943b  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e943e  e9e8000000           jmp 0x4e952b
// 004e9443  bb01000000           mov ebx, 1
// 004e9448  8ad3                 mov dl, bl
// 004e944a  8d9b00000000         lea ebx, [ebx]
// 004e9450  84d2                 test dl, dl
// 004e9452  7408                 je 0x4e945c
// 004e9454  3b38                 cmp edi, dword ptr [eax]
// 004e9456  7504                 jne 0x4e945c
// 004e9458  b201                 mov dl, 1
// 004e945a  eb02                 jmp 0x4e945e
// 004e945c  32d2                 xor dl, dl
// 004e945e  3b38                 cmp edi, dword ptr [eax]
// 004e9460  7509                 jne 0x4e946b
// 004e9462  397804               cmp dword ptr [eax + 4], edi
// 004e9465  0f8489000000         je 0x4e94f4
// 004e946b  8b4018               mov eax, dword ptr [eax + 0x18]
// 004e946e  43                   inc ebx
// 004e946f  85c0                 test eax, eax
// 004e9471  75dd                 jne 0x4e9450
// 004e9473  84d2                 test dl, dl
// 004e9475  0f94c0               sete al
// 004e9478  33d2                 xor edx, edx
// 004e947a  83fb05               cmp ebx, 5
// 004e947d  0f9fc2               setg dl
// 004e9480  85c2                 test edx, eax
// 004e9482  741a                 je 0x4e949e
// 004e9484  8b4604               mov eax, dword ptr [esi + 4]
// 004e9487  8d0480               lea eax, [eax + eax*4]
// 004e948a  03c0                 add eax, eax
// 004e948c  03c0                 add eax, eax
// 004e948e  3bc8                 cmp ecx, eax
// 004e9490  7d0c                 jge 0x4e949e
// 004e9492  8d4c0901             lea ecx, [ecx + ecx + 1]
// 004e9496  51                   push ecx
// 004e9497  8bce                 mov ecx, esi
// 004e9499  e872c9ffff           call 0x4e5e10
// 004e949e  33d2                 xor edx, edx
// 004e94a0  8bc7                 mov eax, edi
// 004e94a2  f7760c               div dword ptr [esi + 0xc]
// 004e94a5  6a1c                 push 0x1c
// 004e94a7  8bda                 mov ebx, edx
// 004e94a9  e882f00100           call 0x508530
// 004e94ae  8be8                 mov ebp, eax
// 004e94b0  83c404               add esp, 4
// 004e94b3  896c2410             mov dword ptr [esp + 0x10], ebp
// 004e94b7  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004e94bf  85ed                 test ebp, ebp
// 004e94c1  7460                 je 0x4e9523
// 004e94c3  8b5608               mov edx, dword ptr [esi + 8]
// 004e94c6  8b049a               mov eax, dword ptr [edx + ebx*4]
// 004e94c9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e94cd  50                   push eax
// 004e94ce  57                   push edi
// 004e94cf  83ec10               sub esp, 0x10
// 004e94d2  8bcc                 mov ecx, esp
// 004e94d4  8964242c             mov dword ptr [esp + 0x2c], esp
// 004e94d8  52                   push edx
// 004e94d9  c7010c6c8200         mov dword ptr [ecx], 0x826c0c
// 004e94df  e89ce3ffff           call 0x4e7880
// 004e94e4  8b442440             mov eax, dword ptr [esp + 0x40]
// 004e94e8  8b08                 mov ecx, dword ptr [eax]
// 004e94ea  51                   push ecx
// 004e94eb  8bcd                 mov ecx, ebp
// 004e94ed  e84ef4ffff           call 0x4e8940
// 004e94f2  eb31                 jmp 0x4e9525
// 004e94f4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004e94f8  8d7008               lea esi, [eax + 8]
// 004e94fb  3bf7                 cmp esi, edi
// 004e94fd  742f                 je 0x4e952e
// 004e94ff  8bce                 mov ecx, esi
// 004e9501  e82ae9feff           call 0x4d7e30
// 004e9506  57                   push edi
// 004e9507  8bce                 mov ecx, esi
// 004e9509  e872e3ffff           call 0x4e7880
// 004e950e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e9512  64890d00000000       mov dword ptr fs:[0], ecx
// 004e9519  5f                   pop edi
// 004e951a  5e                   pop esi
// 004e951b  5d                   pop ebp
// 004e951c  5b                   pop ebx
// 004e951d  83c414               add esp, 0x14
// 004e9520  c20800               ret 8
// 004e9523  33c0                 xor eax, eax
// 004e9525  8b5608               mov edx, dword ptr [esi + 8]
// 004e9528  89049a               mov dword ptr [edx + ebx*4], eax
// 004e952b  ff4604               inc dword ptr [esi + 4]
// 004e952e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e9532  5f                   pop edi
// 004e9533  5e                   pop esi
// 004e9534  5d                   pop ebp
// 004e9535  64890d00000000       mov dword ptr fs:[0], ecx
// 004e953c  5b                   pop ebx
// 004e953d  83c414               add esp, 0x14
// 004e9540  c20800               ret 8

extern void *valueTable;
void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Value {
    void *table;
    unsigned int data[3];

    Value(const Value &);
    ~Value();
    void copy(const Value &);
    void clear();
};

inline Value::Value(const Value &other) : table(&valueTable)
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

struct S {
    unsigned int reserved;
    int count;
    Node **buckets;
    unsigned int bucketCount;

    void resize(unsigned int);
    void f(const unsigned int &, const Value &);
};

void S::f(const unsigned int &key, const Value &value)
{
    unsigned int hash = key;
    unsigned int index = hash % bucketCount;
    Node *node = buckets[index];

    if (!node) {
        buckets[index] = new Node(key, value, hash, 0);
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

    if ((!sameHash & (length > 5)) &&
        (int)bucketCount < count * 20) {
        resize(bucketCount * 2 + 1);
    }

    index = hash % bucketCount;
    buckets[index] = new Node(key, value, hash, buckets[index]);
    ++count;
}
