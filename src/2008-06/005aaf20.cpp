// from server: 96% by king_originala
extern unsigned int counter;
extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Object {
    virtual ~Object();
};

inline unsigned int slot()
{
    static unsigned int value = counter++;
    return value;
}

struct Context {
    char padding[12];
    Object** first;
    Object** last;

    unsigned int size() const;
    Object*& at(unsigned int, void (__cdecl*)());
    void clear();
};

inline unsigned int Context::size() const
{
    return static_cast<unsigned int>(last - first);
}

inline Object*& Context::at(unsigned int index, void (__cdecl* handler)())
{
    if (index >= size())
        handler();
    return first[index];
}

void Context::clear()
{
    if (size() > slot()) {
        unsigned int index = slot();
        void (__cdecl* handler)() = invalid_parameter_noinfo;
        delete at(index, handler);
        at(slot(), handler) = 0;
    }
}
