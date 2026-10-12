// from server: 69% by king_originala
struct Text {
    unsigned char data[28];
    Text(const char*);
    ~Text();
};

extern Text* (__thiscall *textConstruct)(Text*, const char*);
extern void (__thiscall *textDestroy)(Text*);
extern void (__cdecl *invalidParameter)();

inline Text::Text(const char* value)
{
    textConstruct(this, value);
}

inline Text::~Text()
{
    textDestroy(this);
}

struct Record {
    int number;
    Text text;
    Record(int, const char*);
};

inline Record::Record(int value, const char* name)
    : number(value), text(name)
{
}

struct Node {
    unsigned char padding[40];
    Record* value;
};

struct Tree {
    Tree* container;
    unsigned char padding[20];
    Node* sentinel;
};

struct Pair {
    Text key;
    Record* value;
};

struct Iterator {
    Tree* owner;
    Node* node;
    Pair* dereference();
};

struct StringMap {
    Tree* proxy;
    unsigned char padding[20];
    Node* sentinel;
    Iterator find(const Text&);
    Record*& index(const Text&);
};

struct NumberMap {
    Record*& index(const int&);
};

struct Mutex {
    void lock();
    void unlock();
};

struct Guard {
    Mutex* mutex;
    bool locked;
    Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* value)
    : mutex(value)
{
    mutex->lock();
    locked = true;
}

inline Guard::~Guard()
{
    mutex->unlock();
}

extern void __cdecl initialize(void (__cdecl *)(), int*);
extern void __cdecl initializeEmpty();
extern void __cdecl initializeNames();
extern int emptyFlag;
extern int namesFlag;
extern Record* emptyRecord;
extern Mutex* __cdecl getMutex();
extern StringMap* __cdecl getStringMap();
extern NumberMap* __cdecl getNumberMap();
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

Record* __cdecl f(const char* name, int number)
{
    if (!name) {
        initialize(initializeEmpty, &emptyFlag);
        return emptyRecord;
    }

    initialize(initializeNames, &namesFlag);
    Guard guard(getMutex());
    Iterator current = getStringMap()->find(Text(name));
    StringMap* map = getStringMap();
    Node* finish = map->sentinel;
    Tree* owner = current.owner;

    if (!owner || owner != map->proxy)
        invalidParameter();

    Record* result;
    if (current.node != finish) {
        if (number != -1) {
            current.dereference()->value->number = number;
            Record** value = &current.dereference()->value;
            getNumberMap()->index(number) = *value;
        }

        Tree* container;
        if (!owner) {
            invalidParameter();
            container = owner;
        } else {
            container = owner->container;
        }

        if (current.node == container->sentinel)
            invalidParameter();

        result = current.node->value;
    } else {
        result = new Record(number, name);
        getStringMap()->index(Text(name)) = result;
        getNumberMap()->index(number) = result;
    }
    return result;
}
