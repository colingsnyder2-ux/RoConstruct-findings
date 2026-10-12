// from server: 77% by king_originala
#pragma optimize("", off)

struct Base
{
    ~Base();
};

struct Bucket : Base
{
    ~Bucket();
    void cleanup();
};

Bucket::~Bucket()
{
    cleanup();
}
