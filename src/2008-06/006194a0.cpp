// from server: 74% by king_originala
struct S;
struct Flag;
struct Manager;
struct Link;

struct Pair {
    void* object;
    void* control;
    Pair(const Pair&);
};

struct FunctionPointer {
    void (__cdecl *entry)();
    int adjustment;
    int index;

    FunctionPointer(void (__cdecl *)());
};

inline FunctionPointer::FunctionPointer(void (__cdecl *p)())
    : entry(p), adjustment(0), index(0)
{
}

struct Binding {
    unsigned char data[24];
    Binding(const Binding&);
};

struct Callback {
    unsigned char data[32];
    Callback(Binding, int);
    Callback(const Callback&);
};

struct Handler {
    void submit(Callback, double);
};

struct Instance {
    unsigned char padding[0x1b4];
    int state;
    Handler* getHandler();
    Instance* getInstance();
};

struct Connection {
    unsigned char data[20];
    void disconnect();
};

struct Flag {
    void prepare();
};

struct Link {
    void attach(Flag*);
};

struct Manager {
    int contains(Flag*);
    Link* find(Flag*);
};

struct S {
    unsigned char padding[0x268];
    Instance* instance;
    unsigned char gap[8];
    Connection connection;
    Handler* handler;

    void update(Instance*, Instance*);
};

extern const double delay;
extern unsigned char instanceType[];
extern unsigned char flagType[];

extern void __cdecl callbackEntry();
extern Pair __cdecl makePair(S*);
extern Binding __cdecl makeBinding(FunctionPointer, Pair);
extern Manager* __cdecl getManager(S*);
extern void* __cdecl castObject(void*, int, void*, void*, int);

void S::update(Instance* previous, Instance* current)
{
    if (!previous) {
        handler = current ? current->getHandler() : 0;
        handler->submit(
            Callback(makeBinding(FunctionPointer(callbackEntry), makePair(this)), 0),
            delay);
    }

    if (!current) {
        connection.disconnect();

        Instance* object = previous ? previous->getInstance() : 0;
        if (object->state == 1 && instance) {
            Flag* flag = static_cast<Flag*>(
                castObject(instance, 0, instanceType, flagType, 0));

            flag->prepare();

            Manager* manager = getManager(this);
            if (!manager->contains(flag)) {
                Link* link = manager->find(flag);
                if (link)
                    link->attach(flag);
            }
        }
    }
}
