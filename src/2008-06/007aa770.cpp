// from server: 88% by king_originala
extern "C" long __stdcall InterlockedDecrement(volatile long *);
extern const float upperLimit;

struct Control
{
    virtual ~Control();
    volatile long references;
    void dispose();
};

struct Handle
{
    Control *object;

    ~Handle()
    {
        if (object && InterlockedDecrement(&object->references) == 0)
        {
            object->dispose();
            if (object)
                delete object;
        }
    }
};

struct Pointer
{
    Control *object;
    void assign(Control *);
};

struct Generator
{
    Handle generate(float, float, bool, float, void *, void *, void *);
};

struct Scene
{
    char padding0[0x24];
    float first;
    float second;
    char padding1[0x2f4 - 0x2c];
    Generator generator;
    char padding2[0x308 - 0x2f5];
    unsigned long output;
    Pointer pointer;
    bool enabled;
    char padding3[3];
    float fourth;
    char padding4[0x3a0 - 0x318];
    char output2[0xf8];
    char output3;

    void update(float, float, bool, float);
};

void Scene::update(float a, float b, bool c, float d)
{
    float value = a <= 0.0f ? 0.0f : a >= upperLimit ? upperLimit : a;

    if (value != first || b != second || c != enabled || d != fourth)
    {
        first = value;
        second = b;
        fourth = d;
        enabled = c;
        pointer.assign(generator.generate(value, b, c, d,
                                          &output, output2, &output3).object);
    }
}
