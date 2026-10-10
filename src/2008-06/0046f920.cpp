// from server: 54% by atomic.potato
typedef unsigned char Byte;

struct LuaWriter
{
    int f(Byte);
};

extern "C" int MarshaledListener(void *, Byte *);

int LuaWriter::f(Byte value)
{
    return MarshaledListener((Byte *)((char *)this + 0x20), &value);
}
