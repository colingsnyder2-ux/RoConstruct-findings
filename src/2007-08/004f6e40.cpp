// from server: 29% by colin
extern "C" {
    int __cdecl _ftol2_sse(float);
}

struct Elem {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
};

struct Container {
    Elem* data;
    int count;
    int capacity;
    void destroy_range(Elem* first, Elem* last);
    void grow(int newcap);
    void reserve(int n);
    void resize(int n, int val);
};

void Container::destroy_range(Elem* first, Elem* last) {
    while (first != last) {
        first++;
    }
}

void Container::grow(int newcap) {
    int oldcount = count;
    int oldcap = capacity;
    if (oldcap == 0) {
        capacity = newcap;
        reserve(newcap);
        int i = oldcount;
        while (i < count) {
            Elem* p = data + i;
            if (p) {
                p->a = 0;
                p->b = 0;
                p->c = 0;
                p->d = 0;
                p->e = 0;
                p->f = 0;
            }
            i++;
        }
        return;
    }
    if (oldcount < newcap) {
        capacity = newcap;
        reserve(newcap);
        int i = oldcount;
        while (i < count) {
            Elem* p = data + i;
            if (p) {
                p->a = 0;
                p->b = 0;
                p->c = 0;
                p->d = 0;
                p->e = 0;
                p->f = 0;
            }
            i++;
        }
        return;
    }
    float factor;
    if (oldcap > 400000) {
        factor = 1.5f;
    } else if (oldcap > 64000) {
        factor = 2.0f;
    } else {
        factor = 1.5f;
    }
    int newcap2 = (int)((float)oldcap * factor);
    newcap2 = newcap2 - oldcap + oldcount;
    capacity = newcap2;
    if (newcap2 < 10) {
        capacity = 10;
    }
    reserve(capacity);
    int i = oldcount;
    while (i < count) {
        Elem* p = data + i;
        if (p) {
            p->a = 0;
            p->b = 0;
            p->c = 0;
            p->d = 0;
            p->e = 0;
            p->f = 0;
        }
        i++;
    }
}

void Container::resize(int n, int val) {
    int oldcount = count;
    count = n;
    if (n < oldcount) {
        Elem* p = data + n;
        int cnt = oldcount - n;
        while (cnt != 0) {
            destroy_range(p, p + 1);
            p++;
            cnt--;
        }
    }
    if (count > capacity) {
        grow(n);
    }
}

void Container::reserve(int n) {
    int oldcap = capacity;
    if (n > oldcap) {
        if (oldcap == 0) {
            capacity = n;
            grow(n);
            return;
        }
        if (count < n) {
            capacity = n;
            grow(n);
            return;
        }
        float factor;
        if (oldcap > 400000) {
            factor = 1.5f;
        } else if (oldcap > 64000) {
            factor = 2.0f;
        } else {
            factor = 1.5f;
        }
        int newcap = (int)((float)oldcap * factor);
        newcap = newcap - oldcap + count;
        capacity = newcap;
        if (newcap < 10) {
            capacity = 10;
        }
        grow(capacity);
    }
}
