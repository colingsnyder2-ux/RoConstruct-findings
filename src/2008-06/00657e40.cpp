// from server: 74% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

extern void (__thiscall* destroyLocale)(void*);

namespace std {
    class locale {
        void* impl;
    public:
        ~locale();
    };

    __forceinline locale::~locale()
    {
        destroyLocale(this);
    }
}

struct CharacterFacet {
    char padding[16];
    const unsigned short* table;
};

const CharacterFacet& __cdecl getFacet(const std::locale&);

struct String {
    void* proxy;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    const char* data() const;
};

__forceinline const char* String::data() const
{
    if (capacity < 16)
        return storage.buffer;
    return storage.pointer;
}

struct Iterator {
    const String* owner;
    const char* position;

    Iterator(const Iterator&);
    bool operator!=(const Iterator&) const;
    Iterator& operator--();
    char operator*() const;
    Iterator& operator++();
};

__forceinline Iterator::Iterator(const Iterator& other)
    : owner(other.owner), position(other.position)
{
}

__forceinline bool Iterator::operator!=(const Iterator& other) const
{
    if (owner != reinterpret_cast<const String*>(-4) &&
        (!owner || owner != other.owner))
        _invalid_parameter_noinfo();
    return position != other.position;
}

__forceinline Iterator& Iterator::operator--()
{
    if (owner != reinterpret_cast<const String*>(-4)) {
        if (!owner)
            _invalid_parameter_noinfo();
        if (position <= owner->data())
            _invalid_parameter_noinfo();
    }
    --position;
    return *this;
}

__forceinline char Iterator::operator*() const
{
    if (owner != reinterpret_cast<const String*>(-4)) {
        if (!owner)
            _invalid_parameter_noinfo();
        if (position >= owner->data() + owner->length)
            _invalid_parameter_noinfo();
    }
    return *position;
}

__forceinline Iterator& Iterator::operator++()
{
    if (owner != reinterpret_cast<const String*>(-4)) {
        if (!owner)
            _invalid_parameter_noinfo();
        if (position >= owner->data() + owner->length)
            _invalid_parameter_noinfo();
    }
    ++position;
    return *this;
}

Iterator __cdecl trimEnd(Iterator first, Iterator last,
                         unsigned short mask, std::locale loc)
{
    Iterator cursor(last);
    while (cursor != first) {
        --cursor;
        unsigned char character = static_cast<unsigned char>(*cursor);
        if (!(getFacet(loc).table[character] & mask)) {
            ++cursor;
            return cursor;
        }
    }
    return first;
}
