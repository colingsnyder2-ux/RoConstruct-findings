// from server: 84% by king_originala
struct Item {
    unsigned char data[8];
};

struct Container {
    Container** proxy;
    unsigned char padding[8];
    Item* first;
    Item* last;
};

struct Iterator {
    Container** proxy;
    Item* position;
};

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern int __cdecl processItem(Item*, void*);

int __cdecl processRange(Container* container, void* argument)
{
    Iterator current;
    current.position = container->first;
    int result = 0;

    if (current.position > container->last)
        _invalid_parameter_noinfo();

    Iterator end;
    end.position = container->last;
    current.proxy = container->proxy;

    if (container->first > end.position)
        _invalid_parameter_noinfo();

    end.proxy = container->proxy;

    for (;;) {
        void (__cdecl* invalid)();

        if (current.proxy && current.proxy != end.proxy) {
            invalid = _invalid_parameter_noinfo;
        } else {
            invalid = _invalid_parameter_noinfo;
            invalid();
        }

        if (current.position == end.position)
            break;

        Container* owner = current.proxy
            ? *current.proxy
            : (invalid(), (Container*)0);

        if (current.position >= owner->last)
            invalid();

        result += processItem(current.position, argument);

        owner = current.proxy
            ? *current.proxy
            : (invalid(), (Container*)0);

        if (current.position >= owner->last)
            invalid();

        ++current.position;
    }

    return result;
}
