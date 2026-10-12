// from server: 94% by king_originala
struct Vector2
{
    float x, y;
};

struct Vector3
{
    float x, y, z;
};

struct Color4
{
    float x, y, z, w;
    Color4(const Vector3&);
};

inline Color4::Color4(const Vector3& v)
    : x(v.x), y(v.y), z(v.z), w(1.0f)
{
}

struct Matrix3
{
    float m[9];
};

struct Frame
{
    Matrix3 rotation;
    Vector3 position;
    Frame(const Matrix3&);
};

struct Part
{
    void* updatePV();
};

struct Human
{
    void* getPart();
};

struct Render
{
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
    virtual void draw(Vector3*, const void*, const Vector2*, double,
                      const Color4*, const Color4*, int, int, int);
};

extern "C" bool __cdecl checkHuman(Human*, int);
extern "C" const Vector3& __cdecl getZero();
extern "C" const Vector3& __cdecl getOne();
extern "C" const Matrix3& __cdecl getIdentity();
extern "C" void __cdecl drawPart(void*, Render*, const Color4*);
extern "C" void __cdecl drawFrame(Render*, const Frame*, int, float,
                                float, const Vector3*);

extern const float scaleValue;
extern const float drawValue;
extern const double lineValue;

struct S
{
    virtual const unsigned char* getGeometry();
    unsigned char pad04[4];
    Human* human;
    unsigned char pad0c[4];
    bool enabled;
    unsigned char pad11[19];
    Part* part;
    unsigned char pad28[4];
    Vector3 position;

    void prepare(Render*);
    void f(Render*);
};

void S::f(Render* render)
{
    if (enabled && checkHuman(human, 1))
    {
        prepare(render);
        if (part)
        {
            Color4 color(getOne());
            drawPart(part->updatePV(), render, &color);

            Frame frame(getIdentity());
            frame.position.x = position.x;
            frame.position.y = position.y;
            frame.position.z = position.z;
            drawFrame(render, &frame, 1, scaleValue, 1.0f, &getOne());
        }

        if (human->getPart())
        {
            Color4 color1(getZero());
            Color4 color2(getOne());
            Vector2 width;
            width.x = drawValue;
            width.y = drawValue;
            Vector3 result;
            const unsigned char* geometry = getGeometry();
            render->draw(&result, geometry + 4, &width, lineValue,
                         &color2, &color1, 1, 3, 0);
        }
    }
}
