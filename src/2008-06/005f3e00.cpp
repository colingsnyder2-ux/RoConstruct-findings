// from server: 78% by king_originala
struct Base {
    virtual ~Base();
    unsigned char storage[84];
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
    }
    catch (...) {
    }
}
