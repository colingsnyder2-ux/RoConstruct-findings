// from server: 100% by king_originala
// roc 2008-06 004e7630  unit: RBX::ViewNew::Texture  size: 477 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7630
//
// 004e7630  6aff                 push -1
// 004e7632  6876a57c00           push 0x7ca576
// 004e7637  64a100000000         mov eax, dword ptr fs:[0]
// 004e763d  50                   push eax
// 004e763e  64892500000000       mov dword ptr fs:[0], esp
// 004e7645  83ec08               sub esp, 8
// 004e7648  53                   push ebx
// 004e7649  55                   push ebp
// 004e764a  56                   push esi
// 004e764b  8b742424             mov esi, dword ptr [esp + 0x24]
// 004e764f  57                   push edi
// 004e7650  8bf9                 mov edi, ecx
// 004e7652  8bce                 mov ecx, esi
// 004e7654  e8470d0300           call 0x5183a0
// 004e7659  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004e765c  33d2                 xor edx, edx
// 004e765e  8be8                 mov ebp, eax
// 004e7660  f7f1                 div ecx
// 004e7662  8b4708               mov eax, dword ptr [edi + 8]
// 004e7665  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 004e7668  89542428             mov dword ptr [esp + 0x28], edx
// 004e766c  85c9                 test ecx, ecx
// 004e766e  7565                 jne 0x4e76d5
// 004e7670  6a18                 push 0x18
// 004e7672  e8b90e0200           call 0x508530
// 004e7677  8bd8                 mov ebx, eax
// 004e7679  83c404               add esp, 4
// 004e767c  895c2410             mov dword ptr [esp + 0x10], ebx
// 004e7680  33c0                 xor eax, eax
// 004e7682  89442420             mov dword ptr [esp + 0x20], eax
// 004e7686  3bd8                 cmp ebx, eax
// 004e7688  0f845d010000         je 0x4e77eb
// 004e768e  50                   push eax
// 004e768f  55                   push ebp
// 004e7690  51                   push ecx
// 004e7691  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004e7695  89642420             mov dword ptr [esp + 0x20], esp
// 004e7699  8bc4                 mov eax, esp
// 004e769b  68702a5000           push 0x502a70
// 004e76a0  6820084f00           push 0x4f0820
// 004e76a5  6a01                 push 1
// 004e76a7  6a04                 push 4
// 004e76a9  51                   push ecx
// 004e76aa  50                   push eax
// 004e76ab  e806a51b00           call 0x6a1bb6
// 004e76b0  d906                 fld dword ptr [esi]
// 004e76b2  83ec0c               sub esp, 0xc
// 004e76b5  8bc4                 mov eax, esp
// 004e76b7  d918                 fstp dword ptr [eax]
// 004e76b9  8bcb                 mov ecx, ebx
// 004e76bb  d94604               fld dword ptr [esi + 4]
// 004e76be  89642444             mov dword ptr [esp + 0x44], esp
// 004e76c2  d95804               fstp dword ptr [eax + 4]
// 004e76c5  d94608               fld dword ptr [esi + 8]
// 004e76c8  d95808               fstp dword ptr [eax + 8]
// 004e76cb  e830f7ffff           call 0x4e6e00
// 004e76d0  e916010000           jmp 0x4e77eb
// 004e76d5  bb01000000           mov ebx, 1
// 004e76da  8ad3                 mov dl, bl
// 004e76dc  8d642400             lea esp, [esp]
// 004e76e0  84d2                 test dl, dl
// 004e76e2  7408                 je 0x4e76ec
// 004e76e4  3b29                 cmp ebp, dword ptr [ecx]
// 004e76e6  7504                 jne 0x4e76ec
// 004e76e8  b201                 mov dl, 1
// 004e76ea  eb02                 jmp 0x4e76ee
// 004e76ec  32d2                 xor dl, dl
// 004e76ee  3b29                 cmp ebp, dword ptr [ecx]
// 004e76f0  752a                 jne 0x4e771c
// 004e76f2  d906                 fld dword ptr [esi]
// 004e76f4  d85904               fcomp dword ptr [ecx + 4]
// 004e76f7  dfe0                 fnstsw ax
// 004e76f9  f6c444               test ah, 0x44
// 004e76fc  7a1e                 jp 0x4e771c
// 004e76fe  d94604               fld dword ptr [esi + 4]
// 004e7701  d85908               fcomp dword ptr [ecx + 8]
// 004e7704  dfe0                 fnstsw ax
// 004e7706  f6c444               test ah, 0x44
// 004e7709  7a11                 jp 0x4e771c
// 004e770b  d94608               fld dword ptr [esi + 8]
// 004e770e  d8590c               fcomp dword ptr [ecx + 0xc]
// 004e7711  dfe0                 fnstsw ax
// 004e7713  f6c444               test ah, 0x44
// 004e7716  0f8bab000000         jnp 0x4e77c7
// 004e771c  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 004e771f  43                   inc ebx
// 004e7720  85c9                 test ecx, ecx
// 004e7722  75bc                 jne 0x4e76e0
// 004e7724  33c0                 xor eax, eax
// 004e7726  84d2                 test dl, dl
// 004e7728  0f94c0               sete al
// 004e772b  83fb05               cmp ebx, 5
// 004e772e  0f9fc1               setg cl
// 004e7731  85c1                 test ecx, eax
// 004e7733  741d                 je 0x4e7752
// 004e7735  8b4704               mov eax, dword ptr [edi + 4]
// 004e7738  8d1480               lea edx, [eax + eax*4]
// 004e773b  8b470c               mov eax, dword ptr [edi + 0xc]
// 004e773e  03d2                 add edx, edx
// 004e7740  03d2                 add edx, edx
// 004e7742  3bc2                 cmp eax, edx
// 004e7744  7d0c                 jge 0x4e7752
// 004e7746  8d440001             lea eax, [eax + eax + 1]
// 004e774a  50                   push eax
// 004e774b  8bcf                 mov ecx, edi
// 004e774d  e83ee7ffff           call 0x4e5e90
// 004e7752  33d2                 xor edx, edx
// 004e7754  8bc5                 mov eax, ebp
// 004e7756  f7770c               div dword ptr [edi + 0xc]
// 004e7759  6a18                 push 0x18
// 004e775b  8954242c             mov dword ptr [esp + 0x2c], edx
// 004e775f  e8cc0d0200           call 0x508530
// 004e7764  8bd8                 mov ebx, eax
// 004e7766  83c404               add esp, 4
// 004e7769  895c2414             mov dword ptr [esp + 0x14], ebx
// 004e776d  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004e7775  85db                 test ebx, ebx
// 004e7777  7470                 je 0x4e77e9
// 004e7779  8b4f08               mov ecx, dword ptr [edi + 8]
// 004e777c  8b542428             mov edx, dword ptr [esp + 0x28]
// 004e7780  8b0491               mov eax, dword ptr [ecx + edx*4]
// 004e7783  50                   push eax
// 004e7784  55                   push ebp
// 004e7785  51                   push ecx
// 004e7786  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004e778a  8964241c             mov dword ptr [esp + 0x1c], esp
// 004e778e  8bc4                 mov eax, esp
// 004e7790  68702a5000           push 0x502a70
// 004e7795  6820084f00           push 0x4f0820
// 004e779a  6a01                 push 1
// 004e779c  6a04                 push 4
// 004e779e  51                   push ecx
// 004e779f  50                   push eax
// 004e77a0  e811a41b00           call 0x6a1bb6
// 004e77a5  d906                 fld dword ptr [esi]
// 004e77a7  83ec0c               sub esp, 0xc
// 004e77aa  8bc4                 mov eax, esp
// 004e77ac  d918                 fstp dword ptr [eax]
// 004e77ae  8bcb                 mov ecx, ebx
// 004e77b0  d94604               fld dword ptr [esi + 4]
// 004e77b3  89642444             mov dword ptr [esp + 0x44], esp
// 004e77b7  d95804               fstp dword ptr [eax + 4]
// 004e77ba  d94608               fld dword ptr [esi + 8]
// 004e77bd  d95808               fstp dword ptr [eax + 8]
// 004e77c0  e83bf6ffff           call 0x4e6e00
// 004e77c5  eb24                 jmp 0x4e77eb
// 004e77c7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e77cb  52                   push edx
// 004e77cc  83c110               add ecx, 0x10
// 004e77cf  e81ce9ffff           call 0x4e60f0
// 004e77d4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e77d8  64890d00000000       mov dword ptr fs:[0], ecx
// 004e77df  5f                   pop edi
// 004e77e0  5e                   pop esi
// 004e77e1  5d                   pop ebp
// 004e77e2  5b                   pop ebx
// 004e77e3  83c414               add esp, 0x14
// 004e77e6  c20800               ret 8
// 004e77e9  33c0                 xor eax, eax
// 004e77eb  8b5708               mov edx, dword ptr [edi + 8]
// 004e77ee  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004e77f2  89048a               mov dword ptr [edx + ecx*4], eax
// 004e77f5  ff4704               inc dword ptr [edi + 4]
// 004e77f8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e77fc  5f                   pop edi
// 004e77fd  5e                   pop esi
// 004e77fe  5d                   pop ebp
// 004e77ff  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7806  5b                   pop ebx
// 004e7807  83c414               add esp, 0x14
// 004e780a  c20800               ret 8

#pragma float_control(precise, off)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Vector {
    float x, y, z;

    Vector(const Vector& v) : x(v.x), y(v.y), z(v.z) {}
    unsigned int hash() const;
};

struct Reference {
    void* object;
    Reference(const Reference&);
    ~Reference();
};

struct Value {
    Reference item[1];
    Value& operator=(const Value&);
};

struct Node {
    unsigned int hash;
    Vector key;
    Value value;
    Node* next;

    Node(Vector, Value, unsigned int, Node*);
};

struct S {
    int unused;
    int count;
    Node** buckets;
    int bucketCount;

    void resize(int);
    void f(const Vector&, const Value&);
};

void S::f(const Vector& key, const Value& value)
{
    unsigned int hash = key.hash();
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
        sameHash = sameHash && hash == node->hash;

        if (hash == node->hash &&
            node->key.x == key.x &&
            node->key.y == key.y &&
            node->key.z == key.z) {
            node->value = value;
            return;
        }

        node = node->next;
        ++length;
    } while (node);

    if (int(!sameHash) & int(length > 5)) {
        if (bucketCount < count * 20)
            resize(bucketCount * 2 + 1);
    }

    bucket = hash % bucketCount;
    buckets[bucket] = new Node(key, value, hash, buckets[bucket]);
    ++count;
}
