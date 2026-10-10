// from server: 47% by atomic.potato
struct String
{
    String(const String&);
};

struct EventDesc
{
    int value;
    int f(const String&);
};

int EventDesc::f(const String& value)
{
    String result(value);
    return (int)this;
}
