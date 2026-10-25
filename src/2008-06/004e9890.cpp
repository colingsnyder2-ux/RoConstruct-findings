// from server: 100% by king_originala
// roc 2008-06 004e9890  unit: RBX::ViewNew::Texture  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e9890
//
// 004e9890  6aff                 push -1
// 004e9892  64a100000000         mov eax, dword ptr fs:[0]
// 004e9898  68b6a77c00           push 0x7ca7b6
// 004e989d  50                   push eax
// 004e989e  64892500000000       mov dword ptr fs:[0], esp
// 004e98a5  83ec08               sub esp, 8
// 004e98a8  53                   push ebx
// 004e98a9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004e98ad  55                   push ebp
// 004e98ae  56                   push esi
// 004e98af  57                   push edi
// 004e98b0  8b3b                 mov edi, dword ptr [ebx]
// 004e98b2  8bf1                 mov esi, ecx
// 004e98b4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e98b7  33d2                 xor edx, edx
// 004e98b9  8bc7                 mov eax, edi
// 004e98bb  f7f1                 div ecx
// 004e98bd  8b4608               mov eax, dword ptr [esi + 8]
// 004e98c0  8bea                 mov ebp, edx
// 004e98c2  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 004e98c5  85c0                 test eax, eax
// 004e98c7  755a                 jne 0x4e9923
// 004e98c9  6a1c                 push 0x1c
// 004e98cb  e860ec0100           call 0x508530
// 004e98d0  83c404               add esp, 4
// 004e98d3  89442428             mov dword ptr [esp + 0x28], eax
// 004e98d7  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004e98df  85c0                 test eax, eax
// 004e98e1  7433                 je 0x4e9916
// 004e98e3  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e98e7  6a00                 push 0
// 004e98e9  57                   push edi
// 004e98ea  83ec10               sub esp, 0x10
// 004e98ed  8bcc                 mov ecx, esp
// 004e98ef  89642428             mov dword ptr [esp + 0x28], esp
// 004e98f3  52                   push edx
// 004e98f4  c701146c8200         mov dword ptr [ecx], 0x826c14
// 004e98fa  e881dfffff           call 0x4e7880
// 004e98ff  8b03                 mov eax, dword ptr [ebx]
// 004e9901  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004e9905  50                   push eax
// 004e9906  e875f2ffff           call 0x4e8b80
// 004e990b  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e990e  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e9911  e9f5000000           jmp 0x4e9a0b
// 004e9916  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e9919  33c0                 xor eax, eax
// 004e991b  8904a9               mov dword ptr [ecx + ebp*4], eax
// 004e991e  e9e8000000           jmp 0x4e9a0b
// 004e9923  bb01000000           mov ebx, 1
// 004e9928  8ad3                 mov dl, bl
// 004e992a  8d9b00000000         lea ebx, [ebx]
// 004e9930  84d2                 test dl, dl
// 004e9932  7408                 je 0x4e993c
// 004e9934  3b38                 cmp edi, dword ptr [eax]
// 004e9936  7504                 jne 0x4e993c
// 004e9938  b201                 mov dl, 1
// 004e993a  eb02                 jmp 0x4e993e
// 004e993c  32d2                 xor dl, dl
// 004e993e  3b38                 cmp edi, dword ptr [eax]
// 004e9940  7509                 jne 0x4e994b
// 004e9942  397804               cmp dword ptr [eax + 4], edi
// 004e9945  0f8489000000         je 0x4e99d4
// 004e994b  8b4018               mov eax, dword ptr [eax + 0x18]
// 004e994e  43                   inc ebx
// 004e994f  85c0                 test eax, eax
// 004e9951  75dd                 jne 0x4e9930
// 004e9953  84d2                 test dl, dl
// 004e9955  0f94c0               sete al
// 004e9958  33d2                 xor edx, edx
// 004e995a  83fb05               cmp ebx, 5
// 004e995d  0f9fc2               setg dl
// 004e9960  85c2                 test edx, eax
// 004e9962  741a                 je 0x4e997e
// 004e9964  8b4604               mov eax, dword ptr [esi + 4]
// 004e9967  8d0480               lea eax, [eax + eax*4]
// 004e996a  03c0                 add eax, eax
// 004e996c  03c0                 add eax, eax
// 004e996e  3bc8                 cmp ecx, eax
// 004e9970  7d0c                 jge 0x4e997e
// 004e9972  8d4c0901             lea ecx, [ecx + ecx + 1]
// 004e9976  51                   push ecx
// 004e9977  8bce                 mov ecx, esi
// 004e9979  e892c4ffff           call 0x4e5e10
// 004e997e  33d2                 xor edx, edx
// 004e9980  8bc7                 mov eax, edi
// 004e9982  f7760c               div dword ptr [esi + 0xc]
// 004e9985  6a1c                 push 0x1c
// 004e9987  8bda                 mov ebx, edx
// 004e9989  e8a2eb0100           call 0x508530
// 004e998e  8be8                 mov ebp, eax
// 004e9990  83c404               add esp, 4
// 004e9993  896c2410             mov dword ptr [esp + 0x10], ebp
// 004e9997  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004e999f  85ed                 test ebp, ebp
// 004e99a1  7460                 je 0x4e9a03
// 004e99a3  8b5608               mov edx, dword ptr [esi + 8]
// 004e99a6  8b049a               mov eax, dword ptr [edx + ebx*4]
// 004e99a9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e99ad  50                   push eax
// 004e99ae  57                   push edi
// 004e99af  83ec10               sub esp, 0x10
// 004e99b2  8bcc                 mov ecx, esp
// 004e99b4  8964242c             mov dword ptr [esp + 0x2c], esp
// 004e99b8  52                   push edx
// 004e99b9  c701146c8200         mov dword ptr [ecx], 0x826c14
// 004e99bf  e8bcdeffff           call 0x4e7880
// 004e99c4  8b442440             mov eax, dword ptr [esp + 0x40]
// 004e99c8  8b08                 mov ecx, dword ptr [eax]
// 004e99ca  51                   push ecx
// 004e99cb  8bcd                 mov ecx, ebp
// 004e99cd  e8aef1ffff           call 0x4e8b80
// 004e99d2  eb31                 jmp 0x4e9a05
// 004e99d4  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004e99d8  8d7008               lea esi, [eax + 8]
// 004e99db  3bf7                 cmp esi, edi
// 004e99dd  742f                 je 0x4e9a0e
// 004e99df  8bce                 mov ecx, esi
// 004e99e1  e84ae4feff           call 0x4d7e30
// 004e99e6  57                   push edi
// 004e99e7  8bce                 mov ecx, esi
// 004e99e9  e892deffff           call 0x4e7880
// 004e99ee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e99f2  64890d00000000       mov dword ptr fs:[0], ecx
// 004e99f9  5f                   pop edi
// 004e99fa  5e                   pop esi
// 004e99fb  5d                   pop ebp
// 004e99fc  5b                   pop ebx
// 004e99fd  83c414               add esp, 0x14
// 004e9a00  c20800               ret 8
// 004e9a03  33c0                 xor eax, eax
// 004e9a05  8b5608               mov edx, dword ptr [esi + 8]
// 004e9a08  89049a               mov dword ptr [edx + ebx*4], eax
// 004e9a0b  ff4604               inc dword ptr [esi + 4]
// 004e9a0e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e9a12  5f                   pop edi
// 004e9a13  5e                   pop esi
// 004e9a14  5d                   pop ebp
// 004e9a15  64890d00000000       mov dword ptr fs:[0], ecx
// 004e9a1c  5b                   pop ebx
// 004e9a1d  83c414               add esp, 0x14
// 004e9a20  c20800               ret 8

typedef unsigned int UInt;

extern void *valueTable;
void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Value {
    void *table;
    unsigned int data[3];

    Value(const Value &other) : table(&valueTable) {
        copy(&other);
    }

    ~Value();
    void __thiscall copy(const Value *);
    void __thiscall release();
};

struct Node {
    UInt key;
    UInt hash;
    Value value;
    Node *next;

    Node(UInt, Value, UInt, Node *);
};

struct S {
    int unused;
    int count;
    Node **buckets;
    int bucketCount;

    void __thiscall resize(int);
    void __thiscall f(const UInt &, const Value &);
};

void S::f(const UInt &key, const Value &value)
{
    UInt hash = key;
    UInt bucket = hash % bucketCount;
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
            Value *destination = &node->value;
            if (destination != &value) {
                destination->release();
                destination->copy(&value);
            }
            return;
        }

        node = node->next;
        ++length;
    } while (node);

    if ((!sameHash) & (length > 5)) {
        if (bucketCount < count * 20)
            resize(bucketCount * 2 + 1);
    }

    bucket = hash % bucketCount;
    buckets[bucket] = new Node(key, value, hash, buckets[bucket]);
    ++count;
}
