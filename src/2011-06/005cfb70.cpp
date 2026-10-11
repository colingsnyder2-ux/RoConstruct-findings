// from server: 77% by atomic.potato
struct W4KeywordFilterType_EnumDesc {
    char pad0[0x68];
    int* begin;
    int* end;
    int get(int index);
};

extern "C" int* __stdcall sub_5c4e80(int value);

int W4KeywordFilterType_EnumDesc::get(int index) {
    int* p = sub_5c4e80(index);
    int v = *p;
    if (v < 0) return 0;
    int count = (int)(end - begin);
    if (v >= count) return 0;
    return begin[v];
}
