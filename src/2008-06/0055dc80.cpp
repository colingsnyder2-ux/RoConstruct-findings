// from server: 83% by king_originala
struct String;
struct Stream;

extern void (__thiscall *stream_construct)(Stream*, const String&, int, int);
extern void (__thiscall *stream_destroy)(Stream*);

struct Stream
{
    char storage[148];
    Stream(const String&, int);
    ~Stream();
};

inline Stream::Stream(const String& text, int mode)
{
    stream_construct(this, text, mode, 1);
}

inline Stream::~Stream()
{
    stream_destroy(this);
}

struct Value
{
    char storage[32];
    ~Value();
    void read(void*, Stream&);
};

void reconstruct(Value value, void* context, const String& text)
{
    try
    {
        try
        {
            Stream input(text, 1);
            value.read(context, input);
        }
        catch (...)
        {
        }
    }
    catch (...)
    {
    }
}
