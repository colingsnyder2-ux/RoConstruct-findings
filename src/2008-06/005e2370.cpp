// from server: 83% by king_originala
struct Color {
    float r, g, b;
};

struct Prefix {
    char padding[0x14];
};

struct Base {
    char padding[0x268];
};

struct Property;

struct Signal {
    void fire(char*, int);
};

struct Entry {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    Entry* find(Base*);
};

struct Provider {
    void update();
};

struct S : Prefix, Base {
    float r, g, b;

    void notify(Property*);
    void setColor(Color);
};

extern Property colorProperty;
extern Registry registry;
extern Provider* __cdecl findProvider(S*);

void S::setColor(Color value)
{
    if (r != value.r || g != value.g || b != value.b) {
        r = value.r;
        g = value.g;
        b = value.b;

        notify(&colorProperty);

        Entry* entry = registry.find(static_cast<Base*>(this));
        if (entry) {
            char token;
            entry->signal.fire(&token, 0);
        }

        Provider* provider = findProvider(this);
        if (provider)
            provider->update();
    }
}
