// from server: 86% by king_originala
struct String;

extern bool (__cdecl *string_equal)(const String&, const char*);
extern String* (__thiscall *string_copy)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);
extern String* (__thiscall *string_assign)(String*, const String&);
extern void (__cdecl *invalid_parameter)();

struct String {
    unsigned char storage[28];
    String(const String& s) { string_copy(this, s); }
    ~String() { string_destroy(this); }
    String& operator=(const String& s) { return *string_assign(this, s); }
};

struct Key {
    String text;
    unsigned char index;
    Key(const String& s, unsigned char i) : text(s), index(i) {}
};

struct Node {
    unsigned char padding[40];
    unsigned char index;
};

struct Tree {
    unsigned char padding[24];
    Node* end;
};

struct Result {
    Tree** owner;
    Node* node;
    bool inserted;
};

struct Stream {
    void write(const unsigned char*, int, bool);
};

extern void __cdecl write_string(Stream*, const String&);

struct S {
    unsigned char padding[32];
    String strings[128];
    int next;

    Result find(const Key&);
    void remove(const String&);
    void f(Stream*, const String&);
};

void S::f(Stream* stream, const String& text)
{
    if (string_equal(text, ">Authoring")) {
        unsigned char value = 0;
        stream->write(&value, 8, true);
        return;
    }

    Result result = find(Key(text, (unsigned char)next));

    if (!result.inserted) {
        Tree* tree;
        if (!result.owner) {
            invalid_parameter();
            tree = 0;
        } else {
            tree = *result.owner;
        }

        Node* node = result.node;
        if (node == tree->end)
            invalid_parameter();

        unsigned char value = node->index;
        stream->write(&value, 8, true);
        return;
    }

    remove(strings[next]);
    strings[next] = text;

    unsigned char value = (unsigned char)next | 0x80;
    stream->write(&value, 8, true);
    write_string(stream, text);
    next = next % 127 + 1;
}
