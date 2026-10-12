// from server: 76% by king_originala
struct Tag {
    int value;
    Tag();
    Tag(const Tag&);
};

struct Base {
    Base(Tag);
    ~Base();
};

struct S : Base {
    S(int value);
    void initialize(int value, int* result);
};

#pragma strict_gs_check(on)
#pragma optimize("", off)
S::S(int value) : Base(Tag())
{
    int result = 0;
    initialize(value, &result);
}
