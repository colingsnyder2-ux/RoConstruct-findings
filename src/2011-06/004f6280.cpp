// from server: 0% by atomic.potato
struct Holder {
    void* p;
    Holder(int, int);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl func_80a05e();

struct Inner {
    int a;
    int b;
    int c;
    int d;
    int e;
};

struct Outer {
    Inner* p;
    Outer(int, int);
};

Outer::Outer(int x, int y) {
    p = 0;
    Inner* q = (Inner*)operator_new(0x14);
    if (q) {
        q->a = 0xa7b3dc;
        q->b = 1;
        q->c = 1;
        q->d = x;
    } else {
        q = 0;
    }
    p = q;
}
