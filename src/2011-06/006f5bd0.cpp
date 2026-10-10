// from server: 70% by atomic.potato
struct EventDesc
{
    int value;

    EventDesc& f(EventDesc& other);
};

extern "C" EventDesc* __stdcall std_basic_string_copy(EventDesc*, const EventDesc*);

EventDesc& EventDesc::f(EventDesc& other)
{
    EventDesc* p = (EventDesc*)((char*)this + 0xac);
    EventDesc* result = std_basic_string_copy(&other, p);
    return other;
}
