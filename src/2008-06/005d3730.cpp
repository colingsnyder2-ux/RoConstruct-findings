// from server: 27% by colin
struct Sub1 {
    void f();
};

struct Sub2 {
    void f();
};

struct SpawnLocation {
    char pad[0x3ec];
    Sub1 sub1;
    void f();
};

void SpawnLocation::f() {
    sub1.f();
    Sub2* p = (Sub2*)this;
    p->f();
}
