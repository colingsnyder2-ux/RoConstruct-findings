// from server: 94% by colin
struct RakPeer {
    char pad0[0x14];
    void* field14;
    void* field18;
    bool sub_4c52b0(void* a, void* b, void* c);
    void sub_4c5210(int a, void* b);
    void sub_4c5c30(void* a);
    bool sub_4c72e0(void* a, void* b, void* c, void* d, void* e, void* f);
    bool func(void* a, void* b);
};

bool RakPeer::func(void* a, void* b) {
    void* p = field14;
    if (p == 0) {
        return false;
    }
    int idx = 0;
    unsigned char flag = 0;
    if (p == field18) {
        if (!sub_4c52b0(a, p, &idx)) {
            return false;
        }
        *(int*)b = *(int*)((char*)p + idx * 4 + 0x88);
        sub_4c5210(idx, field14);
        if (*(int*)((char*)field14 + 4) == 0) {
            sub_4c5c30(field14);
            field14 = 0;
            field18 = 0;
            return true;
        }
    } else {
        if (!sub_4c72e0(a, p, &flag, *(void**)((char*)p + 8), &idx, b)) {
            return false;
        }
        if (flag != 0) {
            void* q = field14;
            if (*(int*)((char*)q + 4) == 0) {
                field14 = *(void**)((char*)q + 0x110);
                sub_4c5c30(q);
                *(int*)q = 0;
            }
        }
    }
    return true;
}
