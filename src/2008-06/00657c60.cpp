// from server: 61% by king_originala
extern "C" void (__cdecl* const invalidParameter)();

namespace std {
    struct locale {
        void* impl;
        ~locale() throw();
    };
}

extern void (__thiscall* const destroyLocale)(std::locale*);

__forceinline std::locale::~locale() throw()
{
    destroyLocale(this);
}

struct String {
    void* proxy;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

struct Iterator {
    String* owner;
    const char* position;

    Iterator(String*, const char*);
};

inline Iterator::Iterator(String* s, const char* p)
    : owner(s), position(p)
{
}

struct Facet {
    char reserved[16];
    const unsigned short* table;
};

extern const Facet& __cdecl getFacet(const std::locale&);

Iterator __cdecl skipCharacters(
    Iterator first,
    Iterator last,
    volatile unsigned short mask,
    std::locale loc)
{
    String* owner = first.owner;
    const char* position = first.position;

    for (;;) {
        if (owner != reinterpret_cast<String*>(-4) &&
            (!owner || owner != last.owner))
            invalidParameter();

        if (position == last.position)
            break;

        if (owner != reinterpret_cast<String*>(-4)) {
            if (!owner)
                invalidParameter();

            const char* data = owner->capacity >= 16
                ? owner->storage.pointer
                : owner->storage.buffer;

            if (position >= data + owner->length)
                invalidParameter();
        }

        unsigned char ch = static_cast<unsigned char>(*position);
        unsigned short classification = mask;
        if (!(getFacet(loc).table[ch] & classification))
            break;

        if (owner != reinterpret_cast<String*>(-4)) {
            if (!owner)
                invalidParameter();

            const char* data = owner->capacity >= 16
                ? owner->storage.pointer
                : owner->storage.buffer;

            if (position >= data + owner->length)
                invalidParameter();
        }

        ++position;
    }

    return Iterator(owner, position);
}
