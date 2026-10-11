// from server: 29% by colin
struct S {
    char pad[0x10];
    int field10;
    bool check();
    void remove(int, int);
};

bool S::check() {
    if (!check()) {
        int v = field10;
        remove(v, v - 4);
        field10 -= 4;
    }
    return true;
}
