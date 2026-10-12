// from server: 78% by king_originala
struct Base {
    char reserved[84];
    virtual ~Base();
};

struct S : Base {
    unsigned int flags;

    virtual ~S();
    void close();
};

S::~S()
{
    try {
        if ((flags & 1) && ((flags >> 4) & 1))
            close();
    } catch (...) {
    }
}
