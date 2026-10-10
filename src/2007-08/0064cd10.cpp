// from server: 70% by colin
struct CXTPImageManagerIconSet {
    int sub_64CB40(int);
    int sub_64C7B0(int);

    int sub_64CD10(int a, int b);
};

struct Inner {
    int sub_64CA40(int, int);
    int sub_6491D0(int*);
};

int CXTPImageManagerIconSet::sub_64CD10(int a, int b) {
    int local;
    int r = sub_64CB40(a);
    if (r != 0) {
        Inner* p = (Inner*)r;
        int r2 = p->sub_64CA40(b, 0);
        if (r2 != 0) {
            if (*(int*)(r2 + 0xb0) == 0) {
                return 1;
            }
        }
    }
    int r3 = sub_64C7B0(a);
    if (r3 != 0) {
        if (b == 0) {
            return 1;
        }
        Inner* p3 = (Inner*)r3;
        int* pr = (int*)p3->sub_6491D0(&local);
        if (*pr == b) {
            return 1;
        }
    }
    return 0;
}
