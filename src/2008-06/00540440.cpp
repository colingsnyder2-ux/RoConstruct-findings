// from server: 76% by king_originala
struct Base {
    virtual ~Base();
};

struct Member {
    void cleanup();
    ~Member();
};

struct Bucket {
    Base base;
    unsigned char padding[8];
    Member member;
    ~Bucket();
};

#pragma optimize("", off)
Bucket::~Bucket()
{
    member.cleanup();
}
