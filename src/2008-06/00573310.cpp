// from server: 74% by colin
struct Vector2 {
    float x;
    float y;
};

struct Rect {
    float x;
    float y;
    float w;
    float h;
};

struct GuiTarget {
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
    virtual Vector2 getPosition();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual Vector2 getSize();
    Rect getMyRect();
};

Rect GuiTarget::getMyRect()
{
    Vector2 pos = getPosition();
    Vector2 size = getSize();
    Rect r;
    r.x = pos.x;
    r.y = pos.y;
    r.w = pos.x + size.x;
    r.h = pos.y + size.y;
    return r;
}
