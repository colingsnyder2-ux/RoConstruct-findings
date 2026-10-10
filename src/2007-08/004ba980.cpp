// from server: 68% by colin
extern "C" void __cdecl free(void*);
extern "C" void __cdecl sub_4b94c0(void*);

struct RakPeer {
    char pad[0x2b4];
    struct List {
        void* head;
        char pad1[4];
        void* tail;
        char pad2[4];
        unsigned int count;
    } list;
    void clear();
};

void RakPeer::clear() {
    List* l = &list;
    for (;;) {
        void* cur = l->head;
        if (cur == l->tail)
            break;
        if (*((char*)cur + 0x120) == 0)
            break;
        void* next = *(void**)((char*)cur + 0x124);
        l->head = next;
        if (cur == 0)
            break;
        void* d = *(void**)((char*)cur + 0x10);
        if (d != 0) {
            free(d);
        }
        l->count++;
        *((char*)l->tail + 0x120) = 0;
        void* t = l->tail;
        l->tail = *(void**)((char*)t + 0x124);
    }
    sub_4b94c0(l);
}
