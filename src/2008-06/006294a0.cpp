// from server: 87% by king_originala
extern "C" void* __cdecl G1_func_006a17c6(void*, int, void*, void*, int);
extern "C" void (__cdecl *invalid_parameter)();
extern char instance_type;
extern char click_detector_type;

struct Entry {
    void* object;
    void* control;
};

struct Container;

struct Owner {
    Container* container;
};

struct Container {
    Owner* owner;
    unsigned int pad[2];
    Entry* first;
    Entry* last;
};

struct S {
    char pad[0x108];
    Container* field_108;
    void* f();
};

void* S::f()
{
    Container* c = field_108;
    if (c != 0) {
        Entry* saved = c->last;
        void (__cdecl *error)() = invalid_parameter;

        if (c->first > saved)
            error();

        Owner* savedOwner = c->owner;
        c = field_108;
        Entry* current = c->first;

        if (current > c->last)
            error();

        Owner* owner = c->owner;
        for (;;) {
            if (owner == 0 || owner != savedOwner)
                error();

            if (current == saved)
                break;

            Container* container;
            if (owner == 0) {
                error();
                container = 0;
            } else {
                container = owner->container;
            }

            if (current >= container->last)
                error();

            void* result = G1_func_006a17c6(
                current->object, 0,
                &instance_type, &click_detector_type, 0);
            if (result != 0)
                return result;

            if (owner == 0) {
                error();
                container = 0;
            } else {
                container = owner->container;
            }

            if (current >= container->last)
                error();

            ++current;
        }
    }
    return 0;
}
