// from server: 97% by king_originala
struct Primary {
    virtual ~Primary();
    char padding[0x50];
};

struct Secondary {
    virtual ~Secondary();
    char padding[0x3c];
};

struct Base : Primary, Secondary {
    Base();
    virtual ~Base();
};

struct Tag {
    Tag();
};

inline Tag::Tag() {}

struct Tree {
    char storage[0x20];
    Tree(const Tag&, const Tag&);
    ~Tree();
};

struct Member {
    int storage[2];
    Member();
    ~Member();
};

struct Content {
    int storage[3];
    Content();
    ~Content();
};

struct S : Base {
    int value;
    Tree tree;
    bool flag;
    Member member;
    Content content;

    S();
    virtual ~S();
};

S::S()
    : Base(),
      value(0),
      tree(Tag(), Tag()),
      flag(false),
      member(),
      content()
{
}
