// from server: 91% by king_originala
struct Input {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual short x();
    virtual short y();
};

struct Item {
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
    virtual void v23();
    virtual void update(Input *);
};

struct Point {
    float x, y;
};

extern Point position;
extern char instanceType;
extern char itemType;

extern "C" void *__cdecl castObject(void *, long, void *, void *, int);
extern "C" void (__cdecl *invalidParameter)();

struct Entry {
    void *object;
    void *control;
};

struct Children {
    char padding[12];
    Entry *begin;
    Entry *end;
};

struct Root {
    char padding[0x108];
    Children *children;
    unsigned count();
    void update(Input *);
};

void Root::update(Input *input)
{
    short y = input->y();
    short x = input->x();
    position.x = (float)x;
    position.y = (float)y;

    for (unsigned i = 0; i < count(); ++i) {
        Children *list = children;
        if (i >= (unsigned)(list->end - list->begin))
            invalidParameter();

        Item *item = (Item *)castObject(
            list->begin[i].object, 0, &instanceType, &itemType, 0);

        if (item)
            item->update(input);
    }
}
