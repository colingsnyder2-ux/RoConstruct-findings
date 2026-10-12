// from server: 94% by king_originala
struct Event;
struct Workspace;

struct Result {
    int handled;
    Workspace* target;
    Result();
    Result(int, Workspace*);
};

inline Result::Result()
{
    target = 0;
    handled = 0;
}

inline Result::Result(int h, Workspace* p)
{
    handled = h;
    target = p;
}

struct Boolean {
    bool value;
};

struct Source {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void activate(bool) = 0;
};

struct Event {
    int type;
    Source* source;
    int data[3];
};

struct Controller {
    virtual void slot0() = 0;
    virtual int begin(Event*) = 0;
    virtual void slot2() = 0;
    virtual void move(Event*) = 0;
    virtual int finish(Event*) = 0;
    virtual void process(Event*) = 0;
    virtual void drag(Event*) = 0;
    virtual void release(Event*) = 0;
    virtual int select(Event*) = 0;

    char padding[16];
    bool active;
};

struct Signal {
    char padding[108];
    void fire(Boolean);
};

struct Base {
    void update(int);
};

struct Workspace {
    char padding0[92];
    Signal signal;
    Controller* controller;
    int padding1;
    Event saved;
    char padding2[44];
    bool active;

    Result process(Event*);
};

Result Workspace::process(Event* event)
{
    if (event->type >= 1 && event->type <= 7) {
        saved = *event;
        saved.type = 7;
    }

    switch (event->type) {
    case 12:
    case 13:
        {
            Boolean value;
            value.value = false;
            signal.fire(value);
        }
    case 2:
        event->source->activate(active = false);
        break;

    case 10:
        controller->process(event);
        if (!controller->active)
            return Result();
        reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 744)
            ->update(controller->finish(event));
        break;

    case 1:
        event->source->activate(active = true);
        break;

    case 3:
        if (!controller->active)
            reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 744)
                ->update(controller->begin(event));
        break;

    case 5:
        if (controller->active)
            controller->drag(event);
        else
            controller->move(event);
        break;

    case 6:
        if (controller->active)
            controller->release(event);
        break;

    case 4:
        reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 744)
            ->update(controller->select(event));
        break;

    default:
        return Result();
    }

    if (controller->active) {
        Base* base = reinterpret_cast<Base*>(
            reinterpret_cast<char*>(this) - 744);
        if (base)
            return Result(1, reinterpret_cast<Workspace*>(
                reinterpret_cast<char*>(base) + 744));
    }
    return Result(1, 0);
}
