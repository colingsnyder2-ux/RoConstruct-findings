// from server: 97% by king_originala
struct Cloneable {
    virtual ~Cloneable();
    virtual void reserved();
    virtual Cloneable* clone();
};

struct Value {
    void* data;
    Cloneable* owner;

    Value(const Value& other);
    ~Value();
    unsigned char* get();
};

inline Value::Value(const Value& other)
    : data(other.data)
{
    Cloneable* source = other.owner;
    Cloneable* copy;
    if (source)
        copy = source->clone();
    else
        copy = 0;
    owner = copy;
}

inline Value::~Value()
{
    if (owner)
        delete owner;
}

struct Arguments {
    virtual ~Arguments();
    virtual void set(int index, const Value& value);
};

struct DescribedBase {
    virtual ~DescribedBase();
};

namespace std {
    struct bad_cast {
        virtual ~bad_cast();
        const char* message;
        int ownsMessage;

        bad_cast(const char*);
    };
}

struct __multiple_inheritance Player;

struct S {
    char padding[0x38];
    void (Player::*callback)(unsigned char);
    Value value;

    void invoke(DescribedBase* object, Arguments* arguments);
};

struct EmptyBase {
};

struct Player : DescribedBase, EmptyBase {
};

void S::invoke(DescribedBase* object, Arguments* arguments)
{
    Value temporary(value);
    arguments->set(1, temporary);

    Player* player = dynamic_cast<Player*>(object);
    if (!player)
        throw std::bad_cast("bad cast");

    (player->*callback)(*temporary.get());
}
