// from server: 85% by king_originala
struct Vec
{
    float x, y, z;
    Vec();
    Vec(float, float, float);
    void set(float, float, float);
    void normalize();
};

inline Vec::Vec()
{
}

inline Vec::Vec(float a, float b, float c) : x(a), y(b), z(c)
{
}

inline void Vec::set(float a, float b, float c)
{
    x = a;
    y = b;
    z = c;
}

struct Part
{
    Vec* get(Vec*, int);
};

struct Handle
{
    void* object;
    void* control;
    void clear();
};

struct S
{
    char padding[0x1bc];
    Handle handle;
    Vec position;

    void setPart(Part*);
    void setVector(const Vec&);
    void f(int, Part*);
};

void S::f(int arg, Part* part)
{
    if (part)
    {
        Vec v;
        part->get(&v, arg)->normalize();

        static Vec offset(1.0f, 0.0f, 0.0f);
        position.set(offset.x + v.x,
                     offset.y + v.y,
                     offset.z + v.z);

        handle.clear();
        setPart(part);
        setVector(v);
    }
}
