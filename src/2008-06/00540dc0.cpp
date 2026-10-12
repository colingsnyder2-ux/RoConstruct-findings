// from server: 77% by king_originala
#pragma optimize("", off)

struct Base {
    ~Base();
};

struct S : Base {
    void destroy();
    ~S();
};

S::~S()
{
    destroy();
}
