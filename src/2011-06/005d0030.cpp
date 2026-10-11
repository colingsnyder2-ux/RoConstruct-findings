// from server: 76% by atomic.potato
struct Inner {
    int value;
};

struct Outer {
    char pad[0x68];
    Inner* begin;
    Inner* end;
    int get(int index);
};

extern "C" Inner* __cdecl lookup(Outer* self, int index);

int Outer::get(int index) {
    Inner* p = lookup(this, index);
    int i = p->value;
    if (i < 0)
        return 0;
    if ((unsigned int)i >= (unsigned int)((end - begin)))
        return 0;
    return begin[i].value;
}
