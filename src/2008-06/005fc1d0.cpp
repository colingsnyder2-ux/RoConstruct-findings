// from server: 88% by king_originala
struct Vector;

struct Signal {
    char data[0x20];
    void disconnect(void* connection);
};

struct Object {
    char padding[0x24];
    Signal first;
    Signal second;
};

struct Handle {
    Object* pointer;
    void* control;

    void reset();
    void disconnectFirst(void* connection);
    void disconnectSecond(void* connection);
};

inline void Handle::disconnectFirst(void* connection)
{
    Object* p = *reinterpret_cast<Object* volatile*>(&pointer);
    if (p)
        p->first.disconnect(connection);
}

inline void Handle::disconnectSecond(void* connection)
{
    Object* p = *reinterpret_cast<Object* volatile*>(&pointer);
    if (p)
        p->second.disconnect(connection);
}

struct S {
    char padding0[0x168];
    unsigned long firstConnection;
    unsigned long secondConnection;
    char padding1[0x20];
    Handle handle;
    char padding2[0x10];
    int state;

    Vector* owner();
    void f();
};

void S::f()
{
    owner();
    if (handle.pointer) {
        handle.disconnectFirst(&firstConnection);
        handle.disconnectSecond(&secondConnection);
        handle.reset();
    }
    state = -1;
}
