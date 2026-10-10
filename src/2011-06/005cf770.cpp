// from server: 77% by colin
struct EnumItem {
    int value;
};

struct EnumDesc {
    EnumItem* begin;
    EnumItem* end;
};

extern "C" EnumItem* __stdcall findItem(int value);

struct S {
    char pad[0x68];
    EnumItem* begin;
    EnumItem* end;
    EnumItem* getItem(int value);
};

EnumItem* S::getItem(int value)
{
    EnumItem* p = findItem(value);
    int idx = p->value;
    if (idx < 0)
        return 0;
    if ((unsigned int)idx >= (unsigned int)((end - begin)))
        return 0;
    return &begin[idx];
}
