// from server: 73% by king_originala
#pragma float_control(precise, off)

struct Box {
    float x0, y0, z0;
    float x1, y1, z1;
};

struct Source {
    char reserved[0x90];
    unsigned int version;
    const void* get();
};

struct List {
    Source** data;
    int count;
    int capacity;

    void reset(int, int);
    void append(Source* const*);
};

struct Owner {
    void query(const Box*, int, List*);
};

struct Contact {
    Owner* owner;
    int reserved;
    List candidates;

    void collect(const Box*, int, List*);
};

void Contact::collect(const Box* box, int argument, List* output)
{
    candidates.reset(0, 0);
    owner->query(box, argument, &candidates);

    for (int i = 0; i < candidates.count; ++i) {
        Source*& source = candidates.data[i];
        const Box* bounds = static_cast<const Box*>(source->get());

        if (!(bounds->x1 < box->x0) &&
            !(bounds->y1 < box->y0) &&
            !(bounds->z1 < box->z0) &&
            !(bounds->y0 > box->y1) &&
            !(bounds->x0 > box->x1) &&
            !(bounds->z0 > box->z1)) {
            output->append(&candidates.data[i]);
        }
    }
}
