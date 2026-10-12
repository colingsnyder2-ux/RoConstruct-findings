// from server: 98% by king_originala
struct Tag1 {
    Tag1() {}
};

struct Tag2 {
    Tag2() {}
};

struct Base {
    char storage[32];

    Base(const Tag1&, const Tag2&);
    ~Base();
};

struct Member {
    void* data;
    bool enabled;
    int count;

    Member();
};

struct S : Base {
    Member member;

    S();
};

S::S()
    : Base(Tag1(), Tag2()), member()
{
}
