// from server: 71% by colin
extern "C" int __stdcall sub_401000(int);

struct S {
    int f(int, int, int, int);
};

int S::f(int a, int b, int c, int d) {
    if (d != 0) {
        *(int*)d = 0;
    }
    if (a == 0) {
        return 0x80070057;
    }
    if (c == 0) {
        return 0x80004003;
    }
    if (a != 1 && d == 0) {
        return 0x80004003;
    }
    if (*(int*)(b + 8) == 0 || *(int*)(b + 0xc) == 0 || *(int*)(b + 0x10) == 0) {
        return 0x80004005;
    }
    int count = (*(int*)(b + 0xc) - *(int*)(b + 0x10)) >> 3;
    int flag = 0;
    if (a > count) {
        flag = 1;
    }
    if (a >= count) {
        a = count;
    }
    if (d != 0) {
        *(int*)d = a;
    }
    while (a != 0) {
        a--;
        if (c == 0 || *(int*)(b + 0x10) == 0) {
            sub_401000(0x80004005);
            return 0x80004005;
        }
        int* src = *(int**)(b + 0x10);
        *(int*)c = src[0];
        *(int*)(c + 4) = src[1];
        int p = src[0];
        if (p != 0) {
            int* vtbl = *(int**)p;
            int (*fn)(int) = (int (*)(int))vtbl[1];
            fn(p);
        }
        *(int*)(b + 0x10) += 8;
        c += 8;
    }
    return flag;
}
