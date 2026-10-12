// from server: 89% by king_originala
#pragma pointers_to_members(full_generality, multiple_inheritance)

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Iterator {
    unsigned owner;
    unsigned offset;
    unsigned spare[2];
};

struct Queue {
    unsigned owner;
    unsigned map;
    unsigned capacity;
    unsigned offset;
    unsigned size;

    Queue(const Queue&);
    ~Queue();
    Iterator erase(unsigned, unsigned, unsigned, unsigned);
};

struct S {
    char padding[0x188];
    Queue queue;
    char padding2[0x10];
    unsigned char disabled;

    void callback();
    void f();
};

struct Action {
    void (S::*function)();
    S* object;
    unsigned spare;
};

extern Action __cdecl apply(unsigned, unsigned, unsigned, unsigned, Action);

void S::f()
{
    if (!disabled) {
        Queue& source = queue;
        Queue copy(source);

        unsigned endOffset = source.size;
        if (source.offset > endOffset)
            _invalid_parameter_noinfo();

        unsigned beginOffset = source.offset;
        unsigned endOwner = source.owner;
        if (beginOffset > source.size)
            _invalid_parameter_noinfo();

        source.erase(source.owner, beginOffset, endOwner, endOffset);

        Action action;
        action.function = &S::callback;
        action.object = this;

        unsigned last = copy.size;
        if (copy.offset > copy.size)
            _invalid_parameter_noinfo();

        unsigned owner = copy.owner;
        unsigned first = copy.offset;
        if (first > copy.size)
            _invalid_parameter_noinfo();

        apply(copy.owner, first, owner, last, action);
    }
}
