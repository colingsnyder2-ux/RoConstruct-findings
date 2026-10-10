// from server: 79% by colin
struct RakPeer {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void clear();
};

extern "C" void __cdecl free_mem(void*);

void RakPeer::clear() {
    void* p = field8;
    void* q = *(void**)((char*)p + 0x124);
    fieldC = q;
    void* r = *(void**)((char*)field8 + 0x124);
    int count = 1;
    if (r != field8) {
        do {
            r = *(void**)((char*)r + 0x124);
            count++;
        } while (r != field8);
        if (count > 8) {
            int n = count - 8;
            do {
                void* next = *(void**)((char*)fieldC + 0x124);
                free_mem(fieldC);
                n--;
                fieldC = next;
            } while (n != 0);
        }
    }
    void* a = fieldC;
    void* b = field8;
    *(void**)((char*)b + 0x124) = a;
    void* c = field8;
    fieldC = c;
    field0 = c;
    field4 = c;
    field14 = 0;
    field10 = 0;
}
