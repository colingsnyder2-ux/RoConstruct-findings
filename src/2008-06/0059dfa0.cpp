// from server: 90% by king_originala
#pragma float_control(precise, off)

struct Vector {
    float x, y, z;
    Vector(const Vector& other);
};

inline Vector::Vector(const Vector& other)
{
    x = other.x;
    y = other.y;
    z = other.z;
}

struct Data {
    int header;
    Vector size;
};

struct Manager {
    void begin(void* property);
    void end(void* property);
};

struct S;
extern Manager* __cdecl getManager(S* object);
extern char descriptor;

template<class T>
inline const T& maximum(const T& a, const T& b)
{
    return a < b ? b : a;
}

struct S {
    char padding0[0x1dc];
    int mode;
    int value;
    char padding1[0x44];
    char property[0x9c];
    Data* data;

    void notify(const void* descriptor);
    Vector transform(const Vector& size);
    void apply(const Vector& size);
    void update();
    void setValue(int newValue);
};

void S::setValue(int newValue)
{
    int selected = 0;
    if (mode != 1)
        selected = newValue;

    if (selected == value)
        return;

    Manager* manager = getManager(this);
    if (manager)
        manager->begin(property);

    if (selected != value) {
        value = selected;
        notify(&descriptor);
    }

    Vector size(data->size);
    float rounded = (float)(int)size.y;
    float minimum = 1.0f;
    size.y = maximum(minimum, rounded);

    Vector transformed = transform(size);
    apply(transformed);
    update();

    manager = getManager(this);
    if (manager)
        manager->end(property);
}
