// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_stringencoderimport05f27d647b87f8fa.cpp

// Candidate translation unit (score above; library headers required).
#include <map>
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;

extern bool (__cdecl *stringEqual)(const String&, const char*);
extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);
extern String& (__thiscall *stringAssign)(String*, const String&);


struct String {
    unsigned int storage[7];
    __declspec(dllimport) String(const String&);
    ~String();
    String& operator=(const String&);
};

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

__declspec(dllimport) void __cdecl invalidParameter();
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
    void write(unsigned char value) { writeBits(&value,8,true); }
};

extern void __cdecl writeString(Stream*, const String&);

struct S {
    unsigned char padding[32];
    String strings[128];
    int next;
    void encode(Stream*, const String&);
    Result insert(const Key&);
    void remove(const String*);
};

void S::encode(Stream* stream, const String& text) {
    if (stringEqual(text, "")) {
        stream->write(0);
        return;
    }

    Result result = insert(Key(text, (unsigned char)next));

    if (!result.inserted) {
        Proxy* proxy=result.proxy;
        if (!proxy) invalidParameter();
        Container* container=proxy ? proxy->container : 0;
        Node* node=result.node;
        if(container->sentinel==node) invalidParameter();
        stream->write(node->index);
        return;
    }

    remove(&strings[next]);
    strings[next] = text;
    stream->write((unsigned char)next | 0x80);
    writeString(stream, text);
    next = next % 127 + 1;
}
