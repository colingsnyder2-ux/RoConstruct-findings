// from server: 63% by king_originala
struct FlagStand;
struct Context;
struct Owner;

struct Node {
    Node *next;
    Node *previous;
};

struct StandList {
    unsigned char data[20];
    Node *head;

    Node *insert(Node *, Node *, FlagStand *const *);
    void grow(int);
    void remove(FlagStand *const *);
};

struct Owner {
    unsigned char data[0x130];
    StandList stands;
};

struct Context {
    Owner *owner();
};

extern void callback();

struct Binding {
    void (*function)();
    int adjustment;
    int index;
    int extra;
    FlagStand *object;
    int padding;
};

struct Function {
    unsigned char data[40];

    Function(const Binding &);
    ~Function();
};

struct Connection {
    unsigned char data[12];

    ~Connection();
    Connection &operator=(const Connection &);
    void disconnect();
};

struct Scheduler {
    Connection connect(void *, const Function &, int);
};

extern Scheduler scheduler;

struct FlagStand {
    unsigned char data[0x3e8];
    Connection connection;

    void changed(Context *, Context *);
};

void FlagStand::changed(Context *previous, Context *current)
{
    if (!previous) {
        Owner *owner = current ? current->owner() : 0;
        Node *head = owner->stands.head;
        StandList *list = &owner->stands;
        FlagStand *value;
        Node *node = list->insert(head, head->previous, &(value = this));
        list->grow(1);
        head->previous = node;
        node->previous->next = node;

        volatile int extra;
        Binding binding;
        binding.function = callback;
        binding.index = 0;
        binding.adjustment = 0;
        binding.extra = extra;
        binding.object = this;

        Function function(binding);
        connection = scheduler.connect(
            this ? static_cast<void *>(reinterpret_cast<unsigned char *>(this) + 0x14) : 0,
            function, 10);
    }

    if (!current) {
        Owner *owner = previous ? previous->owner() : 0;
        previous = reinterpret_cast<Context *>(this);
        owner->stands.remove(reinterpret_cast<FlagStand *const *>(&previous));
        connection.disconnect();
    }
}
