// from server: 99% by king_originala
struct Target;
struct __multiple_inheritance S;

struct Pair {
    unsigned first;
    unsigned second;
    Pair();
    Pair(const Pair&);
    ~Pair();
};

inline Pair::~Pair()
{
}

extern Pair __cdecl makePair(Target*);

struct Placeholder {};

struct Callback {
    void (S::*function)();
    S* object;
    Placeholder placeholder;
};

struct Listener {
    void update(Target**);
};

struct Target {
    void connect(Callback);
};

struct Base1 {};
struct Base2 {};

struct S : Base1, Base2 {
    char padding[0x2c57];
    Listener listener;

    void update(Target*, unsigned);
    void apply(Pair, unsigned);
    void onEvent();
};

void S::update(Target* target, unsigned value)
{
    Target* original = target;
    if (original) {
        listener.update(&target);
        apply(makePair(original), value);

        Callback callback;
        callback.function = &S::onEvent;
        callback.object = this;
        original->connect(callback);
    }
}
