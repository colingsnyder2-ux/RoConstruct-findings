// from server: 57% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Text {
    const char* __thiscall c_str() const;
};

struct Entry {
    int reserved0;
    Text* text;
    int reserved8;
    int value;
};

struct Sequence {
    void* reserved[4];
    Entry** finish;
};

struct Proxy {
    Sequence* owner;
};

struct Collection {
    char reserved[16];
    Proxy* proxy;
    int reserved20;
    int reserved24;
    Entry** first;
    Entry** last;
};

struct Source {
    char reserved[24];
    Collection* collection;
};

struct Sink {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void append(const char*, int, int);
};

struct Part0 {
    virtual void v0();
    char reserved[28];
};

struct Part1 {
    virtual void v1();
    char reserved0[160];
    Sink* sink;
    char reserved1[76];
};

struct Part2 {
    virtual void v2();
};

struct Base : Part0, Part1, Part2 {
    Base(Source*, int);
    ~Base();
};

struct ScriptItem : Base {
    ScriptItem(Source*, int);
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct Iterator {
    Proxy* proxy;
    Entry** position;

    Entry* get() const {
        Sequence* owner;
        if (proxy)
            owner = proxy->owner;
        else {
            _invalid_parameter_noinfo();
            owner = 0;
        }
        if (position >= owner->finish)
            _invalid_parameter_noinfo();
        return *position;
    }

    void advance() {
        Sequence* owner;
        if (proxy)
            owner = proxy->owner;
        else {
            _invalid_parameter_noinfo();
            owner = 0;
        }
        if (position >= owner->finish)
            _invalid_parameter_noinfo();
        ++position;
    }
};

ScriptItem::ScriptItem(Source* source, int argument)
    : Base(source, argument)
{
    Collection* collection = source->collection;
    Entry** first = collection->first;
    if (first > collection->last)
        _invalid_parameter_noinfo();

    Iterator current;
    current.proxy = collection->proxy;
    current.position = first;

    collection = source->collection;
    Entry** last = collection->last;
    if (collection->first > last)
        _invalid_parameter_noinfo();

    Proxy* endProxy = collection->proxy;
    for (;;) {
        if (!current.proxy || current.proxy != endProxy)
            _invalid_parameter_noinfo();
        if (current.position == last)
            break;

        Sink* destination = sink;
        const char* text = current.get()->text->c_str();
        int value = current.get()->value;
        destination->append(text, value, -1);
        current.advance();
    }
}
