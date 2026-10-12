// from server: 71% by king_originala
extern "C" {
extern void (__stdcall * const EnterCriticalSection)(void *);
extern void (__stdcall * const LeaveCriticalSection)(void *);
extern void (__cdecl * const _invalid_parameter_noinfo)();
extern int (__cdecl * const memmove_s)(void *, unsigned int, const void *, unsigned int);
}

struct Container {
    void *proxy;
    unsigned int reserved[2];
    void **begin;
    void **end;
};

struct Iterator {
    Container **owner;
    void **position;

    bool equals(const Iterator &) const;
    void *get() const;
    void advance();
};

inline bool Iterator::equals(const Iterator &other) const
{
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return position == other.position;
}

inline void *Iterator::get() const
{
    Container *container;
    if (!owner) {
        _invalid_parameter_noinfo();
        container = 0;
    } else {
        container = *owner;
    }
    if (position >= container->end)
        _invalid_parameter_noinfo();
    return *position;
}

inline void Iterator::advance()
{
    Container *container;
    if (!owner) {
        _invalid_parameter_noinfo();
        container = 0;
    } else {
        container = *owner;
    }
    if (position >= container->end)
        _invalid_parameter_noinfo();
    ++position;
}

struct S {
    unsigned int reserved0;
    Container **proxy;
    unsigned int reserved1[2];
    void **begin;
    void **end;
    unsigned int reserved2[2];
    char *owner;

    void remove(void *);
};

void S::remove(void *value)
{
    void *lock = owner + 0x2c;
    EnterCriticalSection(lock);

    Iterator current;
    current.position = begin;
    if (current.position > end)
        _invalid_parameter_noinfo();
    current.owner = proxy;

    for (;;) {
        Iterator finish;
        finish.position = end;
        if (begin > finish.position)
            _invalid_parameter_noinfo();
        finish.owner = proxy;

        if (current.equals(finish))
            break;

        if (current.get() == value) {
            void **next = current.position + 1;
            int count = end - next;
            if (count > 0)
                memmove_s(current.position, count * 4, next, count * 4);

            --end;
            void **last = end;
            if (begin > current.position || current.position > last)
                _invalid_parameter_noinfo();
            break;
        }

        current.advance();
    }

    LeaveCriticalSection(lock);
}
