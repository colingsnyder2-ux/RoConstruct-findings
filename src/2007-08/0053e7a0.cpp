// from server: 51% by tester
struct VItem {
    char pad[0xc0];
    void* m_list;
    bool f(const void* value);
};

struct List {
    void* begin;
    void* end;
    unsigned int size();
};

extern "C" int __stdcall string_compare(const void* a, const void* b);
extern "C" void __stdcall invalid_parameter_noinfo();

bool VItem::f(const void* value)
{
    List* lst = (List*)m_list;
    if (!lst)
        return false;

    unsigned int count = lst->size();
    unsigned int i = 0;
    while (i < count) {
        void** items = (void**)lst->begin;
        if (!items || i >= (unsigned int)(((char*)lst->end - (char*)items) >> 3))
            invalid_parameter_noinfo();
        void* item = items[i];
        if (string_compare((char*)item + 0xc8, value))
            return true;
        i++;
        count = lst->size();
    }
    return false;
}
