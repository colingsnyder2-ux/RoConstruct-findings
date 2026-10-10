// from server: 98% by colin
struct WeldTool {
    char pad[0x18];
    void* field18;
    void construct(void* workspace);
};

struct Inner {
    void m1();
    void m2();
    void m3(int);
    void m4();
};

struct Inner2 {
    void m5();
};

extern "C" void* __cdecl sub_561B10(void* a, int b);

void WeldTool::construct(void* workspace) {
    Inner* p = *(Inner**)workspace;
    p->m1();
    ((Inner*)workspace)->m2();
    ((Inner*)workspace)->m3(2);
    p = *(Inner**)workspace;
    p->m4();
    Inner2* q = (Inner2*)sub_561B10(field18, 8);
    q->m5();
}
