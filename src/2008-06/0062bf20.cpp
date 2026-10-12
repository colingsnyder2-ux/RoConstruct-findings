// from server: 86% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instance_type_descriptor;
extern char flag_type_descriptor;

struct Container;

struct Proxy {
    Container* container;
};

struct Entry {
    void* object;
    void* reference;
};

struct Container {
    Proxy* proxy;
    unsigned char padding[8];
    Entry* first;
    Entry* last;
};

struct S {
    unsigned char padding[0x108];
    Container* children;
    void* f();
};

void* S::f()
{
    if (children) {
        Container* c = children;
        Entry* finish = c->last;
        void (__cdecl *invalid)() = invalid_parameter_noinfo;

        if (c->first > finish)
            invalid();
        Proxy* finishOwner = c->proxy;

        c = children;
        Entry* position = c->first;
        if (position > c->last)
            invalid();
        Proxy* owner = c->proxy;

        for (;;) {
            if (!owner || owner != finishOwner)
                invalid();
            if (position == finish)
                break;

            Container* checked = owner
                ? owner->container
                : (invalid(), (Container*)0);
            if (position >= checked->last)
                invalid();

            void* result = __RTDynamicCast(
                position->object, 0,
                &instance_type_descriptor, &flag_type_descriptor, 0);
            if (result)
                return result;

            checked = owner
                ? owner->container
                : (invalid(), (Container*)0);
            if (position >= checked->last)
                invalid();
            ++position;
        }
    }
    return 0;
}
