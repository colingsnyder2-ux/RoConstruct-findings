// from server: 55% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern "C" void (__stdcall *_invalid_parameter_noinfo)();

struct Record;

struct Handle {
    void* object;
    void* pointer;
    void* count;

    void attach(Record*);
    void disconnect();
};

struct Connection : Handle {
    bool active;

    Connection(const Connection&);
    ~Connection();
};

inline Connection::~Connection()
{
    if (active)
        disconnect();
}

struct Entry {
    Entry* next;
    Entry* previous;
    Connection value;
};

struct ConnectionList {
    char storage[20];
    Entry* head;
    unsigned int size;

    ConnectionList();
    Entry* create(Entry*, Entry*, const Handle*);
    void grow(unsigned int);
};

struct Owner;

struct Record {
    Owner* owner;
    void* argument;
    void (__cdecl *callback)();
    bool disabled;
    ConnectionList connections;
};

extern void __cdecl disconnect_callback();

struct Trackable {
    Handle connect(Connection);
};

struct State {
    State** proxy;
    unsigned int reserved[2];
    Trackable** first;
    Trackable** last;
    unsigned int capacity;
    Connection handle;
};

struct Iterator {
    State** proxy;
    Trackable** position;

    Trackable* get() const;
    void advance();
};

inline Trackable* Iterator::get() const
{
    State* owner;
    if (!proxy) {
        _invalid_parameter_noinfo();
        owner = 0;
    } else {
        owner = *proxy;
    }
    if (position >= owner->last)
        _invalid_parameter_noinfo();
    return *position;
}

inline void Iterator::advance()
{
    State* owner;
    if (!proxy) {
        _invalid_parameter_noinfo();
        owner = 0;
    } else {
        owner = *proxy;
    }
    if (position >= owner->last)
        _invalid_parameter_noinfo();
    ++position;
}

struct ScopedConnection : Handle {
    bool active;
    ~ScopedConnection();
};

inline ScopedConnection::~ScopedConnection()
{
    if (active)
        disconnect();
}

struct Guard {
    char storage[20];

    Guard(Handle*);
    ~Guard();
    void finish(Handle*);
};

struct Owner {
    State* state;
    void connect();
};

void Owner::connect()
{
    Record* record = new Record;
    record->owner = this;
    record->argument = 0;
    record->disabled = false;
    record->callback = disconnect_callback;
    state->handle.attach(record);

    Guard guard(&state->handle);

    State* container = state;
    Trackable** position = container->first;
    if (position > container->last)
        _invalid_parameter_noinfo();

    Iterator iterator;
    iterator.proxy = container->proxy;
    iterator.position = position;

    for (;;) {
        container = state;
        Trackable** end = container->last;
        if (container->first > end)
            _invalid_parameter_noinfo();

        if (!iterator.proxy || iterator.proxy != container->proxy)
            _invalid_parameter_noinfo();

        if (iterator.position == end)
            break;

        Handle result = iterator.get()->connect(state->handle);

        ScopedConnection value;
        value.object = result.object;
        value.pointer = result.pointer;
        value.count = result.count;
        value.active = true;

        Entry* head = record->connections.head;
        Entry* entry = record->connections.create(
            head, head->previous, &result);
        record->connections.grow(1);
        head->previous = entry;
        entry->previous->next = entry;
        value.active = false;

        iterator.advance();
    }

    Handle finalConnection;
    guard.finish(&finalConnection);
    finalConnection.disconnect();
    state->handle.active = true;
}
