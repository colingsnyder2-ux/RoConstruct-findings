// from server: 79% by atomic.potato
struct EnumDesc {
    int f(int);
};

struct NetworkSettings {
    char pad0[0x68];
    int* begin;
    int* end;
};

extern "C" int* __stdcall sub_4dd4c0(int);

int EnumDesc::f(int a) {
    int* p = sub_4dd4c0(a);
    int v = *p;
    if (v < 0) return 0;
    NetworkSettings* ns = (NetworkSettings*)this;
    int count = (int)(ns->end - ns->begin);
    if ((unsigned)v >= (unsigned)count) return 0;
    return ns->begin[v];
}
