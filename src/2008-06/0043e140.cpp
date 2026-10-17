// from server: 27% by colin
struct Descriptor {
    virtual ~Descriptor();
    char padding[8];
};

struct Item : Descriptor {
    const void *owner;
    const int value;
    const unsigned int index;
};

struct ItemVector {
    Item **start;
    Item **finish;
    Item **end;
};

struct EnumDescriptor {
    char padding0[0x110];
    ItemVector allItems;
    char padding1[4];
    void *something;
    char padding2[4];
    void *other;
};

struct ScriptItem {
    char padding0[0x110];
    ItemVector items;
    char padding1[4];
    EnumDescriptor *descriptor;
    void convert(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void *__cdecl _RTDynamicCast(void *, int, void *, void *, int);
extern "C" void *__cdecl sub_6A17C6(void *, void *, void *, int, int);
extern "C" void __cdecl sub_618A40(void *, void *);
extern "C" void *__cdecl sub_6A0926();
extern "C" void __cdecl sub_44AE00(void *, void *);
extern "C" void __cdecl sub_43A320(EnumDescriptor *, void *, void *);

void ScriptItem::convert(int arg)
{
    Item **it = items.start;
    Item **end = items.finish;
    Item **last = items.end;

    if (it > last)
        _invalid_parameter_noinfo();

    Item **cur = it;
    Item **stop = end;

    if (items.start > stop)
        _invalid_parameter_noinfo();

    Item **check = items.start;
    if (it != 0 && it != check)
        _invalid_parameter_noinfo();

    while (cur != stop) {
        Item *item = *cur;
        void *key = item;
        void *result = 0;
        sub_43A320(descriptor, &result, &key);

        Item **r = (Item **)result;
        if (r != 0 && r != (Item **)descriptor->something)
            _invalid_parameter_noinfo();

        Item **r2 = (Item **)result;
        if (r2 != (Item **)descriptor->other) {
            if (r2 != 0)
                r2 = (Item **)*r2;
            if (r2 != 0)
                r2 = (Item **)*r2;

            Item **inner = (Item **)r2[7];
            Item **innerEnd = (Item **)r2[8];
            if (inner > innerEnd)
                _invalid_parameter_noinfo();

            Item **innerStart = (Item **)r2[4];
            if (innerStart != 0)
                innerStart = (Item **)*innerStart;

            if (innerStart != (Item **)r2[6])
                _invalid_parameter_noinfo();

            Item **innerEnd2 = (Item **)r2[8];
            if (inner > innerEnd2)
                _invalid_parameter_noinfo();

            Item **innerStart2 = (Item **)r2[4];
            if (innerStart2 != 0)
                innerStart2 = (Item **)*innerStart2;

            if (inner != innerEnd2) {
                while (inner != innerEnd2) {
                    void *v = *inner;
                    void *cast = _RTDynamicCast(v, 0, (void *)0x92907c, (void *)0x92e1c8, 0);
                    if (cast != 0) {
                        void *tmp;
                        sub_618A40(&tmp, cast);
                        void *g = sub_6A0926();
                        void *p = *(void **)((char *)g + 4);
                        sub_44AE00(p, &tmp);
                    }
                    inner += 2;
                }
            }
        }

        cur++;
    }
}
