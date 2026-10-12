// from server: 83% by king_originala
#pragma optimize("", off)

struct Source {
    int m_x;
    int f();
};

struct Base {
    Base();
    virtual ~Base();
};

struct Bucket : Base {
    int value;

    Bucket(Source*);
    virtual ~Bucket();
    void set(int);
};

Bucket::Bucket(Source* source)
    : Base(), value(0)
{
    set(source->f());
}
