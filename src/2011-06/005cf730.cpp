// from server: 68% by atomic.potato
struct Inner {
    int value;
};

struct Outer {
    char pad0[0x68];
    Inner** begin;
    char pad1[4];
    Inner** end;
    Inner* get(int index);
};

extern "C" Inner** __stdcall sub_5c2030(int* p);

Inner* Outer::get(int index)
{
    Inner** p = sub_5c2030(&index);
    int i = (*p)->value;
    if (i < 0)
        return 0;
    if ((unsigned)i >= (unsigned)((end - begin)))
        return 0;
    return begin[i];
}
