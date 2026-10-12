// from server: 83% by king_originala
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
    Object **position = begin;
    if (position > end)
        _invalid_parameter_noinfo();

    Owner **savedProxy = proxy;

    for (;;) {
        Object **last = end;
        if (begin > last)
            _invalid_parameter_noinfo();

        Owner **currentProxy = proxy;
        if (!savedProxy || savedProxy != currentProxy)
            _invalid_parameter_noinfo();

        if (position == last)
            break;

        Owner *owner;
        if (!savedProxy) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = *savedProxy;
        }

        if (position >= owner->end)
            _invalid_parameter_noinfo();

        if (*position == object) {
            Object **next = position + 1;
            int count = end - next;
            if (count > 0) {
                unsigned int bytes = count * sizeof(Object *);
                memmove_s(position, bytes, next, bytes);
            }

            --end;
            Object **newEnd = end;
            if (begin > position || position > newEnd)
                _invalid_parameter_noinfo();
            break;
        }

        if (!savedProxy) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = *savedProxy;
        }

        if (position >= owner->end)
            _invalid_parameter_noinfo();

        ++position;
    }

    if (object)
        delete object;
}
