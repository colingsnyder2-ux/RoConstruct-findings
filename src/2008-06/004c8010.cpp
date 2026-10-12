// from server: 74% by king_originala
struct Owner;

struct Tag {
    char value;
    Tag();
    ~Tag();
};

Tag::Tag() : value(0) {}
Tag::~Tag() {}

struct Item {
    char storage;
    bool prepare(Owner*, Owner*, Tag);
    bool attach(void*, void**, Tag);
    bool insert(Owner*);
};

struct Header {
    void* reserved;
    Owner* owner;
    void* extra;
};

struct Association : Header, Item {
};

struct Owner {
    char reserved[8];
    void* object;
    char padding[0x274];
    Association association;
    void release();
};

extern void __cdecl transfer(void*, void*, void*, void*);

bool Item::insert(Owner* value)
{
    if (prepare(value, value, Tag()))
        return true;

    Owner* last = static_cast<Association*>(this)->owner;
    Owner* middle = static_cast<Association*>(this)->owner;
    Owner* first = static_cast<Association*>(this)->owner;

    transfer(value ? &value->association : 0,
             (char*)first + 0x280,
             (char*)middle + 0x284,
             (char*)last + 0x288);

    void* result;
    try {
        if (attach(value->object, &result, Tag()))
            return true;
        else {
            value->release();
            return false;
        }
    }
    catch (...) {
        value->release();
        throw;
    }
}
