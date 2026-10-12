// from server: 87% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern int instance_type;
extern int tool_type;

struct Container;

struct Proxy {
    Container* container;
};

struct Container {
    Proxy* proxy;
    unsigned char padding[8];
    unsigned char* first;
    unsigned char* last;
};

struct S {
    unsigned char padding[0x108];
    Container* children;
    void* f();
};

void* S::f()
{
    Container* c = children;
    if (c) {
        unsigned char* finish = c->last;
        void (__cdecl *invalid)() = invalid_parameter_noinfo;
        if (c->first > finish)
            invalid();
        Proxy* finishOwner = c->proxy;

        c = children;
        unsigned char* current = c->first;
        if (current > c->last)
            invalid();
        Proxy* owner = c->proxy;

        for (;;) {
            if (!owner || owner != finishOwner)
                invalid();

            if (current == finish)
                break;

            Container* base;
            if (!owner) {
                invalid();
                base = 0;
            } else {
                base = owner->container;
            }

            if (current >= base->last)
                invalid();

            void* result = __RTDynamicCast(
                *reinterpret_cast<void**>(current),
                0, &instance_type, &tool_type, 0);

            if (result)
                return result;

            if (!owner) {
                invalid();
                base = 0;
            } else {
                base = owner->container;
            }

            if (current >= base->last)
                invalid();

            current += 8;
        }
    }
    return 0;
}
