// from server: 75% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct String {
    char storage[28];
    String(const String&);
    ~String();
};

struct Key {
    String text;
    int number;
};

struct Control {
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    long strong;
    long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared();
    ~Shared();
};

inline Shared::Shared() : object(0), control(0) {}

inline Shared::~Shared()
{
    if (control && --control->strong == 0) {
        control->dispose();
        if (--control->weak == 0)
            control->destroy();
    }
}

struct Value {
    String text;
    int number;
    Shared value;
    Value(const Key&, const Shared&);
};

inline Value::Value(const Key& key, const Shared& initial)
    : text(key.text), number(key.number), value(initial)
{
}

struct Node {
    char links[12];
    Key key;
    Shared value;
};

struct Channel;

struct Owner {
    Channel* container;
};

struct Iterator {
    Owner* owner;
    Node* node;
};

extern bool __cdecl key_less(const Key&, const Key&);

struct Channel {
    Owner* owner;
    char padding[20];
    Node* end;

    Node* find(const Key&);
    Iterator* insert(Iterator*, Owner*, Node*, const Value&);
    Shared* get(const Key&);
};

Shared* Channel::get(const Key& key)
{
    Node* position = find(key);

    if (!this)
        _invalid_parameter_noinfo();

    Owner* identity = owner;
    Node* finish = end;

    if (!identity)
        _invalid_parameter_noinfo();

    if (position == finish || key_less(key, position->key)) {
        Shared empty;
        Value entry(key, empty);
        Iterator result;
        Iterator* inserted = insert(&result, identity, position, entry);
        identity = inserted->owner;
        position = inserted->node;
    }

    Channel* container;
    if (!identity) {
        _invalid_parameter_noinfo();
        container = reinterpret_cast<Channel*>(identity);
    } else {
        container = identity->container;
    }

    if (position == container->end)
        _invalid_parameter_noinfo();

    return &position->value;
}
