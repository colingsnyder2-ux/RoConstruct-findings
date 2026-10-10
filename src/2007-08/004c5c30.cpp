// from server: 85% by colin
struct RakPeer {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    void method(unsigned int);
};

extern "C" void __cdecl free(void*);

void RakPeer::method(unsigned int arg) {
    unsigned int* p = *(unsigned int**)(arg + 0x194);
    unsigned int count = p[1];
    if (count == 0) {
        unsigned int* head = (unsigned int*)p[0];
        *head = arg;
        p[1] = p[1] + 1;
        field_c -= 1;
        unsigned int* prev = (unsigned int*)p[3];
        unsigned int* next = (unsigned int*)p[4];
        *(unsigned int**)((char*)prev + 0x10) = next;
        unsigned int* prev2 = (unsigned int*)p[4];
        unsigned int* next2 = (unsigned int*)p[3];
        *(unsigned int**)((char*)prev2 + 0xc) = next2;
        if ((int)field_c > 0) {
            unsigned int* first = (unsigned int*)field_4;
            if (p == first) {
                field_4 = *(unsigned int*)((char*)first + 0xc);
            }
        }
        unsigned int old = field_8;
        field_8 = old + 1;
        if (old == 0) {
            field_0 = (unsigned int)p;
            *(unsigned int**)((char*)p + 0xc) = p;
            *(unsigned int**)((char*)p + 0x10) = p;
            return;
        }
        unsigned int* head2 = (unsigned int*)field_0;
        *(unsigned int**)((char*)p + 0xc) = head2;
        unsigned int* h3 = (unsigned int*)field_0;
        unsigned int* h3next = *(unsigned int**)((char*)h3 + 0x10);
        *(unsigned int**)((char*)p + 0x10) = h3next;
        unsigned int* h4 = (unsigned int*)field_0;
        unsigned int* h4next = *(unsigned int**)((char*)h4 + 0x10);
        *(unsigned int**)((char*)h4next + 0xc) = p;
        unsigned int* h5 = (unsigned int*)field_0;
        *(unsigned int**)((char*)h5 + 0x10) = p;
        return;
    }
    unsigned int* arr = (unsigned int*)p[0];
    arr[count] = arg;
    p[1] = p[1] + 1;
    unsigned int newCount = p[1];
    unsigned int div = field_10;
    unsigned int q = (unsigned int)(((unsigned long long)0xa0a0a0a1ULL * div) >> 32) >> 8;
    if (newCount == q && (int)field_8 >= 4) {
        if (p == (unsigned int*)field_0) {
            field_0 = *(unsigned int*)((char*)p + 0xc);
        }
        unsigned int* n1 = *(unsigned int**)((char*)p + 0x10);
        unsigned int* n2 = *(unsigned int**)((char*)p + 0xc);
        *(unsigned int**)((char*)n1 + 0xc) = n2;
        unsigned int* n3 = *(unsigned int**)((char*)p + 0xc);
        unsigned int* n4 = *(unsigned int**)((char*)p + 0x10);
        *(unsigned int**)((char*)n3 + 0x10) = n4;
        field_8 -= 1;
        free((void*)p[0]);
        free((void*)p[2]);
        free(p);
    }
}
