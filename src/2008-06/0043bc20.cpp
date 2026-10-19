// from server: 25% by colin
// from server: 23% by colin
// roc 2008-06 0043bc20  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 831 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043bc20
//
// 0043bc20  6aff                 push -1
// 0043bc22  680b067c00           push 0x7c060b
// 0043bc27  64a100000000         mov eax, dword ptr fs:[0]
// 0043bc2d  50                   push eax
// 0043bc2e  64892500000000       mov dword ptr fs:[0], esp
// 0043bc35  81ec8c000000         sub esp, 0x8c
// 0043bc3b  53                   push ebx
// 0043bc3c  55                   push ebp
// 0043bc3d  56                   push esi
// 0043bc3e  8bd9                 mov ebx, ecx
// 0043bc40  57                   push edi
// 0043bc41  8d4c2448             lea ecx, [esp + 0x48]
// 0043bc45  895c2414             mov dword ptr [esp + 0x14], ebx
// 0043bc49  ff1560248000         call dword ptr [0x802460]
// 0043bc4f  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0043bc56  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0043bc59  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043bc5c  8b10                 mov edx, dword ptr [eax]
// 0043bc5e  c78424a400000000000000 mov dword ptr [esp + 0xa4], 0
// 0043bc69  c644241300           mov byte ptr [esp + 0x13], 0
// 0043bc6e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0043bc72  89542428             mov dword ptr [esp + 0x28], edx
// 0043bc76  3b7314               cmp esi, dword ptr [ebx + 0x14]
// 0043bc79  7606                 jbe 0x43bc81
// 0043bc7b  ff1590288000         call dword ptr [0x802890]
// 0043bc81  8b6b04               mov ebp, dword ptr [ebx + 4]
// 0043bc84  8bfe                 mov edi, esi
// 0043bc86  8b7314               mov esi, dword ptr [ebx + 0x14]
// 0043bc89  896c2420             mov dword ptr [esp + 0x20], ebp
// 0043bc8d  897c2424             mov dword ptr [esp + 0x24], edi
// 0043bc91  8974241c             mov dword ptr [esp + 0x1c], esi
// 0043bc95  397310               cmp dword ptr [ebx + 0x10], esi
// 0043bc98  7606                 jbe 0x43bca0
// 0043bc9a  ff1590288000         call dword ptr [0x802890]
// 0043bca0  8b4304               mov eax, dword ptr [ebx + 4]
// 0043bca3  89442440             mov dword ptr [esp + 0x40], eax
// 0043bca7  85ed                 test ebp, ebp
// 0043bca9  7406                 je 0x43bcb1
// 0043bcab  3b6c2440             cmp ebp, dword ptr [esp + 0x40]
// 0043bcaf  7406                 je 0x43bcb7
// 0043bcb1  ff1590288000         call dword ptr [0x802890]
// 0043bcb7  3bfe                 cmp edi, esi
// 0043bcb9  0f845b020000         je 0x43bf1a
// 0043bcbf  85ed                 test ebp, ebp
// 0043bcc1  0f8535010000         jne 0x43bdfc
// 0043bcc7  ff1590288000         call dword ptr [0x802890]
// 0043bccd  33c0                 xor eax, eax
// 0043bccf  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0043bcd2  7206                 jb 0x43bcda
// 0043bcd4  ff1590288000         call dword ptr [0x802890]
// 0043bcda  8b0f                 mov ecx, dword ptr [edi]
// 0043bcdc  8d542418             lea edx, [esp + 0x18]
// 0043bce0  52                   push edx
// 0043bce1  8d442434             lea eax, [esp + 0x34]
// 0043bce5  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0043bce9  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0043bcf0  50                   push eax
// 0043bcf1  e82ae6ffff           call 0x43a320
// 0043bcf6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0043bcfa  85db                 test ebx, ebx
// 0043bcfc  7406                 je 0x43bd04
// 0043bcfe  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 0043bd02  7406                 je 0x43bd0a
// 0043bd04  ff1590288000         call dword ptr [0x802890]
// 0043bd0a  8b742434             mov esi, dword ptr [esp + 0x34]
// 0043bd0e  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0043bd12  0f84a9010000         je 0x43bec1
// 0043bd18  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0043bd1e  85db                 test ebx, ebx
// 0043bd20  0f85de000000         jne 0x43be04
// 0043bd26  ffd5                 call ebp
// 0043bd28  33c0                 xor eax, eax
// 0043bd2a  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043bd2d  7502                 jne 0x43bd31
// 0043bd2f  ffd5                 call ebp
// 0043bd31  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0043bd34  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0043bd37  7602                 jbe 0x43bd3b
// 0043bd39  ffd5                 call ebp
// 0043bd3b  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0043bd3e  85db                 test ebx, ebx
// 0043bd40  0f85c5000000         jne 0x43be0b
// 0043bd46  ff1590288000         call dword ptr [0x802890]
// 0043bd4c  3b7318               cmp esi, dword ptr [ebx + 0x18]
// 0043bd4f  7506                 jne 0x43bd57
// 0043bd51  ff1590288000         call dword ptr [0x802890]
// 0043bd57  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 0043bd5a  895c2418             mov dword ptr [esp + 0x18], ebx
// 0043bd5e  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0043bd61  7606                 jbe 0x43bd69
// 0043bd63  ff1590288000         call dword ptr [0x802890]
// 0043bd69  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043bd6c  894c2438             mov dword ptr [esp + 0x38], ecx
// 0043bd70  85ed                 test ebp, ebp
// 0043bd72  7406                 je 0x43bd7a
// 0043bd74  3b6c2438             cmp ebp, dword ptr [esp + 0x38]
// 0043bd78  7406                 je 0x43bd80
// 0043bd7a  ff1590288000         call dword ptr [0x802890]
// 0043bd80  3bfb                 cmp edi, ebx
// 0043bd82  0f8431010000         je 0x43beb9
// 0043bd88  807c241300           cmp byte ptr [esp + 0x13], 0
// 0043bd8d  0f8584000000         jne 0x43be17
// 0043bd93  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043bd99  85ed                 test ebp, ebp
// 0043bd9b  7575                 jne 0x43be12
// 0043bd9d  ffd3                 call ebx
// 0043bd9f  33c0                 xor eax, eax
// 0043bda1  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0043bda4  7202                 jb 0x43bda8
// 0043bda6  ffd3                 call ebx
// 0043bda8  8b07                 mov eax, dword ptr [edi]
// 0043bdaa  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043bdae  50                   push eax
// 0043bdaf  8d542468             lea edx, [esp + 0x68]
// 0043bdb3  81c6f4feffff         add esi, 0xfffffef4
// 0043bdb9  52                   push edx
// 0043bdba  8bce                 mov ecx, esi
// 0043bdbc  e86ffbffff           call 0x43b930
// 0043bdc1  50                   push eax
// 0043bdc2  8d4c244c             lea ecx, [esp + 0x4c]
// 0043bdc6  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 0043bdce  ff150c248000         call dword ptr [0x80240c]
// 0043bdd4  8d4c2464             lea ecx, [esp + 0x64]
// 0043bdd8  c68424a400000000     mov byte ptr [esp + 0xa4], 0
// 0043bde0  ff1568248000         call dword ptr [0x802468]
// 0043bde6  8b06                 mov eax, dword ptr [esi]
// 0043bde8  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 0043bdee  8d4c2448             lea ecx, [esp + 0x48]
// 0043bdf2  51                   push ecx
// 0043bdf3  8bce                 mov ecx, esi
// 0043bdf5  ffd2                 call edx
// 0043bdf7  e990000000           jmp 0x43be8c
// 0043bdfc  8b4500               mov eax, dword ptr [ebp]
// 0043bdff  e9cbfeffff           jmp 0x43bccf
// 0043be04  8b03                 mov eax, dword ptr [ebx]
// 0043be06  e91fffffff           jmp 0x43bd2a
// 0043be0b  8b1b                 mov ebx, dword ptr [ebx]
// 0043be0d  e93affffff           jmp 0x43bd4c
// 0043be12  8b4500               mov eax, dword ptr [ebp]
// 0043be15  eb8a                 jmp 0x43bda1
// 0043be17  85ed                 test ebp, ebp
// 0043be19  0f858d000000         jne 0x43beac
// 0043be1f  ff1590288000         call dword ptr [0x802890]
// 0043be25  33c0                 xor eax, eax
// 0043be27  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0043be2a  7206                 jb 0x43be32
// 0043be2c  ff1590288000         call dword ptr [0x802890]
// 0043be32  8b07                 mov eax, dword ptr [edi]
// 0043be34  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043be38  50                   push eax
// 0043be39  8d842484000000       lea eax, [esp + 0x84]
// 0043be40  81c6f4feffff         add esi, 0xfffffef4
// 0043be46  50                   push eax
// 0043be47  8bce                 mov ecx, esi
// 0043be49  e8e2faffff           call 0x43b930
// 0043be4e  8b16                 mov edx, dword ptr [esi]
// 0043be50  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 0043be56  50                   push eax
// 0043be57  8d44244c             lea eax, [esp + 0x4c]
// 0043be5b  50                   push eax
// 0043be5c  8bce                 mov ecx, esi
// 0043be5e  c68424ac00000002     mov byte ptr [esp + 0xac], 2
// 0043be66  ffd2                 call edx
// 0043be68  84c0                 test al, al
// 0043be6a  8d8c2480000000       lea ecx, [esp + 0x80]
// 0043be71  0f94c3               sete bl
// 0043be74  c68424a400000000     mov byte ptr [esp + 0xa4], 0
// 0043be7c  ff1568248000         call dword ptr [0x802468]
// 0043be82  84db                 test bl, bl
// 0043be84  756b                 jne 0x43bef1
// 0043be86  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043be8c  c644241301           mov byte ptr [esp + 0x13], 1
// 0043be91  85ed                 test ebp, ebp
// 0043be93  751f                 jne 0x43beb4
// 0043be95  ffd3                 call ebx
// 0043be97  33c0                 xor eax, eax
// 0043be99  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0043be9c  7202                 jb 0x43bea0
// 0043be9e  ffd3                 call ebx
// 0043bea0  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0043bea4  83c708               add edi, 8
// 0043bea7  e9c4feffff           jmp 0x43bd70
// 0043beac  8b4500               mov eax, dword ptr [ebp]
// 0043beaf  e973ffffff           jmp 0x43be27
// 0043beb4  8b4500               mov eax, dword ptr [ebp]
// 0043beb7  ebe0                 jmp 0x43be99
// 0043beb9  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0043bebd  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0043bec1  85ed                 test ebp, ebp
// 0043bec3  7527                 jne 0x43beec
// 0043bec5  ff1590288000         call dword ptr [0x802890]
// 0043becb  33c0                 xor eax, eax
// 0043becd  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0043bed0  7206                 jb 0x43bed8
// 0043bed2  ff1590288000         call dword ptr [0x802890]
// 0043bed8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043bedc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0043bee0  83c704               add edi, 4
// 0043bee3  897c2424             mov dword ptr [esp + 0x24], edi
// 0043bee7  e9bbfdffff           jmp 0x43bca7
// 0043beec  8b4500               mov eax, dword ptr [ebp]
// 0043beef  ebdc                 jmp 0x43becd
// 0043bef1  51                   push ecx
// 0043bef2  8bcc                 mov ecx, esp
// 0043bef4  89642420             mov dword ptr [esp + 0x20], esp
// 0043bef8  6816b78000           push 0x80b716
// 0043befd  ff15103f8000         call dword ptr [0x803f10]
// 0043bf03  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043bf07  81c6f4feffff         add esi, 0xfffffef4
// 0043bf0d  8bce                 mov ecx, esi
// 0043bf0f  e8dc5a2d00           call 0x7119f0
// 0043bf14  6a00                 push 0
// 0043bf16  8bce                 mov ecx, esi
// 0043bf18  eb10                 jmp 0x43bf2a
// 0043bf1a  33c0                 xor eax, eax
// 0043bf1c  38442413             cmp byte ptr [esp + 0x13], al
// 0043bf20  8d8bf4feffff         lea ecx, [ebx - 0x10c]
// 0043bf26  0f94c0               sete al
// 0043bf29  50                   push eax
// 0043bf2a  e8a1512d00           call 0x7110d0
// 0043bf2f  8d4c2448             lea ecx, [esp + 0x48]
// 0043bf33  c78424a4000000ffffffff mov dword ptr [esp + 0xa4], 0xffffffff
// 0043bf3e  ff1568248000         call dword ptr [0x802468]
// 0043bf44  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0043bf4b  5f                   pop edi
// 0043bf4c  5e                   pop esi
// 0043bf4d  5d                   pop ebp
// 0043bf4e  64890d00000000       mov dword ptr fs:[0], ecx
// 0043bf55  5b                   pop ebx
// 0043bf56  81c498000000         add esp, 0x98
// 0043bf5c  c20400               ret 4

struct Result {
    unsigned char data[28];
    ~Result();
};

struct Item {
    unsigned char padding[20];
    Result value;
};

struct LockData {
    void* first;
    void* second;
    int third;
};

struct String {
    char* data;
    int size;
    int capacity;
    String();
    String(const String&);
    String& operator=(const String&);
    __declspec(dllimport) ~String() throw();
};

extern "C" void __stdcall invalid_parameter_noinfo();

struct Node {
    Node* parent;
    Node* left;
    Node* right;
    int color;
    int pad;
    Item* value;
};

struct Tree {
    Node* header;
    int size;
    Node* begin_node;
    Node* end_node;
};

struct Base {
    char pad[0x10c];
    int SetHidden(int);
};

struct S : Base {
    Tree tree;
    void Process(Item* item);
};

void S::Process(Item* item)
{
    String str;
    Node* first = tree.begin_node;
    Node* last = tree.end_node;
    bool flag = false;

    if (first != last) {
        do {
            Item* v = first->value;
            if (flag) {
                String tmp;
                tmp = *(String*)((char*)v + 0x10);
                if (!((Base*)((char*)this - 0x10c))->SetHidden(0)) {
                }
            } else {
                String tmp;
                tmp = *(String*)((char*)v + 0x10);
                ((Base*)((char*)this - 0x10c))->SetHidden(1);
            }
            flag = true;
            first = first->parent;
        } while (first != last);
    }
    ((Base*)((char*)this - 0x10c))->SetHidden(flag ? 0 : 1);
}
