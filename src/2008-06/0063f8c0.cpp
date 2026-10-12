// from server: 70% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Color4 {
    float r, g, b, a;
    Color4(const Vector3&, float);
};

inline Color4::Color4(const Vector3& value, float alpha)
    : r(value.x), g(value.y), b(value.z), a(alpha)
{
}

struct Frame {
    float data[12];
    Frame();
};

struct Capsule {
    float data[7];
    ~Capsule();
};

extern const Vector3& direction();
extern Capsule makeCapsule(const Vector3&, const Vector3&);
extern const float strength;

struct Context {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void setFrame(const Frame&);
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void apply(Capsule, const Color4&, float);
};

struct LaserTool {
    char padding[24];
    int remaining;
    Vector3 start;
    Vector3 finish;

    void fire(Context*);
};

void LaserTool::fire(Context* context)
{
    if (remaining > 0) {
        --remaining;
        context->setFrame(Frame());
        Color4 color(direction(), 1.0f);
        context->apply(makeCapsule(start, finish), color, strength);
    }
}
