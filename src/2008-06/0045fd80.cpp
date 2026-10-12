// from server: 94% by king_originala
struct Stopwatch
{
    void start();
    void stop();
};

struct Interface
{
    virtual ~Interface();
};

struct S : Stopwatch
{
    char padding[0x5c];
    int state;
    char padding2[0x54];
    Interface* first;
    Interface* second;

    void reset(int);
    void special();
    void finish();
    void f();
};

void S::f()
{
    start();
    reset(0);

    if (state == 2)
    {
        special();
        finish();
        return;
    }

    if (second)
    {
        delete first;
        first = 0;
        delete second;
    }

    finish();
}
