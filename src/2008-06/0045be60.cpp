// from server: 91% by king_originala
struct Object
{
    virtual ~Object();
};

struct S
{
    char padding0[0x5c];
    int state;
    char padding1[0x54];
    Object* first;
    Object* second;

    void alternate();
    void cleanup();
};

void S::cleanup()
{
    if (state == 2)
    {
        alternate();
        return;
    }

    if (second)
    {
        delete first;
        first = 0;
        delete second;
    }
}
