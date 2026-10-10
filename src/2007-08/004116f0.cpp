// from server: 92% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info G1_type_info_008827c8;
extern type_info G1_type_info_008827d4;

struct S {
    void* m0;
    void* m4;
};

void* func_004116f0(S* p)
{
    if (p == 0)
        return 0;
    void* q = p->m0;
    type_info* t;
    if (q != 0) {
        void** vt = *(void***)q;
        t = (type_info*)vt[1];
        t = (type_info*)((void*(__thiscall*)(void*))t)(q);
    } else {
        t = &G1_type_info_008827c8;
    }
    if (t->operator==(G1_type_info_008827d4)) {
        return (char*)p->m0 + 4;
    }
    return 0;
}
