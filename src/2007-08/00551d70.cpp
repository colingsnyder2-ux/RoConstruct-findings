// from server: 21% by colin
struct S_alloc {
    char pad0[4];
    void* m_head;
    int m_size;
    void* m_extra;
};

struct S_node {
    S_node* m_next;
    S_node* m_prev;
    int m_value;
};

struct S_compressor {
    char pad0[0x18];
    int m_level;
};

struct S_holder {
    S_compressor* m_comp;
};

struct S_func_00551d70 {
    S_alloc* m_alloc;
    void f(int a2, int a3, int a4);
};

extern "C" void* __cdecl sub_0062fef6(unsigned int size);
extern "C" void __cdecl sub_00630b9e(void* a1, void* a2);
extern "C" void __cdecl sub_004024c0(void* a1, void* a2);
extern "C" void __cdecl sub_00551830(void* a1, int a2, int a3, int a4);
extern "C" void __cdecl sub_005e9d20(void* a1, void* a2, void* a3, void* a4);
extern "C" void __cdecl sub_005e9d60(void* a1, int a2);
extern "C" void __stdcall sub_0077e698(void* a1);
extern "C" void __stdcall sub_0077e6d8(void);

void S_func_00551d70::f(int a2, int a3, int a4)
{
    S_alloc* alloc = m_alloc;
    if (*(unsigned char*)((char*)alloc + 0x1c) & 1) {
        char buf[0x20];
        sub_0077e698((void*)0x7a7ae0);
        sub_004024c0(buf, (void*)0x7a7ae0);
        sub_00630b9e(buf, (void*)0x85a204);
    }

    S_node* node;
    if (alloc->m_size != 0) {
        S_node* head = (S_node*)alloc->m_head;
        S_node* first = head->m_next;
        if (first == head) {
            sub_0077e6d8();
        }
        if (first == (S_node*)alloc->m_head) {
            sub_0077e6d8();
        }
        node = (S_node*)first->m_value;
    } else {
        node = 0;
    }

    int v1 = a2;
    if (v1 == -1) {
        v1 = 0x80;
    }
    int v2 = a3;
    if (v2 == -1) {
        v2 = *(int*)((char*)m_alloc + 0x18);
    }

    void* mem = sub_0062fef6(0xa0);
    void* obj;
    if (mem != 0) {
        sub_00551830(mem, a4, v1, v2);
        obj = mem;
    } else {
        obj = 0;
    }

    S_alloc* alloc2 = m_alloc;
    S_node* head2 = (S_node*)alloc2->m_head;
    S_node* first2 = head2->m_next;
    void* tmp = obj;
    sub_005e9d20(alloc2, first2, head2, &tmp);
    void* result = 0;
    sub_005e9d60(alloc2, 1);
    head2->m_next = (S_node*)result;
    *(void**)((char*)result + 4) = head2;

    if (node != 0) {
        S_alloc* alloc3 = m_alloc;
        S_node* head3 = (S_node*)alloc3->m_head;
        S_node* first3 = head3->m_next;
        if (first3 == head3) {
            sub_0077e6d8();
        }
        if (first3 == (S_node*)alloc3->m_head) {
            sub_0077e6d8();
        }
        void** vtbl = *(void***)node;
        int val = first3->m_value;
        void (*fn)(void*, int) = (void (*)(void*, int))vtbl[0x38 / 4];
        fn(node, val);
    }

    S_alloc* alloc4 = m_alloc;
    if (alloc4->m_extra != 0) {
        void* p = alloc4->m_extra;
        void** vtbl = *(void***)p;
        void (*fn)(void*) = (void (*)(void*))vtbl[1];
        fn(p);
    }
}
