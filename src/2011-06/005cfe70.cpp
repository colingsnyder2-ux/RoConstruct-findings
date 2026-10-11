// from server: 81% by atomic.potato
struct Inner {
    int value;
};

struct Outer {
    char pad0[0x68];
    Inner** begin;
    Inner** end;
    int get(int index);
};

extern "C" int* __cdecl sub_5c70a0(int);

int Outer::get(int index) {
    int* p = sub_5c70a0(index);
    int v = *p;
    if (v < 0)
        return 0;
    int count = (int)(end - begin);
    if ((unsigned)v >= (unsigned)count)
        return 0;
    return begin[v]->value;
}
