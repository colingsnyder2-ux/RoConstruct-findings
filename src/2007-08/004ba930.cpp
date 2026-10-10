// from server: 66% by colin
struct RakPeer {
    char pad[0x6e4];
    struct List {
        void* head;
        char pad1[4];
        void* tail;
        char pad2[4];
        unsigned int count;
    } list;
    void func();
};

extern "C" void __cdecl free(void*);

void RakPeer::func()
{
    List* l = &list;
    void* node;
    for (;;) {
        node = l->head;
        if (node == l->tail)
            break;
        if (*(char*)((char*)node + 0x38) == 0)
            break;
        l->head = *(void**)((char*)node + 0x3c);
        if (node == 0)
            break;
        void* p = *(void**)((char*)node + 0x30);
        if (p != 0)
            free(p);
        l->count++;
        *(char*)((char*)l->tail + 0x38) = 0;
        l->tail = *(void**)((char*)l->tail + 0x3c);
    }
    extern void __fastcall sub_4b9650(List*);
    sub_4b9650(l);
}
