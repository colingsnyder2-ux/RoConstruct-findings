// from server: 62% by atomic.potato
struct GuiTextW4YAlignmentEnumDesc {
    char pad0[0xb0];
    int* begin;
    int* end;
    int lookup(int) const;
};

extern "C" int __stdcall sub_64AD70(int);
extern "C" void __cdecl _invalid_parameter_noinfo();

int GuiTextW4YAlignmentEnumDesc::lookup(int index) const {
    int v = *reinterpret_cast<int*>(sub_64AD70(index));
    if (v < 0)
        return 0;
    int count = (int)(end - begin);
    if ((unsigned)v >= (unsigned)count)
        return 0;
    if ((unsigned)v >= (unsigned)((int)(end - begin)))
        _invalid_parameter_noinfo();
    return begin[v];
}
