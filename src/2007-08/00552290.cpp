// from server: 60% by Yeetserama
struct basic_streambuf {
    int pubsync();
};

struct S {
    char pad[0x8c];
    basic_streambuf* p;
    void f1();
    int f();
};

int S::f() {
    __try {
        f1();
        if (p) {
            p->pubsync();
        }
    }
    __finally {
    }
    return 0;
}
