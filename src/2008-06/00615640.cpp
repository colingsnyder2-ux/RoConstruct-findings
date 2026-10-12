// from server: 60% by king_originala
struct String {
    char data[28];
    String(const String&);
    ~String();
};

struct Content {
    String text;
    int tag;
};

struct Payload {
    void assign(Content value);
};

struct Variant {
    char padding[16];
    Payload payload;
};

struct Descriptor {
    Content getContent(void* instance);
    void getVariant(void* instance, Variant* result);
};

void Descriptor::getVariant(void* instance, Variant* result)
{
    Content value = getContent(instance);
    result->payload.assign(value);
}
