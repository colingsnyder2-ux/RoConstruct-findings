// from server: 66% by king_originala
struct Signal {
    void fire(float*);
};

struct Entry {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    Entry* find(void*);
};

extern Registry registry;
extern char property;

struct S {
    char padding0[0x1a8];
    float value;
    float limit;
    char padding1[0x38];
    unsigned char flags;

    void notify(void*);
    void setValue(float);
};

void S::setValue(float input)
{
    double next = limit;
    if (input <= 0.0)
        next = 0.0;
    else if (input < next)
        next = input;

    if (next != value) {
        value = static_cast<float>(next);
        notify(&property);
        if (value == 0.0f && !(flags & 2)) {
            flags |= 2;
            Entry* entry = registry.find(reinterpret_cast<char*>(this) + 0x14);
            if (entry)
                entry->signal.fire(&input);
        }
    }
}
