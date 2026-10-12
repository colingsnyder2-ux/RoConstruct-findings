// from server: 93% by king_originala
struct InsertResult
{
    void* first;
    void* second;
    unsigned char inserted;
};

struct Base
{
    Base(const void*, const void*);
    ~Base();
};

struct S : Base
{
    S(unsigned char* first, unsigned char* last);
    InsertResult insert(unsigned char* position);
};

S::S(unsigned char* first, unsigned char* last)
    : Base(&first, &first)
{
    for (unsigned char* position = first; position != last; ++position)
        insert(position);
}
