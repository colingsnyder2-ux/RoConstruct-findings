// from server: 37% by atomic.potato
struct CBitmapDC {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    void ctor();
};

struct CMap {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    void ctor(int, int);
};

void CBitmapDC::ctor() {
    f0 = 0;
    f4 = 0;
    f8 = 0;
    fc = 0;
    f10 = 0;
    f14 = 0;
    f18 = 0;
}

int* sub_80c210(int* out, int* key);

void CMap::ctor(int a, int b) {
    CBitmapDC tmp;
    tmp.ctor();
    f0 = a;
    fc = 0;
    int* p = sub_80c210((int*)&tmp, (int*)&tmp);
    f18 = p[0];
    f1c = p[1];
    f20 = b;
}
