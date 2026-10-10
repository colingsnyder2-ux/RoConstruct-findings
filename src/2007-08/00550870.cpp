// from server: 65% by tester
struct S {
    char pad0[8];
    int field8;
    char pad1[0x18];
    int field24;
    char pad2[0x1c];
    unsigned char field44;
    int f(int a, int b, int c);
};

extern "C" int __cdecl helper1(void*, int, int);
extern "C" int __cdecl helper2(S*, int, int, int);
extern "C" void __cdecl helper3(S*);

int S::f(int a, int b, int c) {
    int total = 0;
    if (!(field44 & 1)) {
        total = helper1(&field8, a, b);
    }
    if (!(field44 & 2)) {
        int r = helper2(this, c, total + a, b - total);
        if (r == -1) {
            helper3(this);
        } else {
            total += r;
            int remaining = b - total;
            if (r < remaining) {
                r = helper2(this, c, total + a, remaining);
                if (r == -1) {
                    helper3(this);
                } else {
                    total += r;
                }
            }
        }
        if (field44 & 2) {
            if (total < b) {
                total += helper1(&field24, total + a, b - total);
            }
        }
    } else {
        if (total < b) {
            total += helper1(&field24, total + a, b - total);
        }
    }
    if (total != 0) {
        return total;
    }
    return -1;
}
