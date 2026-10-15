// from server: 66% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
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
    virtual void getChildPosition(void* out) const;
    virtual void getSize(void* out) const;
};

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

struct TopMenuBar : GuiItem {
    bool isVisible() const;
    void render2d(void* adorn);
    void render2dImpl(void* adorn);
    void render2dOther(void* adorn);
};

extern "C" bool __fastcall sub_573130(void* adorn, void* rect);
extern "C" void __fastcall sub_5746e0(TopMenuBar* self, void* adorn, void* rect);
extern "C" void __fastcall sub_574cb0(TopMenuBar* self, void* adorn, void* rect);

void TopMenuBar::render2d(void* adorn)
{
    Vector2 pos;
    Vector2 size;
    this->getChildPosition(&pos);
    this->getSize(&size);

    Rect r;
    r.x = pos.x + size.x;
    r.y = pos.y + size.y;
    r.w = size.x;
    r.h = size.y;

    void* p = *(void**)((char*)adorn + 8);
    if (sub_573130(adorn, &r)) {
        sub_5746e0(this, adorn, p);
    } else {
        sub_574cb0(this, adorn, p);
    }
}
