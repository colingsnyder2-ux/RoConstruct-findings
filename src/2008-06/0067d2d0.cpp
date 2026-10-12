// from server: 91% by king_originala
extern "C" {
    extern void (__cdecl *_invalid_parameter_noinfo)();
    extern int (__cdecl *memmove_s)(void *, unsigned int, const void *, unsigned int);
}

struct Object {
    virtual ~Object();
};

struct Owner {
    char padding[12];
    Object **begin;
    Object **end;
};

struct Iterator {
    Owner **proxy;
    Object **position;
};

struct S {
    char padding[216];
    Owner **volatile proxy;
    char reserved[8];
    Object **begin;
    Object **end;

    void remove(Object *object);
};

void S::remove(Object *object)
{
    Iterator current;
    current.position = begin;
    if (current.position > end)
        _invalid_parameter_noinfo();

    current.proxy = proxy;

    for (;;) {
        Object **last = end;
        if (begin > last)
            _invalid_parameter_noinfo();

        Owner **currentProxy = proxy;
        if (!current.proxy || current.proxy != currentProxy)
            _invalid_parameter_noinfo();

        if (current.position == last)
            break;

        if (!current.proxy)
            _invalid_parameter_noinfo();

        Owner *owner = current.proxy ? *current.proxy : 0;
        if (current.position >= owner->end)
            _invalid_parameter_noinfo();

        if (*current.position == object) {
            Object **next = current.position + 1;
            int count = end - next;
            if (count > 0) {
                unsigned int bytes = count * sizeof(Object *);
                memmove_s(current.position, bytes, next, bytes);
            }

            --end;
            Object **newEnd = end;
            if (begin > current.position || current.position > newEnd)
                _invalid_parameter_noinfo();
            break;
        }

        if (!current.proxy)
            _invalid_parameter_noinfo();

        owner = current.proxy ? *current.proxy : 0;
        if (current.position >= owner->end)
            _invalid_parameter_noinfo();

        ++current.position;
    }

    if (object)
        delete object;
}
