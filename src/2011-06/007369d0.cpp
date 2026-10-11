// from server: 78% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct EventDesc {
    void* vtable;
    void* field4;
};

extern type_info type_info_placeholder;
extern type_info type_info_SpecialKey;

EventDesc* __cdecl FindEventDesc(EventDesc* p)
{
    if (!p)
        return 0;
    void* obj = p->vtable;
    type_info* ti;
    if (obj) {
        ti = (type_info*)(*(void***)obj)[1];
    } else {
        ti = &type_info_placeholder;
    }
    if (ti->operator==(type_info_SpecialKey)) {
        return (EventDesc*)((char*)p->vtable + 4);
    }
    return 0;
}
