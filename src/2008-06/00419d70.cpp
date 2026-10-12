// from server: 59% by king_originala
struct Value {
    char data[36];
    Value(const Value&);
};

struct Object {
    char padding[8];
    char data[8];
    Value source;

    void invoke(void*, Value);
};

void __cdecl function(Object** object)
{
    Object* p = *object;
    p->invoke(p->data, p->source);
}
