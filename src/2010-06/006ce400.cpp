// from server: 33% by atomic.potato
struct EventDesc
{
    void* initialize();
    void* bind(void*, void*, void*);
};

extern "C" void* create_event_context(void*, int);

void* EventDesc::initialize()
{
    return create_event_context(0, 0);
}

void* EventDesc::bind(void* a, void* b, void* c)
{
    create_event_context(0, 0);

    return this;
}
