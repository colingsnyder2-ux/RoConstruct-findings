// from server: 46% by king_originala
struct String
{
    unsigned char storage[28];
    String();
    ~String();
};

struct Value
{
    void* object;
    void* owner;
    ~Value();
};

struct Reader
{
    void read(Value*, Reader**, String*);
};

struct HeadBuilder
{
    void build(Reader*, int, Value);
};

void HeadBuilder::build(Reader* reader, int unused, Value value)
{
    String text;
    reader->read(&value, &reader, &text);
    if (reader == reinterpret_cast<Reader*>(1))
        return;
}
