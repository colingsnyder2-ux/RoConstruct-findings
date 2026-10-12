// from server: 89% by king_originala
struct Iterator {
    void* owner;
    char* position;

    Iterator();
    Iterator(const Iterator&);
};

inline Iterator::Iterator()
{
}

inline Iterator::Iterator(const Iterator& value)
    : owner(value.owner), position(value.position)
{
}

struct String {
    unsigned char storage[28];

    String(const String&);
    ~String();
    Iterator begin();
    Iterator end();
};

typedef void (__thiscall *StringCopyFunction)(String*, const String&);
typedef void (__thiscall *StringDestroyFunction)(String*);
typedef Iterator* (__thiscall *StringIteratorFunction)(String*, Iterator*);

extern StringCopyFunction stringCopy;
extern StringDestroyFunction stringDestroy;
extern StringIteratorFunction stringBegin;
extern StringIteratorFunction stringEnd;

inline String::String(const String& value)
{
    stringCopy(this, value);
}

inline String::~String()
{
    stringDestroy(this);
}

inline Iterator String::begin()
{
    Iterator result;
    return *stringBegin(this, &result);
}

inline Iterator String::end()
{
    Iterator result;
    return *stringEnd(this, &result);
}

struct IteratorTag {};

typedef int (__cdecl *CharacterFunction)(int);
extern CharacterFunction characterFunction;

extern Iterator* __cdecl transformRange(
    Iterator* result,
    char* first,
    char* last,
    void* destinationOwner,
    char* destinationPosition,
    CharacterFunction operation,
    IteratorTag,
    IteratorTag
);

struct ColorMap {
    int lookup(const String&);
    int find(const String&);
};

int ColorMap::find(const String& value)
{
    String copy(value);
    Iterator destination = copy.begin();
    Iterator last = copy.end();
    Iterator result;
    result.owner = last.owner;
    Iterator first = copy.begin();
    result.position = static_cast<char*>(first.owner);
    IteratorTag tag;

    transformRange(
        &result,
        first.position,
        last.position,
        destination.owner,
        destination.position,
        characterFunction,
        tag,
        IteratorTag()
    );

    return lookup(copy);
}
