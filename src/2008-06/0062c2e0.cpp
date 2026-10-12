// from server: 74% by king_originala
extern "C" {
    extern void (__cdecl* invalid_parameter)();
    extern int (__cdecl* random_number)();
    void __cdecl release(void*);
}

struct Color {
    unsigned int value;
};

struct Flag {
    Color getTeamColor() const;
};

struct Stand {
    char padding[0x3fc];
    unsigned int color;
    void* get();
};

struct Link {
    Link* next;
    Link* previous;
    Stand* value;
};

struct Owner {
    char padding[0x14];
    Link* head;
};

struct Proxy {
    Owner* owner;
};

struct Candidates {
    void* proxy;
    unsigned int reserved[2];
    Stand** first;
    Stand** last;
    Stand** limit;

    Candidates();
    ~Candidates();
    void append(Stand* const*);
};

inline Candidates::~Candidates()
{
    if (first)
        release(first);
    first = 0;
    last = 0;
    limit = 0;
    release(proxy);
}

struct Service {
    char padding[0x130];
    Proxy* proxy;
    char reserved[0x10];
    Link* head;
    unsigned int count;

    Stand* choose(Flag*);
};

Stand* Service::choose(Flag* flag)
{
    if (count == 0)
        return 0;

    Candidates candidates;
    Link* current = head->next;
    Proxy* owner = proxy;

    for (;;) {
        Link* end = head;
        Proxy* endOwner = proxy;

        if (!owner || owner != endOwner)
            invalid_parameter();

        if (current == end)
            break;

        Owner* container;
        if (!owner) {
            invalid_parameter();
            container = 0;
        } else {
            container = owner->owner;
        }

        if (current == container->head)
            invalid_parameter();

        unsigned int color = current->value->color;
        Stand** value = &current->value;

        if (color == flag->getTeamColor().value) {
            if (!owner) {
                invalid_parameter();
                container = 0;
            } else {
                container = owner->owner;
            }

            if (current == container->head)
                invalid_parameter();

            if (!(*value)->get()) {
                if (!owner) {
                    invalid_parameter();
                    container = 0;
                } else {
                    container = owner->owner;
                }

                if (current == container->head)
                    invalid_parameter();

                candidates.append(value);
            }
        }

        if (!owner) {
            invalid_parameter();
            container = 0;
        } else {
            container = owner->owner;
        }

        if (current == container->head)
            invalid_parameter();

        current = current->next;
    }

    unsigned int size =
        static_cast<unsigned int>(candidates.last - candidates.first);
    if (size == 0)
        return 0;

    unsigned int index = static_cast<unsigned int>(random_number()) % size;
    if (index >= static_cast<unsigned int>(candidates.last - candidates.first))
        invalid_parameter();

    return candidates.first[index];
}
