// from server: 69% by king_originala
extern unsigned int counter;
extern unsigned int index_value;
extern unsigned int index_guard;
extern void *holder_vtable[];
extern "C" void (__cdecl *_invalid_parameter_noinfo)();
void *__cdecl operator new(unsigned int);

struct Holder {
    void **vtable;
    unsigned int first;
    unsigned int second;
};

struct Iterator {
    void *owner;
    Holder **position;
};

struct S {
    void *owner;
    unsigned int reserved[2];
    Holder **begin;
    Holder **end;
    Holder **limit;

    Iterator insert(Iterator position, Holder *const &value);
    unsigned int *f();
};

unsigned int *S::f()
{
    void (__cdecl *invalid)() = _invalid_parameter_noinfo;

    for (;;) {
        unsigned int size = static_cast<unsigned int>(end - begin);
        if (!(index_guard & 1)) {
            index_guard |= 1;
            index_value = counter++;
        }
        if (size > index_value)
            break;

        Holder *value = 0;
        unsigned int capacity;
        if (!begin)
            capacity = 0;
        else
            capacity = static_cast<unsigned int>(limit - begin);

        Holder **position = end;
        if (static_cast<unsigned int>(position - begin) < capacity) {
            *position = value;
            end = position + 1;
        } else {
            if (begin > position)
                invalid();
            Iterator where;
            where.owner = owner;
            where.position = position;
            insert(where, value);
        }
    }

    if (!(index_guard & 1)) {
        index_guard |= 1;
        index_value = counter++;
    }

    unsigned int index = index_value;
    if (index >= static_cast<unsigned int>(end - begin))
        invalid();

    Holder **slot = begin + index;
    if (!*slot) {
        Holder *value = new Holder;
        if (value) {
            value->vtable = holder_vtable;
            value->first = 0;
            value->second = 0;
            *slot = value;
            return &value->first;
        }
        *slot = 0;
    }
    return &(*slot)->first;
}
