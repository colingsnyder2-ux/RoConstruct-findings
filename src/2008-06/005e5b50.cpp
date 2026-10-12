// from server: 73% by king_originala
struct ListenerList {
    char storage[0x20];
    void removeListener(void*);
    void addListener(void*);
};

struct World {
    char padding[0x2E4];
    ListenerList* listeners;
};

struct Parent {
    World* getWorld();
};

struct Prefix {
    char padding[0x130];
};

struct FirstListener {
    unsigned int value;
};

struct SecondListener {
    unsigned int value;
};

struct JointsService : Prefix, FirstListener, SecondListener {
    char padding[0x18];
    ListenerList* listeners;

    void setParent(void*, Parent*);
};

void JointsService::setParent(void*, Parent* parent)
{
    FirstListener* first = static_cast<FirstListener*>(this);
    if (listeners)
        listeners[0].removeListener(first);

    SecondListener* second = static_cast<SecondListener*>(this);
    if (listeners)
        listeners[1].removeListener(second);

    listeners = 0;
    if (parent) {
        World* world = parent->getWorld();
        if (world)
            listeners = world->listeners;
    }

    first = &static_cast<FirstListener&>(*this);
    if (listeners)
        listeners[0].addListener(first);

    second = &static_cast<SecondListener&>(*this);
    if (listeners)
        listeners[1].addListener(second);
}
