// from server: 87% by colin
struct S {
    char pad[0x10];
    int* field10;
    int* get(int index);
};

int* S::get(int index) {
    if (index < 0xc) {
        int q = index / 4;
        int r = index % 4;
        int* base = (int*)0x7c2ea8;
        int v = base[r + q * 4];
        return field10 + v * 3;
    } else {
        int q = (index - 0xc) / 4;
        int r = (index - 0xc) % 4;
        int* base = (int*)0x7c2eac;
        int v = base[r + q * 4];
        return field10 + v * 3;
    }
}
