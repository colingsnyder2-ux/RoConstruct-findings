// from server: 98% by atomic.potato
struct X_0043fd10 {
    char pad_0[4];
    int (__thiscall *f_4)(void*);
    float get(int* p);
};

float X_0043fd10::get(int* p) {
    int* q;
    if (p != 0) {
        p = (int*)((char*)p - 0x18);
        if (p != 0) {
            q = (int*)((char*)p + 0x8c);
        } else {
            q = 0;
        }
    } else {
        q = 0;
    }
    int v = f_4(q);
    return (float)v;
}
