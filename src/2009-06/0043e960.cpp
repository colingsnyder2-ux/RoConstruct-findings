// from server: 38% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    void* v;
    void* w;
};

struct Elem {
    Inner* p;
    int a;
    int b;
};

struct Vec {
    Elem* first;
    Elem* last;
    Elem* end;
};

struct Binder {
    char pad[4];
    Vec v;
    bool f(Vec* other);
};

bool Binder::f(Vec* other) {
    Elem* i = v.last;
    if (i > v.end) _invalid_parameter_noinfo();
    Elem* s = v.first;
    while (true) {
        Elem* e = v.end;
        if (v.last > e) _invalid_parameter_noinfo();
        Elem* b = v.first;
        if (s != 0 && s == b) {
        } else {
            _invalid_parameter_noinfo();
        }
        if (i == e) break;
        if (s == 0) {
            _invalid_parameter_noinfo();
            if (i < (Elem*)0x10) _invalid_parameter_noinfo();
            if (s != 0) { b = (Elem*)s->p; }
            else { _invalid_parameter_noinfo(); if (i < (Elem*)0x10) _invalid_parameter_noinfo(); }
            if (s != 0) { b = (Elem*)s->p; }
            else { _invalid_parameter_noinfo(); if (i < (Elem*)0x10) _invalid_parameter_noinfo(); }
            Inner* in = i->p;
            void (__stdcall *fn)(int, int) = *(void (__stdcall **)(int, int))in->v;
            fn(i->a, (int)&i->b);
            if (s != 0) { b = (Elem*)s->p; }
            else { _invalid_parameter_noinfo(); if (i < (Elem*)0x10) _invalid_parameter_noinfo(); }
            i = (Elem*)((char*)i + 16);
        } else {
            b = (Elem*)s->p;
            Inner* in = i->p;
            void (__stdcall *fn)(int, int) = *(void (__stdcall **)(int, int))in->v;
            fn(i->a, (int)&i->b);
            if (s != 0) { b = (Elem*)s->p; }
            else { _invalid_parameter_noinfo(); if (i < (Elem*)0x10) _invalid_parameter_noinfo(); }
            i = (Elem*)((char*)i + 16);
        }
    }
    Elem* e2 = v.end;
    if (v.last > e2) _invalid_parameter_noinfo();
    Elem* s2 = v.last;
    Elem* f2 = v.first;
    if (s2 > v.end) _invalid_parameter_noinfo();
    Elem* b2 = v.first;
    Vec tmp;
    tmp.first = b2;
    tmp.last = s2;
    tmp.end = e2;
    other->first = f2;
    other->last = s2;
    other->end = e2;
    return true;
}
