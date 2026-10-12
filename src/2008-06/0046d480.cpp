// from server: 94% by king_originala
struct Iterator {
    void* owner;
    char* position;
};

struct String {
    unsigned int words[7];
    ~String();
};

extern void (__thiscall* string_destroy)(String*);
extern Iterator* (__thiscall* string_begin)(String*, Iterator*);
extern Iterator* (__thiscall* string_end)(String*, Iterator*);

inline String::~String()
{
    string_destroy(this);
}

struct Object {
    char padding[0x3c];
    String value;
    String copy();
};

struct Flag {
    char value;
};

extern int (__cdecl* lowercase)(int);
extern Iterator* __cdecl transform(
    Iterator*, char*, char*, void*, char*,
    int (__cdecl*)(int), Object*, Flag);

struct Disposable {
    virtual void destroy(unsigned int);
};

struct Map {
    Object*& insert(const String&);
};

struct S {
    char padding[0x5c];
    Map objects;
    Disposable* find(const String&);
    void update(Object*);
};

void S::update(Object* volatile object)
{
    union Scratch {
        Iterator result;
        void* volatile owner;
        Flag flag;
    } scratch;

    Iterator firstStorage;
    Iterator lastStorage;
    Iterator outputStorage;
    String text = object->copy();

    Iterator* first = string_begin(&text, &firstStorage);
    void* firstOwner = first->owner;
    char* firstPosition = first->position;

    Iterator* last = string_end(&text, &lastStorage);
    void* lastOwner = last->owner;
    char* lastPosition = last->position;
    scratch.owner = lastOwner;

    Iterator* output = string_begin(&text, &outputStorage);
    void* outputOwner = output->owner;
    char* outputPosition = output->position;
    scratch.owner = outputOwner;

    scratch.flag.value = 0;
    transform(&scratch.result, outputPosition, lastPosition,
              firstOwner, firstPosition, lowercase, object, scratch.flag);

    Disposable* previous = find(text);
    if (previous)
        previous->destroy(1);

    objects.insert(text) = object;
}
