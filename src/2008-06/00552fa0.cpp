// from server: 36% by colin
struct Vec3 {
    float x, y, z;
    Vec3();
};

struct Sub {
    char pad[0xc];
    void init();
};

struct S {
    char pad0[0xc];
    Sub sub;
    void f();
};

void S::f() {
    Vec3 v;
    sub.init();
}
