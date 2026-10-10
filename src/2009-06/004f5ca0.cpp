// from server: 72% by why2
struct S {
    int f();
    int field0;
    int field4;
    int field8;
    int fieldC;
};

extern "C" void __cdecl sub_718cde(int);

int S::f() {
    if (fieldC > 0) {
        sub_718cde(field0);
    }
    return 0;
}
