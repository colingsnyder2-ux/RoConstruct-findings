// from server: 85% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
enum EventType {
    EventNone = 0,
    EventFirst = 1,
    EventLast = 7
};

struct Event {
    EventType type;
};

struct Result {
    void* first;
    void* second;
    __forceinline Result();
};

__forceinline Result::Result()
{
    second = 0;
    first = 0;
}

struct Base;

struct Table {
    void* slots[30];
    bool (__thiscall* enabled)(Base*);
};

struct Base {
    Table* table;
    Result process(Event*);
};

struct Widget {
    Result handle(Event*);
};

Result Widget::handle(Event* event)
{
    Base* base = reinterpret_cast<Base*>(
        reinterpret_cast<char*>(this) - 0x130);

    if (base->table->enabled(base)) {
        EventType type = event->type;
        if (type >= EventFirst && type <= EventLast)
            return base->process(event);
    }

    return Result();
}
