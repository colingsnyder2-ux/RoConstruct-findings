// from server: 71% by king_originala
extern "C" long __stdcall InterlockedDecrement(volatile long *);

struct Resource {
    virtual ~Resource();
    volatile long references;
    void cleanup();
};

struct ResourcePtr {
    Resource *value;
    ResourcePtr();
    ResourcePtr(const ResourcePtr &);
    ~ResourcePtr();
    ResourcePtr &assign(Resource *);
};

inline ResourcePtr::ResourcePtr() : value(0) {}

inline ResourcePtr::ResourcePtr(const ResourcePtr &p) : value(0)
{
    assign(p.value);
}

inline ResourcePtr::~ResourcePtr()
{
    if (value && InterlockedDecrement(&value->references) == 0) {
        value->cleanup();
        delete value;
    }
}

struct Vector2 {
    float x, y;
};

struct Position {
    float x, y;
    Position(const Position &);
};

struct Rect {
    Vector2 low, high;
    Rect &operator=(const Rect &);
};

inline Rect &Rect::operator=(const Rect &r)
{
    low.x = r.low.x;
    low.y = r.low.y;
    high.x = r.high.x;
    high.y = r.high.y;
    return *this;
}

struct Color {
    float r, g, b, a;
};

extern const float half;
Rect __cdecl makeRect(const Vector2 &, const Vector2 &);

struct RenderDevice {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void setTexture(int, ResourcePtr);
    virtual Rect viewport(ResourcePtr);
    virtual void slot9();
    virtual void slot10();
    virtual void draw(const Rect &, const Color &);
};

struct DxUserInput {
    virtual Position position();
    virtual ResourcePtr texture(RenderDevice *);
    void f(RenderDevice *);
};

void DxUserInput::f(RenderDevice *device)
{
    ResourcePtr image = texture(device);
    if (image.value) {
        Rect viewport = device->viewport(image);
        double centerX = (viewport.low.x + viewport.high.x) * half;
        double centerY = (viewport.low.y + viewport.high.y) * half;

        Vector2 low, high;
        high.x = float(viewport.high.x - centerX);
        high.y = float(viewport.high.y - centerY);
        low.x = float(viewport.low.x - centerX);
        low.y = float(viewport.low.y - centerY);

        Rect bounds = makeRect(low, high);
        const Position &p = position();

        high.x = p.x + bounds.high.x;
        high.y = p.y + bounds.high.y;
        low.x = p.x + bounds.low.x;
        low.y = p.y + bounds.low.y;

        viewport = makeRect(low, high);
        device->setTexture(0, image);

        Color color;
        color.r = 1.0f;
        color.g = 1.0f;
        color.b = 1.0f;
        color.a = 1.0f;
        device->draw(viewport, color);
        device->setTexture(0, ResourcePtr());
    }
}
