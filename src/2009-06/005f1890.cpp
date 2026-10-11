// from server: 28% by atomic.potato
extern "C" void* __cdecl sub_718a38(unsigned int);
extern "C" void __cdecl sub_694390(void*);

struct VBodyForce {
    void sub_5f17e0(void*, void*);
};

void VBodyForce::sub_5f17e0(void* a, void* b) {
    void* p = sub_718a38(0x168);
    void* q = 0;
    if (p) {
        sub_694390(p);
        q = p;
    }
    sub_5f17e0(q, a);
}
