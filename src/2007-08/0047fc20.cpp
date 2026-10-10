// from server: 45% by colin
struct Elem {
    char pad[0x38];
};

struct Vec {
    Elem* begin;
    int size;
    int cap;
};

struct Outer {
    int insert(Elem* pos, Elem* val);
    void grow(int n, int v);
    void destroy(Elem* p);
    int f(Elem* pos);
};

int Outer::f(Elem* pos) {
    Vec* v = (Vec*)this;
    if (v->size < v->cap) {
        Elem* slot = v->begin + v->size;
        if (slot != 0) {
            *slot = *pos;
        }
        v->size++;
        return 0;
    }
    if (pos >= v->begin && pos < v->begin + v->size) {
        Elem tmp;
        tmp = *pos;
        int r = f(&tmp);
        destroy(&tmp);
        return r;
    }
    grow(v->size + 1, 0);
    Elem* slot = v->begin + v->size - 1;
    *slot = *pos;
    return 0;
}
