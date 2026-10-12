// from server: 87% by king_originala
struct String;

extern bool (__cdecl *stringEqual)(const String&, const char*);
extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);
extern String& (__thiscall *stringAssign)(String*, const String&);
extern void (__cdecl *invalidParameter)();

struct String {
    unsigned char storage[28];
    String(const String&);
    ~String();
    String& operator=(const String&);
};

inline String::String(const String& other) {
    stringCopy(this, other);
}

inline String::~String() {
    stringDestroy(this);
}

inline String& String::operator=(const String& other) {
    return stringAssign(this, other);
}

struct Key {
    String text;
    unsigned char index;
    Key(const String&, unsigned char);
};

inline Key::Key(const String& textValue, unsigned char indexValue)
    : text(textValue), index(indexValue) {
}

struct Node {
    unsigned char padding[40];
    unsigned char index;
};

struct Container {
    unsigned char padding[24];
    Node* sentinel;
};

struct Proxy {
    Container* container;
};

struct Result {
    Proxy* proxy;
    Node* node;
    bool inserted;
};

struct Stream {
    void writeBits(const unsigned char*, int, bool);
};

extern void __cdecl writeString(Stream*, const String&);

struct S {
    unsigned char padding[32];
    String strings[128];
    int next;
    void encode(Stream*, const String&);
    Result* insert(Result*, const Key&);
    void remove(const String*);
};

void S::encode(Stream* stream, const String& text) {
    if (stringEqual(text, ">Authoring")) {
        unsigned char value = 0;
        stream->writeBits(&value, 8, true);
        return;
    }

    Result result;
    {
        Key key(text, (unsigned char)next);
        insert(&result, key);
    }

    if (!result.inserted) {
        Container* container;
        if (!result.proxy) {
            invalidParameter();
            container = 0;
        } else {
            container = result.proxy->container;
        }

        Node* node = result.node;
        if (node == container->sentinel)
            invalidParameter();

        unsigned char value = node->index;
        stream->writeBits(&value, 8, true);
        return;
    }

    remove(&strings[next]);
    strings[next] = text;
    unsigned char value = (unsigned char)next | 0x80;
    stream->writeBits(&value, 8, true);
    writeString(stream, text);
    next = next % 127 + 1;
}
