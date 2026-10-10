// from server: 72% by tester
struct RakPeer {
    char pad0[8];
    void* field8;
    void* fieldC;
    void* field10;
    int field14;
    void removeNode(void*);
    void clear();
};

void RakPeer::clear()
{
    void* p = field8;
    void* q = *(void**)((char*)p + 0x3c);
    fieldC = q;
    void* r = *(void**)((char*)field8 + 0x3c);
    int count = 1;
    if (r != field8) {
        do {
            r = *(void**)((char*)r + 0x3c);
            count++;
        } while (r != field8);
        if (count > 8) {
            int n = count - 8;
            do {
                void* old = fieldC;
                void* next = *(void**)((char*)old + 0x3c);
                removeNode(old);
                n--;
                fieldC = next;
            } while (n != 0);
        }
    }
    *(void**)((char*)field8 + 0x3c) = fieldC;
    fieldC = field8;
    *(void**)this = field8;
    *(void**)((char*)this + 4) = field8;
    field14 = 0;
    field10 = 0;
}
