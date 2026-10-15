// from server: 87% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vector2 {
    float x, y;
};

struct Rect {
    float x0, y0, x1, y1;
    Rect() {}
    Rect(double a, double b, double c, double d)
        : x0((float)a), y0((float)b), x1((float)c), y1((float)d) {}
};

namespace RBX {
    class Instance {
    public:
        virtual ~Instance();
        char pad[0x100];
        Instance* next;
    };

    class ServiceProvider : public Instance {
    public:
        char padding[0xB8];
        float rate;
        char alignment[4];
        double scale;
        ServiceProvider* finish();
    };
}

extern RBX::ServiceProvider* func_00492e00(RBX::Instance*);
extern const double lowerBound;
extern const double upperBound;
extern const float multiplier;
extern const float expansion;
extern unsigned char color1;
extern unsigned char color2;

struct TransformPart {
    void finish();
};

struct Transform {
    char padding[0x24];
    TransformPart part;
};

struct Object {
    Transform* position(Vector2*);
};

extern Object* findObject(RBX::Instance*);

struct Receiver {
    void submit(const Rect*);
};

struct S : RBX::Instance {
    char padding[0x68];
    RBX::Instance* object;
    void bounds(Rect*);
    void draw(const Rect*, const void*, const void*);
    void f(Receiver*);
};

void S::f(Receiver* receiver)
{
    RBX::ServiceProvider* provider = func_00492e00(this);
    if (!provider)
        return;
    if (!object)
        return;

    Object* target = findObject(object);
    if (!target)
        return;

    Rect original;
    bounds(&original);
    float width = original.x1 - original.x0;
    float height = original.y1 - original.y0;

    Vector2 center;
    target->position(&center)->part.finish();

    double scale = 1.0;
    scale /= provider->rate;
    scale *= provider->scale;

    double dx, dy;
    if (scale > lowerBound) {
        dx = width * (double)multiplier;
        dy = height * (double)multiplier;
    } else if (scale < upperBound) {
        dx = width + (double)expansion;
        dy = height + (double)expansion;
    } else {
        dx = width;
        dy = height;
    }

    dx *= multiplier;
    dy *= multiplier;

    Rect result(center.x - dx, center.y - dy,
                center.x + dx, center.y + dy);
    draw(&result, &color2, &color1);
    receiver->submit(&result);
}
