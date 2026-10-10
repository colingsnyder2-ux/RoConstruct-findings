// from server: 36% by tester
struct Vec3 {
    float x;
    float y;
    float z;
};

struct TopMenuBar {
    void f(int, int);
    void getPos(Vec3*);
    void getSize(Vec3*);
    bool check(int);
    void sub_5569a0(int, int);
    void sub_556f30(int, int);
};

void TopMenuBar::f(int a, int b)
{
    Vec3 pos;
    Vec3 size;
    getPos(&pos);
    getSize(&size);
    Vec3 v;
    v.x = pos.x + size.x;
    v.y = pos.y + size.y;
    v.z = pos.z + size.z;
    if (check(*(int*)((char*)b + 8))) {
        sub_5569a0(a, b);
    } else {
        sub_556f30(a, b);
    }
}
