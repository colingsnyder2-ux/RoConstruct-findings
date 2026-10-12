// from server: 87% by king_originala
struct Base {
    char reserved[84];
    virtual ~Base();
};

struct S : Base {
    unsigned int open : 1;
    unsigned int reservedFlags : 3;
    volatile unsigned int mode : 28;

    virtual ~S();
    void close();
};

S::~S()
{
    try {
        if (open && (mode & 1))
            close();
    } catch (...) {
    }
}
