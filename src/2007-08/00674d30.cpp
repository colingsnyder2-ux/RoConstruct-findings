// from server: 23% by colin
struct CXTPCustomizeSheet {
    void func_00674d30(int);
};

struct Inner {
    char pad[0x2c];
    int count;
    char pad2[0x28];
    int *items;
};

struct Obj {
    char pad[0x14];
    Inner *inner;
    char pad2[0x8];
    int index;
};

struct Other {
    char pad[0x58];
    void *field_58;
};

struct Base {
    virtual void vfunc(int);
};

struct Derived {
    char pad[0xb8];
    Other *field_b8;
};

extern "C" void *__stdcall sub_77ddb8(const char *);
extern "C" void __stdcall sub_77ddbc(void *);
extern "C" void __stdcall sub_6c7dc0(void *, void *);

void CXTPCustomizeSheet::func_00674d30(int arg)
{
    Obj *obj = (Obj *)arg;
    if (obj->inner == 0) {
        Inner *inner = obj->inner;
        int idx = obj->index;
        int *item;
        if (idx >= 0 && idx < inner->count) {
            item = inner->items + idx;
        } else {
            item = 0;
        }
        Other *other = ((Derived *)this)->field_b8;
        void *p = other->field_58;
        if (p != 0) {
            void *tmp;
            (*(void (__thiscall **)(void *, void **))(*(int *)p + 0x58))(p, &tmp);
            sub_6c7dc0(item, tmp);
        } else {
            void *tmp = sub_77ddb8("list<T> too long");
            sub_6c7dc0(item, tmp);
            sub_77ddbc(tmp);
        }
    }
    (*(void (__thiscall **)(int, int))(*(int *)arg))(arg, 1);
}
