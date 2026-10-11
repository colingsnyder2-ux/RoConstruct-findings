// from server: 60% by atomic.potato
struct EventDesc
{
    EventDesc();
    void init(void*, void*, void*);
};

EventDesc::EventDesc()
{
}

void EventDesc::init(void*, void*, void*)
{
}

extern "C" EventDesc* create_eventdesc(void*);
extern "C" void init_eventdesc(EventDesc*, void*, void*, void*);

void* __stdcall function_006ce460(void* a, void* b, void* c)
{
    EventDesc* object = create_eventdesc(0);
    init_eventdesc(object, a, b, c);
    return a;
}
