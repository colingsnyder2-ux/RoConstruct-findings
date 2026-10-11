// from server: 56% by atomic.potato
struct Inner {
    char pad[0x3c];
    int* f(int* out, int arg);
};

struct Outer {
    char pad[4];
    Inner* inner;
    int method(int* out, int arg);
};

int Outer::method(int* out, int arg) {
    int tmp[2];
    Inner* p = this->inner;
    int* r = p->f(tmp, arg);
    int a = r[0];
    int b = r[1];
    out[0] = (int)this;
    out[1] = a;
    out[2] = b;
    return 0;
}
