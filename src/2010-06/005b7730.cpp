// from server: 62% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    int value;
};

struct Outer {
    char pad[0xb0];
    Inner* begin;
    Inner* end;
    int get(int index);
};

extern "C" int* __stdcall sub_5ad520(int);

int Outer::get(int index) {
    int* p = sub_5ad520(index);
    int idx = *p;
    if (idx < 0)
        return 0;
    int count = (int)(end - begin);
    if ((unsigned)idx >= (unsigned)count)
        return 0;
    if ((unsigned)idx >= (unsigned)(int)(end - begin))
        _invalid_parameter_noinfo();
    return begin[idx].value;
}
