// from server: 73% by king_originala
#pragma optimize("g", off)

struct Tag
{
    int value;
    Tag();
    Tag(const Tag&);
};

struct Mesh
{
    Mesh(Tag);
    ~Mesh();
};

struct Temporary
{
    int storage[10];
    Temporary();
    ~Temporary();
};

struct AggregateChunk : Mesh
{
    AggregateChunk(void* argument);
    void initialize(void* argument, const Temporary& value);
};

AggregateChunk::AggregateChunk(void* argument)
    : Mesh(Tag())
{
    initialize(argument, Temporary());
}
