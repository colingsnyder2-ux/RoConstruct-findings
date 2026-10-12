// from server: 77% by king_originala
struct Temporary {
    virtual ~Temporary();
};

struct Result {
    void finish();
};

struct Source;

struct Stage {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual Result* select(int);

    void accept(Temporary*);
    void f(Source*);
};

struct Source {
    virtual void slot0();
    virtual void slot1();
    virtual void advance();

    int getTemporary();
    int getValue();
    void attach(int);
};

void Stage::f(Source* source)
{
    Temporary* temporary =
        reinterpret_cast<Temporary*>(source->getTemporary());

    accept(temporary);

    if (temporary)
        delete temporary;

    int value = source->getValue();
    select(value)->finish();
    source->advance();
    source->attach(reinterpret_cast<int>(this));
}
