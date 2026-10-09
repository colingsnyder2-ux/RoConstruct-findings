// from server: 82% by colin
// roc 2007-08 005b4d50  unit: RBX::Geometry  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4d50
//
// 005b4d50  56                   push esi
// 005b4d51  8b742408             mov esi, dword ptr [esp + 8]
// 005b4d55  85f6                 test esi, esi
// 005b4d57  57                   push edi
// 005b4d58  8bf9                 mov edi, ecx
// 005b4d5a  744d                 je 0x5b4da9
// 005b4d5c  8d642400             lea esp, [esp]
// 005b4d60  8b06                 mov eax, dword ptr [esi]
// 005b4d62  8b500c               mov edx, dword ptr [eax + 0xc]
// 005b4d65  8bce                 mov ecx, esi
// 005b4d67  ffd2                 call edx
// 005b4d69  85c0                 test eax, eax
// 005b4d6b  7513                 jne 0x5b4d80
// 005b4d6d  8b06                 mov eax, dword ptr [esi]
// 005b4d6f  8b5014               mov edx, dword ptr [eax + 0x14]
// 005b4d72  8bce                 mov ecx, esi
// 005b4d74  ffd2                 call edx
// 005b4d76  83f805               cmp eax, 5
// 005b4d79  7435                 je 0x5b4db0
// 005b4d7b  83f806               cmp eax, 6
// 005b4d7e  7430                 je 0x5b4db0
// 005b4d80  3b7e08               cmp edi, dword ptr [esi + 8]
// 005b4d83  7505                 jne 0x5b4d8a
// 005b4d85  8b4610               mov eax, dword ptr [esi + 0x10]
// 005b4d88  eb03                 jmp 0x5b4d8d
// 005b4d8a  8b4614               mov eax, dword ptr [esi + 0x14]
// 005b4d8d  85c0                 test eax, eax
// 005b4d8f  7404                 je 0x5b4d95
// 005b4d91  8bf0                 mov esi, eax
// 005b4d93  eb10                 jmp 0x5b4da5
// 005b4d95  8b06                 mov eax, dword ptr [esi]
// 005b4d97  8b500c               mov edx, dword ptr [eax + 0xc]
// 005b4d9a  8bce                 mov ecx, esi
// 005b4d9c  ffd2                 call edx
// 005b4d9e  85c0                 test eax, eax
// 005b4da0  7507                 jne 0x5b4da9
// 005b4da2  8b7708               mov esi, dword ptr [edi + 8]
// 005b4da5  85f6                 test esi, esi
// 005b4da7  75b7                 jne 0x5b4d60
// 005b4da9  5f                   pop edi
// 005b4daa  33c0                 xor eax, eax
// 005b4dac  5e                   pop esi
// 005b4dad  c20400               ret 4
// 005b4db0  5f                   pop edi
// 005b4db1  8bc6                 mov eax, esi
// 005b4db3  5e                   pop esi
// 005b4db4  c20400               ret 4

struct Node {
    virtual int v0();
    virtual int v1();
    virtual int v2();
    virtual int v3();
    virtual int v4();
    virtual int v5();
    int field_8;
    int field_10;
    int field_14;
};

struct Geometry {
    int field_8;
    Node* findNode(Node* n);
};

Node* Geometry::findNode(Node* n) {
    while (n != 0) {
        if (n->v1() == 0) {
            int t = n->v4();
            if (t == 5 || t == 6)
                return n;
        }
        Node* next;
        if (this->field_8 == n->field_8)
            next = (Node*)n->field_10;
        else
            next = (Node*)n->field_14;
        if (next != 0) {
            n = next;
        } else {
            if (n->v1() != 0)
                break;
            n = (Node*)this->field_8;
        }
    }
    return 0;
}
