// from server: 40% by colin
struct DescribedBase;

struct GetSet {
    virtual bool isReadOnly() const;
    virtual bool isWriteOnly() const;
    virtual void getValue(const DescribedBase* object) const;
    virtual void setValue(DescribedBase* object, const void* value) const;
};

struct VItem {
    char pad[0xc0];
    void* m_list;
    bool f(const void* value);
};

extern "C" int __stdcall string_compare(const void* a, const void* b);
extern "C" void __stdcall invalid_parameter_noinfo();

bool VItem::f(const void* value)
{
    void* list = m_list;
    if (!list)
        return false;

    unsigned int count = ((unsigned int (__thiscall*)(void*))0x40ccc0)(list);
    unsigned int i = 0;
    while (i < count) {
        void** items = *(void***)((char*)list + 4);
        if (!items || i >= (unsigned int)((*(char**)((char*)list + 8) - (char*)items) >> 3))
            invalid_parameter_noinfo();
        void* item = *(void**)((char*)items + i * 8);
        if (string_compare((char*)item + 0xc8, value))
            return true;
        i++;
        count = ((unsigned int (__thiscall*)(void*))0x40ccc0)(list);
    }
    return false;
}
