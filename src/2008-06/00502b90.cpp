// from server: 90% by king_originala
#pragma float_control(precise, off)

struct Device;
struct Texture;
struct Batch;

extern unsigned char enabled;
extern const double initialOffset;

extern "C" {
    extern void (__stdcall *glDepthMask)(unsigned char);
    extern void (__stdcall *glColor3fv)(const float *);
}

struct Handle {
    Texture *pointer;
    Handle(Texture *const &);
    Handle(const Handle &);
    ~Handle();
    void assign(Texture *);
};

inline Handle::Handle(Texture *const &p) : pointer(0)
{
    assign(p);
}

inline Handle::~Handle()
{
}

struct Vector3 {
    float x, y, z;
};

struct Color {
    float x, y, z, w;
    Color(float, float, float, float);
    Color &operator=(const Color &);
};

inline Color::Color(float a, float b, float c, float d)
    : x(a), y(b), z(c), w(d)
{
}

inline Color &Color::operator=(const Color &c)
{
    x = c.x;
    y = c.y;
    z = c.z;
    w = c.w;
    return *this;
}

extern const Vector3 &colorVector();
extern void drawBatch(void *, Device *);

struct Surface {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual Handle prepare(Device *);
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual float scale();
};

struct Batch {
    char padding[0x34];
    Surface *surface;
    float offset;
    void *geometry;
};

struct Texture {
    char padding[0x58];
    int kind;
};

struct State {
    char padding[0x30];
    Texture *texture;
};

struct Device {
    char padding0[0x70];
    int changes;
    char padding1[4];
    int operations;
    char padding2[0x365];
    unsigned char depthWrite;
    char padding3[0xc6];
    Color color;

    void begin();
    void mode(int);
    void offset(double);
    void blend(int, int, int);
    void disableLighting();
    void texture(int, Handle);
    void transform(const Batch *);
    void select(int, Handle);
    void end();
};

struct S {
    char padding0[0x280];
    Batch **batches;
    int count;
    char padding1[0x64];
    State *state;

    void render(Device *);
};

void S::render(Device *device)
{
    if (!enabled)
        return;

    State *current = state;
    if (*reinterpret_cast<const int *>(&current->texture) == 0)
        return;

    int kind = current->texture->kind;
    if (kind != 5 && kind != 7)
        return;

    device->begin();
    device->mode(3);
    device->offset(initialOffset);
    device->blend(2, 2, 2);
    device->disableLighting();
    device->texture(1, Handle(state->texture));

    ++device->operations;
    if (device->depthWrite) {
        ++device->changes;
        glDepthMask(0);
        device->depthWrite = 0;
    }

    for (int i = 0; i < count; ++i) {
        Color *destination = &device->color;
        Batch *batch = batches[i];
        Surface *surface = batch->surface;
        device->offset(batch->offset);
        device->transform(batch);
        device->select(0, surface->prepare(device));

        float scale = surface->scale();
        const Vector3 &color = colorVector();
        __declspec(align(64)) Color result(
            color.x * scale, color.y * scale, color.z * scale, 1.0f);
        *destination = result;
        glColor3fv(&destination->x);
        drawBatch(batch->geometry, device);
    }

    device->end();
}
