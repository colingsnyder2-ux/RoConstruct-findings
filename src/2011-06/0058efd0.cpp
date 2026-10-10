// from server: 79% by colin
struct EnumDesc {
    char pad[0x68];
    int* begin;
    int* end;
    int getItem(int index);
};

extern "C" int* __stdcall lookup(int index);

int EnumDesc::getItem(int index)
{
    int* p = lookup(index);
    int v = *p;
    if (v < 0)
        return 0;
    int count = (int)(((char*)end - (char*)begin) >> 2);
    if ((unsigned)v >= (unsigned)count)
        return 0;
    return begin[v];
}
