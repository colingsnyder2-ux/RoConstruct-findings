// from server: 88% by atomic.potato
struct Inner
{
    virtual int f(int, int, int);
};

struct Outer
{
    char pad0[4];
    int field4;
    Inner *field8;
    bool g(int);
};

extern "C" bool __fastcall Function_0068BF80(Inner *, int, int);

bool Outer::g(int arg)
{
    if (!Function_0068BF80(field8, 0, arg))
        return false;
    field4 = field8->f(arg, 0, 1);
    return true;
}
