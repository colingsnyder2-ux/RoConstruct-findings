// from server: 76% by king_originala
#pragma optimize("g", off)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Source;

struct Object {
    char data[36];
    Object();
    void update(Source*);
};

struct Handle {
    Object* value;
    Handle();
    ~Handle();
    Handle& operator=(const Handle&);
    void reset(Object*);
    Object* operator->();
};

struct B {
    void destroy();
};

struct Key {
    char data[8];
    B member;
    Key(Source*);
    ~Key();
};

struct Entry {
    char key[12];
    Handle value;
};

struct Iterator {
    char data[8];
    bool operator==(const Iterator&) const;
    Entry& operator*() const;
};

struct Map {
    Iterator find(const Key&);
    Iterator end();
    Handle& operator[](const Key&);
};

struct S {
    char padding[8];
    Map map;
    void f(Source*);
};

void S::f(Source* source)
{
    Handle handle;
    {
        Key key(source);
        Iterator position = map.find(key);
        if (position == map.end()) {
            handle.reset(new Object);
            map[key] = handle;
        } else {
            handle = (*position).value;
        }
    }
    handle->update(source);
}
