// from server: 59% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Item {
    char padding[0x44];
    float time;
};

struct Iterator {
    void *owner;
    unsigned int offset;
    Item *&operator*() const;
};

struct Tick {
    char padding0[0x2c];
    void *owner;
    char padding1[0x14];
    unsigned int offset;
    unsigned int count;
    float time;

    void update(int, int, float);
};

struct S {
    char padding[0x148];
    Tick tick;

    void remove();
};

void Tick::update(int, int, float delta)
{
    time += delta;
    void (__cdecl *invalid)() = invalid_parameter_noinfo;
    S *s = reinterpret_cast<S *>(reinterpret_cast<char *>(this) - 0x148);

    for (;;) {
        if (s->tick.count == 0)
            break;

        unsigned int first = s->tick.offset;
        if (first > first + s->tick.count)
            invalid();

        Iterator it;
        it.owner = s->tick.owner;
        it.offset = first;
        Item *item = *it;

        if (!(s->tick.time > item->time))
            break;

        s->remove();
    }
}
