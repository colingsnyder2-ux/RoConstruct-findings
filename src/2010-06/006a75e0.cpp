// from server: 0% by atomic.potato
struct S {
    char pad[0x50];
    int flags;
    int f(int a, int b, int c);
};

extern "C" int __cdecl sub_6a6880(void*);
extern "C" int __cdecl sub_6a5170(void*, int, int, int);
extern "C" int __cdecl sub_6a7160(void*, void*);

int S::f(int a, int b, int c)
{
    int result;
    if (!(this->flags & 1)) {
        sub_6a6880(&a);
        this->flags |= 1;
    }
    if (this->flags & 2) {
        return -1;
    }
    result = 0;
    a = 0;
    int r = sub_6a5170(this, a, b, c);
    if (r == -1) {
        sub_6a7160(this, &b);
        this->flags |= 2;
        return result;
    }
    if (r < c) {
        a = r;
        int r2 = sub_6a5170(this, a + b, c - r, c);
        if (r2 == -1) {
            sub_6a7160(this, &b);
            this->flags |= 2;
            return a;
        }
        a += r2;
    }
    return a;
}
