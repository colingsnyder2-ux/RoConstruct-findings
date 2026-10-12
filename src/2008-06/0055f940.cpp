// from server: 72% by king_originala
struct Allocator {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual char *get();
};

extern Allocator allocator;

struct String {
    char *context;
    union {
        char small[16];
        char *large;
    } storage;
    unsigned length;
    unsigned capacity;

    String();
    ~String();
    void assign(const char *, unsigned);
};

__forceinline String::String()
{
    context = allocator.get() + 16;
}

extern String makeString(bool);
extern "C" unsigned __cdecl strlen(const char *);

#pragma intrinsic(strlen)

String makeResult(bool enabled)
{
    String result;
    const char *text;
    unsigned count;

    if (enabled) {
        static String value = makeString(true);
        text = value.capacity < 16 ? value.storage.small : value.storage.large;
        count = text ? strlen(text) : 0;
    } else {
        static String value = makeString(false);
        text = value.capacity < 16 ? value.storage.small : value.storage.large;
        count = text ? strlen(text) : 0;
    }

    result.assign(text, count);
    return result;
}
