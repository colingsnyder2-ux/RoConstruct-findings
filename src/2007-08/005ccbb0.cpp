// from server: 88% by tester
struct S {
    char pad[0x10];
    int* field_10;
    int get(int index);
};

extern int g_table1[];
extern int g_table2[];

int S::get(int index) {
    if (index < 0xc) {
        int q = index / 4;
        int r = index % 4;
        int v = g_table1[r + q * 4];
        return *(int*)((char*)field_10 + (v + v * 2) * 4);
    } else {
        int i = index - 0xc;
        int q = i / 4;
        int r = i % 4;
        int v = g_table2[r + q * 4];
        return *(int*)((char*)field_10 + (v + v * 2) * 4);
    }
}
