// from server: 83% by king_originala
struct Vector {
    float x, y, z;
};

struct Frame {
    Vector first;
    Vector second;
};

struct Source {
    char reserved[0xc4];
    Frame value;

    const void* get();
    void set(const Frame& value);
};

extern char property;

struct S {
    char reserved[0x2c8];
    Source* source;

    void changed(const void* property);
    void f(const Vector& value);
};

void S::f(const Vector& value)
{
    Source* p = source;
    p->get();

    Frame frame = {
        { p->value.first.x, p->value.first.y, p->value.first.z },
        { p->value.second.x, p->value.second.y, p->value.second.z }
    };

    if (value.x != frame.second.x ||
        value.y != frame.second.y ||
        value.z != frame.second.z) {
        frame.second.x = value.x;
        frame.second.y = value.y;
        frame.second.z = value.z;
        source->set(frame);
        changed(&property);
    }
}
