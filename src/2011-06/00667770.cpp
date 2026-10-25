// from server: 45% by atomic.potato
// roc 2011-06 00667770  unit: RBX::VWidget::?$NonFactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00667770
//
// 00667770  51                   push ecx
// 00667771  8b4104               mov eax, dword ptr [ecx + 4]
// 00667774  890c24               mov dword ptr [esp], ecx
// 00667777  85c0                 test eax, eax
// 00667779  745c                 je 0x6677d7
// 0066777b  8b5108               mov edx, dword ptr [ecx + 8]
// 0066777e  53                   push ebx
// 0066777f  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 00667782  55                   push ebp
// 00667783  8d2c90               lea ebp, [eax + edx*4]
// 00667786  3bdd                 cmp ebx, ebp
// 00667788  743f                 je 0x6677c9
// 0066778a  56                   push esi
// 0066778b  57                   push edi
// 0066778c  8d642400             lea esp, [esp]
// 00667790  8b33                 mov esi, dword ptr [ebx]
// 00667792  c70300000000         mov dword ptr [ebx], 0
// 00667798  85f6                 test esi, esi
// 0066779a  7424                 je 0x6677c0
// 0066779c  8d642400             lea esp, [esp]
// 006677a0  8bc6                 mov eax, esi
// 006677a2  8b36                 mov esi, dword ptr [esi]
// 006677a4  8d78d0               lea edi, [eax - 0x30]
// 006677a7  8d4f04               lea ecx, [edi + 4]
// 006677aa  e821f7ffff           call 0x666ed0
// 006677af  57                   push edi
// 006677b0  e8a3281a00           call 0x80a058
// 006677b5  83c404               add esp, 4
// 006677b8  85f6                 test esi, esi
// 006677ba  75e4                 jne 0x6677a0
// 006677bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006677c0  83c304               add ebx, 4
// 006677c3  3bdd                 cmp ebx, ebp
// 006677c5  75c9                 jne 0x667790
// 006677c7  5f                   pop edi
// 006677c8  5e                   pop esi
// 006677c9  8b4104               mov eax, dword ptr [ecx + 4]
// 006677cc  50                   push eax
// 006677cd  e886281a00           call 0x80a058
// 006677d2  83c404               add esp, 4
// 006677d5  5d                   pop ebp
// 006677d6  5b                   pop ebx
// 006677d7  59                   pop ecx
// 006677d8  c3                   ret 

struct Node {
    Node* next;
    char pad[0x2c];
};

struct Inner {
    char pad0[4];
    void clear();
};

struct S {
    char pad0[4];
    Node** begin;
    unsigned int count;
    Node** end;
    void f();
};

void Inner::clear() {
    Node* p = *(Node**)this;
    *(Node**)this = 0;
    while (p) {
        Node* n = p->next;
        Inner* inner = (Inner*)((char*)p - 0x30 + 4);
        inner->clear();
        operator delete((char*)p - 0x30);
        p = n;
    }
}

void S::f() {
    if (begin) {
        Node** e = end;
        Node** p = begin + count;
        if (e != p) {
            do {
                Node* n = *e;
                *e = 0;
                while (n) {
                    Node* nx = n->next;
                    Inner* inner = (Inner*)((char*)n - 0x30 + 4);
                    inner->clear();
                    operator delete((char*)n - 0x30);
                    n = nx;
                }
                ++e;
            } while (e != p);
        }
        operator delete(begin);
    }
}
