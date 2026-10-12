// from server: 95% by king_originala
struct Stream;
struct Part;
struct Body;
struct Source;
struct State;
struct World;

struct StateVTable {
    void *reserved[17];
    World *(__thiscall *getWorld)(State *);
};

struct Filter {
    bool contains(Part *);
};

struct World {
    unsigned char padding[0x170];
    Filter *filter;
};

struct State {
    StateVTable *vtable;
    bool excluded(Part *);
    bool encode(Stream *, const void *);
};

struct Stream {
    void write(float, float, float, float);
};

struct Body {
    unsigned char padding[0x24];
    float position[3];
};

struct Part {
    Body *getBody();
};

struct Link {
    unsigned char padding[0x1c];
    void *object;
};

struct Item {
    unsigned char padding[0x8c];
    float value;
};

struct Source {
    unsigned char padding[0x24];
    Link *link;
    int count();
    Item *get(int);
};

struct Values {
    float x, y, z, w;
    Values(Body *);
    void prepare();
};

extern "C" Part *__cdecl resolve(void *);
extern "C" void __cdecl writePosition(Stream *, const void *, bool);
extern "C" void __cdecl writeByte(Stream *, unsigned char);
extern "C" unsigned char __cdecl quantize(float);

struct S {
    void *reserved;
    State *state;
    void f(Stream *, Source *);
};

void S::f(Stream *stream, Source *source)
{
    if (source) {
        Part *part = resolve(source->link->object);
        if (part && !state->excluded(part) && state->encode(stream, part)) {
            Body *body = part->getBody();
            World *world = state->vtable->getWorld(state);
            writePosition(stream, body->position,
                          world && world->filter && world->filter->contains(part));

            Values values(body);
            values.prepare();
            stream->write(values.w, values.x, values.y, values.z);

            int count = source->count();
            writeByte(stream, (unsigned char)count);
            for (int i = 0; i < count; ++i) {
                float value = 0.0f;
                Item *item = source->get(i);
                unsigned char encoded = quantize(item ? item->value : value);
                writeByte(stream, encoded);
            }
        }
    }
}
