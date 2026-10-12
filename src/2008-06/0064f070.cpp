// from server: 81% by king_originala
struct Value {
    float data[4];
};

struct Painter {
    void draw(void *, bool);
};

struct ImageWidget {
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
    virtual bool enabled();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual bool evaluate(const Value &);

    char padding[0x144];
    Painter painter;

    Value getValue(int);
    void render(void *);
};

void ImageWidget::render(void *context)
{
    if (enabled())
        painter.draw(context, evaluate(getValue(0)));
}
