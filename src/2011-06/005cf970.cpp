// from server: 79% by atomic.potato
struct W4FontEnumDesc {
    char pad0[0x68];
    int* begin;
    int* end;
    int get(int index);
};

extern "C" int* __stdcall sub_5c3900(int index);

int W4FontEnumDesc::get(int index)
{
    int* p = sub_5c3900(index);
    int v = *p;
    if (v < 0)
        return 0;
    int count = (int)(((char*)end - (char*)begin) >> 2);
    if ((unsigned)v >= (unsigned)count)
        return 0;
    return begin[v];
}
