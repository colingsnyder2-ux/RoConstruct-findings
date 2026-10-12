// from server: 91% by king_originala
struct Vec2 {
    float x, y;
};

struct GuiItem {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual Vec2 size();
};

struct Entry {
    void* object;
    void* owner;
};

struct Children {
    char padding[12];
    Entry* first;
    Entry* last;
};

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern "C" void* __cdecl cast_object(void*, long, void*, void*, int);

struct S {
    char padding0[264];
    Children* children;
    char padding1[72];
    int direction;

    unsigned count();
    Vec2 f();
};

static inline const float& maximum(const float& a, const float& b)
{
    return a < b ? b : a;
}

Vec2 S::f()
{
    Vec2 result;
    result.x = 0.0f;
    result.y = 0.0f;

    for (unsigned i = 0; i < count(); ++i) {
        Children* c = children;
        if (i >= (unsigned)(c->last - c->first))
            _invalid_parameter_noinfo();

        GuiItem* item = (GuiItem*)cast_object(
            c->first[i].object, 0, (void*)0x92907c, (void*)0x92b8d8, 0);

        if (item) {
            Vec2 extent = item->size();
            switch (direction) {
            case 0:
                result.x += extent.x;
                result.y = maximum(result.y, extent.y);
                break;
            case 1:
                result.x = maximum(result.x, extent.x);
                result.y += extent.y;
                break;
            }
        }
    }
    return result;
}
