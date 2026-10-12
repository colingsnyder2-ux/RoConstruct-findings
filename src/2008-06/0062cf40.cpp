// from server: 71% by king_originala
struct FlagStand;
struct Owner;

struct Node {
    Node *next;
    Node *prev;
};

struct Container {
    unsigned char padding[20];
    Node *head;
    Node *insert(Node *, Node *, FlagStand *const *);
    void grow(unsigned int);
    void remove(FlagStand *const *);
};

struct Owner {
    unsigned char padding[0x130];
    Container objects;
};

struct Argument {
    Owner *getOwner();
};

#pragma pointers_to_members(full_generality, multiple_inheritance)

struct Bind {
    void (FlagStand::*function)();
    unsigned long padding;
    unsigned long extra;
    FlagStand *object;
};

struct Function {
    unsigned char data[40];
    Function(const Bind &);
    ~Function();
};

struct Connection {
    unsigned char data[12];
    ~Connection();
    Connection &assign(const Connection &);
    void disconnect();
};

struct Dispatcher {
    Connection connect(void *, const Function &, int);
};

extern Dispatcher dispatcher;

struct FlagStand {
    unsigned char padding[0x3e8];
    Connection connection;
    void callback();
    void changed(Argument *, Argument *);
};

void FlagStand::changed(Argument *oldValue, Argument *newValue)
{
    if (!oldValue) {
        Owner *owner = newValue ? newValue->getOwner() : 0;
        Container *container = &owner->objects;
        Node *head = container->head;
        FlagStand *value = this;
        Node *node = container->insert(head, head->prev, &value);
        container->grow(1);
        head->prev = node;
        node->prev->next = node;

        volatile unsigned long extra;
        Bind bind = { &FlagStand::callback, 0, extra, this };

        Function function(bind);
        connection.assign(dispatcher.connect(
            this ? reinterpret_cast<unsigned char *>(this) + 0x14 : 0,
            function, 10));
    }

    if (!newValue) {
        Owner *owner = oldValue ? oldValue->getOwner() : 0;
        oldValue = reinterpret_cast<Argument *>(this);
        owner->objects.remove(
            reinterpret_cast<FlagStand *const *>(&oldValue));
        connection.disconnect();
    }
}
