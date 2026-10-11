// from server: 34% by atomic.potato
struct Bucket {
    char pad0[0x18];
    int* field18;
    int field1c;
    void sub_91dc40(int);
    void f();
};

void Bucket::f() {
    int* p = field18;
    sub_91dc40(p[1]);
    field18[1] = (int)field18;
    field1c = 0;
    int* q = field18;
    *q = (int)field18;
    field18[2] = (int)field18;
}
