// from server: 92% by atomic.potato
// roc 2010-06 0078d650  unit: RBX::BlockBlockContact  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078d650
//
// 0078d650  53                   push ebx
// 0078d651  55                   push ebp
// 0078d652  56                   push esi
// 0078d653  8bf1                 mov esi, ecx
// 0078d655  33db                 xor ebx, ebx
// 0078d657  33ed                 xor ebp, ebp
// 0078d659  399ed4000000         cmp dword ptr [esi + 0xd4], ebx
// 0078d65f  7630                 jbe 0x78d691
// 0078d661  57                   push edi
// 0078d662  8d7e34               lea edi, [esi + 0x34]
// 0078d665  8b07                 mov eax, dword ptr [edi]
// 0078d667  837804ff             cmp dword ptr [eax + 4], -1
// 0078d66b  7417                 je 0x78d684
// 0078d66d  85ed                 test ebp, ebp
// 0078d66f  7509                 jne 0x78d67a
// 0078d671  8bce                 mov ecx, esi
// 0078d673  e85834fcff           call 0x750ad0
// 0078d678  8be8                 mov ebp, eax
// 0078d67a  8b0f                 mov ecx, dword ptr [edi]
// 0078d67c  51                   push ecx
// 0078d67d  8bcd                 mov ecx, ebp
// 0078d67f  e8dce4f7ff           call 0x70bb60
// 0078d684  43                   inc ebx
// 0078d685  83c704               add edi, 4
// 0078d688  3b9ed4000000         cmp ebx, dword ptr [esi + 0xd4]
// 0078d68e  72d5                 jb 0x78d665
// 0078d690  5f                   pop edi
// 0078d691  5e                   pop esi
// 0078d692  5d                   pop ebp
// 0078d693  5b                   pop ebx
// 0078d694  c3                   ret 

struct Elem {
    char pad[4];
    int field_4;
};

struct Obj {
    void method70bb60(Elem* e);
};

struct S {
    char pad0[0x34];
    Elem* m_elems[40];
    unsigned int m_count;
    Obj* createObj();
    void f();
};

void S::f()
{
    unsigned int i = 0;
    Obj* obj = 0;
    for (Elem** p = m_elems; i < m_count; i++, p++) {
        if ((*p)->field_4 != -1) {
            if (obj == 0)
                obj = createObj();
            obj->method70bb60(*p);
        }
    }
}
