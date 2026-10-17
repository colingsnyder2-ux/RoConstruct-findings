// from server: 25% by colin
struct Ret { int a; int b; };

struct Humanoid {
    char pad0[0x144];
    int state;
    int f_573310(int* out, int arg);
    char f_573130();
    virtual int vf_64(void*);
    virtual int vf_68(void*);
    virtual int vf_6c(void*);
    virtual int vf_70(void*);
    virtual int vf_78();
    Ret f(void* arg);
};

int Humanoid::f_573310(int* out, int arg) { return 0; }
char Humanoid::f_573130() { return 0; }

Ret Humanoid::f(void* arg) {
    Ret r;
    int* p = (int*)arg;
    int tmp;
    char al;
    f_573310(&tmp, p[2]);
    al = f_573130();
    int st = state;
    if ((unsigned)st > 3) {
        r.a = 0;
        r.b = 0;
        return r;
    }
    switch (st) {
    case 0:
        if (al == 0) {
            state = 0;
            r.a = 0;
            r.b = 0;
            return r;
        }
        if (!vf_78()) {
            state = 0;
            r.a = 1;
            r.b = 0;
            return r;
        }
        {
            int v = p[0];
            if (v == 3) {
                state = 2;
                vf_6c(p);
                r.a = 1;
                r.b = 0;
                return r;
            }
            if (v == 5) {
                state = 1;
                r.a = 1;
                r.b = 0;
                return r;
            }
            r.a = 1;
            r.b = 0;
            return r;
        }
    case 1:
        {
            int v = p[0];
            if (v == 3) {
                r.a = 1;
                r.b = 0;
                return r;
            }
            if (v == 4) {
                state = 0;
                vf_70(p);
                if (al == 0) {
                    r.a = 0;
                    r.b = 0;
                    return r;
                }
                vf_64(p);
                r.a = 2;
                r.b = 0;
                return r;
            }
            if (v == 5) {
                if (al == 0) {
                    int res = vf_68(p);
                    state = res ? 3 : 0;
                }
                r.a = 1;
                r.b = 0;
                return r;
            }
            r.a = 0;
            r.b = 0;
            return r;
        }
    case 2:
        {
            int v = p[0];
            if (v == 3) {
                r.a = 1;
                r.b = 0;
                return r;
            }
            if (v == 4) {
                state = 0;
                vf_70(p);
                if (al == 0) {
                    r.a = 0;
                    r.b = 0;
                    return r;
                }
                vf_64(p);
                r.a = 1;
                r.b = 0;
                return r;
            }
            if (v == 5) {
                state = (al == 0) ? 2 : 3;
                r.a = 1;
                r.b = 0;
                return r;
            }
            r.a = 0;
            r.b = 0;
            return r;
        }
    case 3:
        {
            int v = p[0];
            if (v == 3) {
                r.a = 1;
                r.b = 0;
                return r;
            }
            if (v == 4) {
                state = 0;
                vf_70(p);
                if (al == 0) {
                    r.a = 0;
                    r.b = 0;
                    return r;
                }
                vf_64(p);
                r.a = 1;
                r.b = 0;
                return r;
            }
            if (v == 5) {
                state = (al == 0) ? 2 : 3;
                r.a = 1;
                r.b = 0;
                return r;
            }
            r.a = 0;
            r.b = 0;
            return r;
        }
    }
    r.a = 0;
    r.b = 0;
    return r;
}
