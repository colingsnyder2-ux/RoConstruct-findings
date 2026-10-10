// from server: 41% by colin
struct S {
    void f(int* a, int* b, int* c);
};

void S::f(int* a, int* b, int* c)
{
    int* p = a;
    int* q = b;
    int* r = c;

    int n = (int)(q - p);
    if (n > 0x28) {
        int m = (n + 1) / 8;
        int* e = p + m * 8;
        int* f = p + m * 2;

        if (*f < *p) {
            int t = *f;
            *f = *p;
            *p = t;
        }
        if (*e < *f) {
            int t = *e;
            *e = *f;
            *f = t;
        }
        if (*f < *p) {
            int t = *f;
            *f = *p;
            *p = t;
        }

        if (*r < *f) {
            int t = *r;
            *r = *f;
            *f = t;
        }
        if (*e < *r) {
            int t = *e;
            *e = *r;
            *r = t;
        }
        if (*r < *f) {
            int t = *r;
            *r = *f;
            *f = t;
        }

        if (*f < *e) {
            int t = *f;
            *f = *e;
            *e = t;
        }
        if (*r < *f) {
            int t = *r;
            *r = *f;
            *f = t;
        }
        if (*f < *e) {
            int t = *f;
            *f = *e;
            *e = t;
        }

        if (*e < *p) {
            int t = *e;
            *e = *p;
            *p = t;
        }
        if (*f < *e) {
            int t = *f;
            *f = *e;
            *e = t;
        }
        if (*e < *p) {
            int t = *e;
            *e = *p;
            *p = t;
        }
    } else {
        if (*q < *p) {
            int t = *q;
            *q = *p;
            *p = t;
        }
        if (*r < *q) {
            int t = *r;
            *r = *q;
            *q = t;
        }
        if (*q < *p) {
            int t = *q;
            *q = *p;
            *p = t;
        }
    }
}
