// from server: 61% by king_originala
struct Cloneable {
    virtual ~Cloneable();
    virtual void reserved();
    virtual Cloneable* clone();
};

struct String {
    char data[28];
    String(const String&);
};

struct Argument {
    void* value;
    Cloneable* owner;

    Argument(const Argument& other)
        : value(other.value), owner(other.owner ? other.owner->clone() : 0) {}
    ~Argument() {
        if (owner)
            delete owner;
    }

    int* integer();
    String* string();
};

struct Arguments {
    virtual void reserved();
    virtual void read(int index, Argument* argument);
};

struct DescribedBase {
    virtual ~DescribedBase();
};

struct Client : DescribedBase {
};

typedef void (__thiscall *ClientFunction)(Client*, String, int, int, int);

struct BoundFuncDesc {
    char padding[56];
    ClientFunction function;
    int adjustment;
    Argument first;
    Argument second;
    Argument third;
    Argument fourth;

    void invoke(DescribedBase* object, Arguments* arguments);
};

void BoundFuncDesc::invoke(DescribedBase* object, Arguments* arguments) {
    Argument a(first);
    arguments->read(1, &a);

    Argument b(second);
    arguments->read(2, &b);

    Argument c(third);
    arguments->read(3, &c);

    Argument d(fourth);
    arguments->read(4, &d);

    Client& client = dynamic_cast<Client&>(*object);
    function(reinterpret_cast<Client*>(
                 reinterpret_cast<char*>(&client) + adjustment),
             *a.string(), *b.integer(), *c.integer(), *d.integer());
}
