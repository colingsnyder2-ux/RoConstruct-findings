// from server: 50% by king_originala
struct Vector3 {
    float x, y, z;
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
};

struct Color4 {
    float r, g, b, a;
    Color4(const Vector3& v, float alpha)
        : r(v.x), g(v.y), b(v.z), a(alpha) {}
};

struct Transform {
    float rotation[9];
    Vector3 position;
};

struct Primitive {
    const Transform& getTransform();
};

struct Part {
    char padding[0x228];
    Primitive primitive;
};

struct Joint {
    Part* getPart0();
    Part* getPart1();
};

struct State {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int disabled();
    virtual void slot4();
    virtual int kind();
    char padding[0x20];
    unsigned char selected;
};

struct Frame {
    char data[48];
    Frame();
    ~Frame() {}
};

struct Segment {
    char data[28];
    ~Segment() {}
};

extern const Vector3& red();
extern const Vector3& green();
extern Segment makeSegment(const Vector3&, const Vector3&);

struct Renderer {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void setFrame(const Frame&);
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void drawSegment(const Segment&, const Color4&, float);
};

struct S {
    char padding[0x20];
    State* state;
    void render(Renderer*);
};

void S::render(Renderer* renderer)
{
    State* s = state;
    if (s->disabled() || s->kind() < 5)
        return;

    Joint* joint = reinterpret_cast<Joint*>(
        reinterpret_cast<char*>(this) - 0x130);

    Primitive* p0 = joint->getPart0()
        ? &joint->getPart0()->primitive : 0;
    Primitive* p1 = joint->getPart1()
        ? &joint->getPart1()->primitive : 0;

    static const Vector3 zero(0.0f, 0.0f, 0.0f);
    Vector3 a(p0 ? p0->getTransform().position : zero);
    Vector3 b(p1 ? p1->getTransform().position : zero);
    Vector3 color(state->selected ? green() : red());

    renderer->setFrame(Frame());
    renderer->drawSegment(makeSegment(a, b), Color4(color, 1.0f), 0.1f);
}
