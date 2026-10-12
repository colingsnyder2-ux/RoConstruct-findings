// from server: 88% by king_originala
struct Base
{
    unsigned char reserved[0x374];

    Base();
    virtual ~Base();
};

struct ListenerA
{
    unsigned char reserved[0x20];

    ListenerA();
    virtual ~ListenerA();
};

struct ListenerB
{
    unsigned char reserved[0x20];

    ListenerB();
    virtual ~ListenerB();
};

struct S : Base, ListenerA, ListenerB
{
    void* first;
    void* second;
    bool active;

    S();
    virtual ~S();
};

S::S()
    : first(0), second(0), active(false)
{
}
