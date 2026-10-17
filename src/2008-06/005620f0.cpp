// from server: 64% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Text {
    unsigned char storage[28];
    Text();
    Text& operator=(const Text&);
};

extern Text* (__thiscall* construct_text)(Text*);
extern Text& (__thiscall* assign_text)(Text*, const Text&);

inline Text::Text()
{
    construct_text(this);
}

inline Text& Text::operator=(const Text& other)
{
    return assign_text(this, other);
}

struct Extra {
    unsigned char storage[28];
    void assign(const Extra&);
};

struct Key {
    Text text;
    unsigned int value;
    Extra extra;
    Key();
    ~Key();
};

struct Mutex {
    unsigned char storage[8];
    void lock();
    void unlock();
};

struct Guard {
    Mutex* mutex;
    bool owns;
    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* p) : mutex(p), owns(false)
{
    mutex->lock();
    owns = true;
}

inline Guard::~Guard()
{
    if (owns)
        mutex->unlock();
}

struct Count {
    void* pointer;
    Count(Text*);
    ~Count();
    Count& operator=(const Count&);
};

struct Shared {
    Text* pointer;
    Count count;
    Shared(Text*);
    ~Shared();
};

inline Shared::Shared(Text* p) : pointer(p), count(p)
{
}

inline Shared::~Shared()
{
}

void __cdecl initialize_shared(Count*, Text*, Text*);

struct Formatter {
    unsigned char storage[80];
    Formatter(const Key&);
    ~Formatter();
    void write(Text*);
};

struct Entry {
    Text* pointer;
    Count count;
};

struct Map {
    Entry* find(const Key&);
};

struct Node {
    unsigned char links[8];
    Key key;
};

struct QueueState {
    unsigned char padding[20];
    Node* sentinel;
};

struct QueueProxy {
    QueueState* state;
};

struct S {
    unsigned char padding[0x130];
    Mutex inputMutex;
    QueueProxy* proxy;
    unsigned char padding2[16];
    Node** front;
    unsigned int size;
    unsigned char padding3[28];
    Mutex outputMutex;
    Map output;
    int f();
};

int S::f()
{
    Key key;
    {
        Guard input(&inputMutex);
        if (!size)
            return 0;

        Node* node = *front;
        QueueState* state;
        if (!proxy) {
            _invalid_parameter_noinfo();
            state = 0;
        } else {
            state = proxy->state;
        }

        if (node == state->sentinel)
            _invalid_parameter_noinfo();

        Key* source = &node->key;
        key.text = source->text;
        key.value = source->value;
        key.extra.assign(source->extra);
    }

    Text* text = new Text;
    Shared shared(text);
    initialize_shared(&shared.count, text, text);

    int result;
    try {
        Formatter(key).write(shared.pointer);
        result = 1;
        try {
            Guard outputGuard(&outputMutex);
            Entry* entry = output.find(key);
            entry->pointer = shared.pointer;
            entry->count = shared.count;
        } catch (...) {
            result = 0;
        }
    } catch (...) {
        result = 0;
    }

    return result;
}
