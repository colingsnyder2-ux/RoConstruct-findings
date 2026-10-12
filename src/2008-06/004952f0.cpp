// from server: 98% by king_originala
struct String {
    unsigned char data[32];
    String(const String&);
    ~String();
};

struct Value {
    unsigned char data[36];
    Value(const Value&);
};

Value __cdecl makeValue(String text, int tag);
int __cdecl consumeValue(int first, int second, Value value);

int __cdecl reconstruct(int first, int second, String text, int tag)
{
    return consumeValue(first, second, makeValue(text, tag));
}
