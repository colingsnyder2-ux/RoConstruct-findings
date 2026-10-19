// from server: 93% by TrollStein
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
};

void* __cdecl f(void* a1, int a2)
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
