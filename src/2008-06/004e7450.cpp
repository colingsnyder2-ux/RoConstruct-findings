// from server: 100% by king_originala
// roc 2008-06 004e7450  unit: RBX::ViewNew::Texture  size: 479 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7450
//
// 004e7450  6aff                 push -1
// 004e7452  6876a57c00           push 0x7ca576
// 004e7457  64a100000000         mov eax, dword ptr fs:[0]
// 004e745d  50                   push eax
// 004e745e  64892500000000       mov dword ptr fs:[0], esp
// 004e7465  83ec08               sub esp, 8
// 004e7468  53                   push ebx
// 004e7469  55                   push ebp
// 004e746a  56                   push esi
// 004e746b  8b742424             mov esi, dword ptr [esp + 0x24]
// 004e746f  57                   push edi
// 004e7470  8bf9                 mov edi, ecx
// 004e7472  8bce                 mov ecx, esi
// 004e7474  e8270f0300           call 0x5183a0
// 004e7479  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004e747c  33d2                 xor edx, edx
// 004e747e  8be8                 mov ebp, eax
// 004e7480  f7f1                 div ecx
// 004e7482  8b4708               mov eax, dword ptr [edi + 8]
// 004e7485  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 004e7488  89542428             mov dword ptr [esp + 0x28], edx
// 004e748c  85c9                 test ecx, ecx
// 004e748e  7567                 jne 0x4e74f7
// 004e7490  6a24                 push 0x24
// 004e7492  e899100200           call 0x508530
// 004e7497  8bd8                 mov ebx, eax
// 004e7499  83c404               add esp, 4
// 004e749c  895c2410             mov dword ptr [esp + 0x10], ebx
// 004e74a0  33c0                 xor eax, eax
// 004e74a2  89442420             mov dword ptr [esp + 0x20], eax
// 004e74a6  3bd8                 cmp ebx, eax
// 004e74a8  0f845f010000         je 0x4e760d
// 004e74ae  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004e74b2  50                   push eax
// 004e74b3  55                   push ebp
// 004e74b4  83ec10               sub esp, 0x10
// 004e74b7  8964242c             mov dword ptr [esp + 0x2c], esp
// 004e74bb  8bc4                 mov eax, esp
// 004e74bd  68702a5000           push 0x502a70
// 004e74c2  6820084f00           push 0x4f0820
// 004e74c7  6a04                 push 4
// 004e74c9  6a04                 push 4
// 004e74cb  51                   push ecx
// 004e74cc  50                   push eax
// 004e74cd  e8e4a61b00           call 0x6a1bb6
// 004e74d2  d906                 fld dword ptr [esi]
// 004e74d4  83ec0c               sub esp, 0xc
// 004e74d7  8bc4                 mov eax, esp
// 004e74d9  d918                 fstp dword ptr [eax]
// 004e74db  8bcb                 mov ecx, ebx
// 004e74dd  d94604               fld dword ptr [esi + 4]
// 004e74e0  89642450             mov dword ptr [esp + 0x50], esp
// 004e74e4  d95804               fstp dword ptr [eax + 4]
// 004e74e7  d94608               fld dword ptr [esi + 8]
// 004e74ea  d95808               fstp dword ptr [eax + 8]
// 004e74ed  e85ef8ffff           call 0x4e6d50
// 004e74f2  e916010000           jmp 0x4e760d
// 004e74f7  bb01000000           mov ebx, 1
// 004e74fc  8ad3                 mov dl, bl
// 004e74fe  8bff                 mov edi, edi
// 004e7500  84d2                 test dl, dl
// 004e7502  7408                 je 0x4e750c
// 004e7504  3b29                 cmp ebp, dword ptr [ecx]
// 004e7506  7504                 jne 0x4e750c
// 004e7508  b201                 mov dl, 1
// 004e750a  eb02                 jmp 0x4e750e
// 004e750c  32d2                 xor dl, dl
// 004e750e  3b29                 cmp ebp, dword ptr [ecx]
// 004e7510  752a                 jne 0x4e753c
// 004e7512  d906                 fld dword ptr [esi]
// 004e7514  d85904               fcomp dword ptr [ecx + 4]
// 004e7517  dfe0                 fnstsw ax
// 004e7519  f6c444               test ah, 0x44
// 004e751c  7a1e                 jp 0x4e753c
// 004e751e  d94604               fld dword ptr [esi + 4]
// 004e7521  d85908               fcomp dword ptr [ecx + 8]
// 004e7524  dfe0                 fnstsw ax
// 004e7526  f6c444               test ah, 0x44
// 004e7529  7a11                 jp 0x4e753c
// 004e752b  d94608               fld dword ptr [esi + 8]
// 004e752e  d8590c               fcomp dword ptr [ecx + 0xc]
// 004e7531  dfe0                 fnstsw ax
// 004e7533  f6c444               test ah, 0x44
// 004e7536  0f8bad000000         jnp 0x4e75e9
// 004e753c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004e753f  43                   inc ebx
// 004e7540  85c9                 test ecx, ecx
// 004e7542  75bc                 jne 0x4e7500
// 004e7544  33c0                 xor eax, eax
// 004e7546  84d2                 test dl, dl
// 004e7548  0f94c0               sete al
// 004e754b  83fb05               cmp ebx, 5
// 004e754e  0f9fc1               setg cl
// 004e7551  85c1                 test ecx, eax
// 004e7553  741d                 je 0x4e7572
// 004e7555  8b4704               mov eax, dword ptr [edi + 4]
// 004e7558  8d1480               lea edx, [eax + eax*4]
// 004e755b  8b470c               mov eax, dword ptr [edi + 0xc]
// 004e755e  03d2                 add edx, edx
// 004e7560  03d2                 add edx, edx
// 004e7562  3bc2                 cmp eax, edx
// 004e7564  7d0c                 jge 0x4e7572
// 004e7566  8d440001             lea eax, [eax + eax + 1]
// 004e756a  50                   push eax
// 004e756b  8bcf                 mov ecx, edi
// 004e756d  e81ee8ffff           call 0x4e5d90
// 004e7572  33d2                 xor edx, edx
// 004e7574  8bc5                 mov eax, ebp
// 004e7576  f7770c               div dword ptr [edi + 0xc]
// 004e7579  6a24                 push 0x24
// 004e757b  8954242c             mov dword ptr [esp + 0x2c], edx
// 004e757f  e8ac0f0200           call 0x508530
// 004e7584  8bd8                 mov ebx, eax
// 004e7586  83c404               add esp, 4
// 004e7589  895c2414             mov dword ptr [esp + 0x14], ebx
// 004e758d  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004e7595  85db                 test ebx, ebx
// 004e7597  7472                 je 0x4e760b
// 004e7599  8b4f08               mov ecx, dword ptr [edi + 8]
// 004e759c  8b542428             mov edx, dword ptr [esp + 0x28]
// 004e75a0  8b0491               mov eax, dword ptr [ecx + edx*4]
// 004e75a3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004e75a7  50                   push eax
// 004e75a8  55                   push ebp
// 004e75a9  83ec10               sub esp, 0x10
// 004e75ac  89642428             mov dword ptr [esp + 0x28], esp
// 004e75b0  8bc4                 mov eax, esp
// 004e75b2  68702a5000           push 0x502a70
// 004e75b7  6820084f00           push 0x4f0820
// 004e75bc  6a04                 push 4
// 004e75be  6a04                 push 4
// 004e75c0  51                   push ecx
// 004e75c1  50                   push eax
// 004e75c2  e8efa51b00           call 0x6a1bb6
// 004e75c7  d906                 fld dword ptr [esi]
// 004e75c9  83ec0c               sub esp, 0xc
// 004e75cc  8bc4                 mov eax, esp
// 004e75ce  d918                 fstp dword ptr [eax]
// 004e75d0  8bcb                 mov ecx, ebx
// 004e75d2  d94604               fld dword ptr [esi + 4]
// 004e75d5  89642450             mov dword ptr [esp + 0x50], esp
// 004e75d9  d95804               fstp dword ptr [eax + 4]
// 004e75dc  d94608               fld dword ptr [esi + 8]
// 004e75df  d95808               fstp dword ptr [eax + 8]
// 004e75e2  e869f7ffff           call 0x4e6d50
// 004e75e7  eb24                 jmp 0x4e760d
// 004e75e9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e75ed  52                   push edx
// 004e75ee  83c110               add ecx, 0x10
// 004e75f1  e85aeaffff           call 0x4e6050
// 004e75f6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e75fa  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7601  5f                   pop edi
// 004e7602  5e                   pop esi
// 004e7603  5d                   pop ebp
// 004e7604  5b                   pop ebx
// 004e7605  83c414               add esp, 0x14
// 004e7608  c20800               ret 8
// 004e760b  33c0                 xor eax, eax
// 004e760d  8b5708               mov edx, dword ptr [edi + 8]
// 004e7610  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004e7614  89048a               mov dword ptr [edx + ecx*4], eax
// 004e7617  ff4704               inc dword ptr [edi + 4]
// 004e761a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e761e  5f                   pop edi
// 004e761f  5e                   pop esi
// 004e7620  5d                   pop ebp
// 004e7621  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7628  5b                   pop ebx
// 004e7629  83c414               add esp, 0x14
// 004e762c  c20800               ret 8

#pragma float_control(precise, off)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Vector {
    float x, y, z;
    Vector(const Vector&);
    unsigned int hash() const;
};

inline Vector::Vector(const Vector& v) : x(v.x), y(v.y), z(v.z) {}

struct Element {
    void* pointer;
    Element(const Element&);
    ~Element();
};

struct Value {
    Element elements[4];
    void assign(const Value&);
};

struct Node {
    unsigned int hash;
    Vector key;
    Value value;
    Node* next;

    Node(Vector, Value, unsigned int, Node*);
};

struct Texture {
    int unused;
    int count;
    Node** buckets;
    int capacity;

    void insert(const Vector&, const Value&);
    void resize(int);
};

void Texture::insert(const Vector& key, const Value& value)
{
    unsigned int hash = key.hash();
    unsigned int index = hash % capacity;
    Node* node = buckets[index];

    if (!node) {
        buckets[index] = new Node(key, value, hash, 0);
        ++count;
    } else {
        int length = 1;
        bool sameHash = true;

        do {
            sameHash = sameHash && hash == node->hash;

            if (hash == node->hash &&
                node->key.x == key.x &&
                node->key.y == key.y &&
                node->key.z == key.z) {
                node->value.assign(value);
                return;
            }

            node = node->next;
            ++length;
        } while (node);

        if ((!sameHash & (length > 5)) && capacity < count * 20)
            resize(capacity * 2 + 1);

        index = hash % capacity;
        buckets[index] = new Node(key, value, hash, buckets[index]);
        ++count;
    }
}
