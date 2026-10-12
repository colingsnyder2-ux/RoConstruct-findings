// from server: 75% by king_originala
struct Listener {
    char storage;
};

struct Connection {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void release(int);
};

struct Event {
    void disconnect(Listener*);
    void connect(Listener*);
};

struct Service {
    char padding[0x150];
    Event event;
};

struct Instance {
    Service* getService();
};

struct Humanoid {
    char padding[0x1a4];
    Listener listener;
    char gap[0x7b];
    Connection* connection;

    void change(Instance*, Instance*);
};

void Humanoid::change(Instance* previous, Instance* next)
{
    if (previous) {
        if (connection)
            connection->release(1);
        connection = 0;

        Listener* target = this ? &listener : 0;
        Service* service = previous->getService();
        if (service)
            service->event.disconnect(target);
    }

    if (next) {
        Listener* target = this ? &listener : 0;
        Service* service = next->getService();
        if (service)
            service->event.connect(target);
    }
}
