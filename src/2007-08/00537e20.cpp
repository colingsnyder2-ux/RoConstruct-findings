// from server: 85% by colin
// roc 2007-08 00537e20  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00537e20
//
// 00537e20  8b442408             mov eax, dword ptr [esp + 8]
// 00537e24  83f802               cmp eax, 2
// 00537e27  7519                 jne 0x537e42
// 00537e29  56                   push esi
// 00537e2a  8b742408             mov esi, dword ptr [esp + 8]
// 00537e2e  56                   push esi
// 00537e2f  b9509d8900           mov ecx, 0x899d50
// 00537e34  ff1508e77700         call dword ptr [0x77e708]
// 00537e3a  f6d8                 neg al
// 00537e3c  1bc0                 sbb eax, eax
// 00537e3e  23c6                 and eax, esi
// 00537e40  5e                   pop esi
// 00537e41  c3                   ret 
// 00537e42  85c0                 test eax, eax
// 00537e44  7523                 jne 0x537e69
// 00537e46  6a0c                 push 0xc
// 00537e48  e8a9800f00           call 0x62fef6
// 00537e4d  83c404               add esp, 4
// 00537e50  85c0                 test eax, eax
// 00537e52  7424                 je 0x537e78
// 00537e54  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00537e58  8b11                 mov edx, dword ptr [ecx]
// 00537e5a  8910                 mov dword ptr [eax], edx
// 00537e5c  8b5104               mov edx, dword ptr [ecx + 4]
// 00537e5f  895004               mov dword ptr [eax + 4], edx
// 00537e62  8b4908               mov ecx, dword ptr [ecx + 8]
// 00537e65  894808               mov dword ptr [eax + 8], ecx
// 00537e68  c3                   ret 
// 00537e69  8b542404             mov edx, dword ptr [esp + 4]
// 00537e6d  52                   push edx
// 00537e6e  e8ef7d0f00           call 0x62fc62
// 00537e73  83c404               add esp, 4
// 00537e76  33c0                 xor eax, eax
// 00537e78  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct VNode {
    void* m_a;
    void* m_b;
    void* m_c;
};

struct shared_ptr_TItem {
    void* m_ptr;
};

struct S {
    void* f(void* a1, int a2);
};

void* S::f(void* a1, int a2)
{
    if (a2 == 2) {
        void* p = a1;
        if (*(type_info*)0x899d50 == *(type_info*)p) {
            return p;
        }
        return 0;
    }
    if (a2 == 0) {
        VNode* n = (VNode*)operator_new(0xc);
        if (n != 0) {
            VNode* src = (VNode*)a1;
            n->m_a = src->m_a;
            n->m_b = src->m_b;
            n->m_c = src->m_c;
            return n;
        }
        return 0;
    }
    operator_delete(a1);
    return 0;
}
