// from server: 76% by atomic.potato
struct Inner {
    int field0;
};

struct Outer {
    char pad0[0x68];
    Inner* begin;
    Inner* end;
    int get(int);
};

extern "C" Inner* __cdecl helper(Outer*, int);

int Outer::get(int index) {
    Inner* p = helper(this, index);
    int v = p->field0;
    if (v < 0) {
        return 0;
    }
    int count = (int)((end - begin));
    if ((unsigned)v >= (unsigned)count) {
        return 0;
    }
    return begin[v].field0;
}
