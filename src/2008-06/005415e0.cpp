// from server: 78% by king_originala
struct Reference {
    unsigned long value;
    Reference(const Reference&);
};

struct Base {
    Base(int, Reference);
    ~Base();
    void initialize();
};

struct S : Base {
    S(int, const Reference&);
};

#pragma optimize("", off)
S::S(int arg, const Reference& reference)
    : Base(arg, reference)
{
    initialize();
}
#pragma optimize("", on)
