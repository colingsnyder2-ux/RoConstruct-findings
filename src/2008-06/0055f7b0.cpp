// from server: 73% by king_originala
typedef __int64 Time;

struct String {
    char data[32];
};

struct Value {
    String text;
    Time expiration;
};

struct Calendar;

extern "C" {
    extern void (__cdecl *_invalid_parameter_noinfo)();
    extern Time (__cdecl *_time64)(Time*);
    extern Calendar* (__cdecl *_localtime64)(const Time*);
    extern bool (__cdecl *string_equal)(const String&, const char*);
}

void __cdecl convert_time(Time*, const Calendar*);

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct Guard {
    Mutex* mutex;
    bool locked;
    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* p) : mutex(p) {
    mutex->lock();
    locked = true;
}

inline Guard::~Guard() {
    if (locked)
        mutex->unlock();
}

struct Node {
    Node* next;
    Node* previous;
    Value value;
};

struct List;

struct Proxy {
    List* container;
};

struct Iterator {
    Proxy* owner;
    Node* node;
};

struct List {
    Proxy* proxy;
    char padding[16];
    Node* head;
    unsigned size;
    void erase(Iterator*, Iterator, Iterator);
};

struct S {
    char padding[0x130];
    Mutex mutex;
    char gap[0x1c];
    List entries;
    bool f(const char*);
};

bool S::f(const char* text) {
    Guard guard(&mutex);

    volatile Iterator storage;
    Iterator& end = const_cast<Iterator&>(storage);

    Node* head = entries.head;
    Proxy* owner = entries.proxy;

    Iterator current;
    current.node = head->next;
    storage.node = head;
    storage.owner = owner;
    current.owner = owner;

    for (;;) {
        if (!current.owner || current.owner != end.owner)
            _invalid_parameter_noinfo();

        if (current.node == end.node)
            break;

        if (!current.owner)
            _invalid_parameter_noinfo();

        List* container = current.owner ? current.owner->container : 0;
        if (current.node == container->head)
            _invalid_parameter_noinfo();

        Value* value = &current.node->value;
        Time raw;
        Time now;
        _time64(&raw);
        convert_time(&now, _localtime64(&raw));

        Time expiration = value->expiration;
        if (now >= expiration) {
            Iterator result;
            entries.erase(&result, current, end);
            break;
        }

        if (!current.owner)
            _invalid_parameter_noinfo();

        container = current.owner ? current.owner->container : 0;
        if (current.node == container->head)
            _invalid_parameter_noinfo();

        if (string_equal(value->text, text))
            return true;

        if (!current.owner)
            _invalid_parameter_noinfo();

        container = current.owner ? current.owner->container : 0;
        if (current.node == container->head)
            _invalid_parameter_noinfo();

        current.node = current.node->next;
    }

    return false;
}
