// from server: 59% by atomic.potato
extern "C" void __stdcall std_locale_facet_incref(void);

struct EventDesc
{
    unsigned short type;
    int value;
    EventDesc();
};

EventDesc::EventDesc()
{
    type = 0x48;
    value = *(int *)this;
    std_locale_facet_incref();
}
