// from server: 35% by colin
struct CNameItem {
    char pad[8];
    CNameItem();
};

struct ClumpStage2 {
    char pad[0xb8];
    int arr[1];
};

extern "C" {
    int __cdecl sub_645560(int, int, int, int);
    void* __cdecl sub_645980(int, int, int, int, void*, void*);
    void* __cdecl sub_6a0920(unsigned int);
    void __cdecl sub_6455c0(void*, int, int, void*, void*);
}

struct Result {
    void* vtable;
};

Result* __cdecl sub_669e20(ClumpStage2* a, int b, int c, int d) {
    int e = a->arr[b];
    int f = a->arr[c];
    if (e != 2 && f != 2)
        return 0;
    if (!sub_645560((int)a, b, c, d))
        return 0;
    CNameItem n1;
    CNameItem n2;
    void* r = sub_645980((int)a, b, c, d, &n2, &n1);
    Result* p = (Result*)sub_6a0920(0x88);
    if (!p)
        return 0;
    sub_6455c0(p, (int)a, b, &n1, &n2);
    p->vtable = (void*)0x83e0bc;
    return p;
}
