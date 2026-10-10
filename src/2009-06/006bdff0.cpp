// from server: 51% by atomic.potato
extern "C" int __cdecl sub_6babb0(int, int, int);
extern "C" int __cdecl sub_633d70(int, float, float);

struct S {
    float x;
    float y;
};

int __cdecl sub_6bdff0(int a1) {
    int v1 = *(int*)0xA22AF4;
    int v2 = sub_6babb0(a1, 1, v1);
    int v3 = sub_6babb0(a1, 2, v1);
    S* s1 = (S*)v2;
    S* s2 = (S*)v3;
    float f1 = s1->x - s2->x;
    float f2 = s1->y - s2->y;
    sub_633d70(a1, f1, f2);
    return 1;
}
