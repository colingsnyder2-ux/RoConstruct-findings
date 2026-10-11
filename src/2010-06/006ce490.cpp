// from server: 40% by atomic.potato
struct EventDesc
{
    void* init();
    void setup(void*, void*, void*);
};

void* EventDesc::init()
{
    return 0;
}

void EventDesc::setup(void*, void*, void*)
{
}

extern "C" void* function_006cd110();

void* function_006cc940(void*, void*, void*, void*);

void* __stdcall function_006ce490(void* a, void* b, void* c)
{
    EventDesc* value = (EventDesc*)function_006cd110();
    function_006cc940(value, a, b, c);
    return a;
}
