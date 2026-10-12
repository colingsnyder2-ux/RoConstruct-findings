// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* value;
    Control* control;
};

struct Source {
    Shared* get(Shared* result);
};

struct Argument {
    char padding[0xe4];
    Source source;
};

struct Entry {
    void* value;
    void* extra;
};

struct Iterator {
    void* owner;
    Entry* position;
};

struct Container {
    void* owner;
    unsigned long padding[2];
    Entry* first;
    Entry* last;

    Iterator begin() {
        if (first > last)
            invalid_parameter_noinfo();
        Iterator result = { owner, first };
        return result;
    }

    Iterator end() {
        Entry* finish = last;
        if (first > finish)
            invalid_parameter_noinfo();
        Iterator result = { owner, finish };
        return result;
    }
};

struct S {
    char padding[0x108];
    Container* container;
    int f(Argument* argument);
};

int S::f(Argument* argument) {
    Container* sequence = container;
    Shared temporary;
    Shared* key = argument->source.get(&temporary);

    Iterator finish = sequence->end();
    Iterator found = sequence->begin();

    if (found.position != finish.position) {
        void* value = key->value;
        while (found.position->value != value) {
            ++found.position;
            if (found.position == finish.position)
                break;
        }
    }

    Control* control = temporary.control;
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 0) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
                control->destroy();
        }
    }

    Iterator start = sequence->begin();
    if (!found.owner || found.owner != start.owner)
        invalid_parameter_noinfo();

    return found.position - start.position;
}
