// from server: 79% by atomic.potato
struct Inner {
    virtual int f(int*);
};

struct Outer {
    char pad0[0x18];
    Inner* p;
    bool g(int*, int);
};

extern "C" bool __cdecl sub_64B5E0(int*, int*);

bool Outer::g(int* a, int) {
    int local;
    if (sub_64B5E0(&local, a)) {
        Inner* q = p;
        q->f(&local);
        return true;
    }
    return false;
}
