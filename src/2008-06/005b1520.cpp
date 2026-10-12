// from server: 87% by king_originala
extern "C" void (__cdecl *invalid_parameter)();
extern "C" void* __cdecl runtime_cast(void*, long, void*, void*, int);

extern char instance_type[];
extern char accoutrement_type[];

struct Vector;

struct Proxy {
    Vector* container;
};

struct Entry {
    void* object;
    void* control;
};

struct Vector {
    Proxy* proxy;
    char padding[8];
    Entry* first;
    Entry* last;
};

struct Accoutrement {
    char padding[0x108];
    Vector* items;
    void* find();
};

void* Accoutrement::find() {
    Vector* vector = items;
    if (vector) {
        Entry* finish = vector->last;
        void (__cdecl *report)() = invalid_parameter;

        if (vector->first > finish)
            report();

        Proxy* finishProxy = vector->proxy;

        vector = items;
        Entry* current = vector->first;
        if (current > vector->last)
            report();

        Proxy* proxy = vector->proxy;

        for (;;) {
            if (!proxy || proxy != finishProxy)
                report();

            if (current == finish)
                break;

            Vector* owner;
            if (!proxy) {
                report();
                owner = 0;
            } else {
                owner = proxy->container;
            }

            if (current >= owner->last)
                report();

            void* result = runtime_cast(
                current->object, 0, instance_type, accoutrement_type, 0);
            if (result)
                return result;

            if (!proxy) {
                report();
                owner = 0;
            } else {
                owner = proxy->container;
            }

            if (current >= owner->last)
                report();

            ++current;
        }
    }
    return 0;
}
