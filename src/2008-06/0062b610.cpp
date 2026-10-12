// from server: 87% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Vector3
{
    float x, y, z;
};

struct Frame
{
    char padding[36];
    Vector3 position;
};

struct Primitive
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual float measure();
    const Frame& getValue();
};

struct PartInstance;

struct GetSetImpl
{
    static PartInstance* get(Primitive*);
};

struct Pair
{
    void* object;
    void* owner;
    Pair();
    Pair(const Pair&);
};

Pair __cdecl makePair(PartInstance*);

struct Proxy
{
    bool empty();
};

struct Connection
{
    char padding[16];
    Proxy* proxy;
};

struct Base
{
    char padding[0x134];
};

struct Signal
{
    Connection* find(Base*);
    void fire(Base*, Pair, float);
};

extern Signal signal;

struct Head
{
    char padding[20];
};

struct List
{
    Primitive** data;
    int count;
};

struct S : Head, Base
{
    Vector3 position;
    float radius;
    void process(List*);
};

void S::process(List* list)
{
    Connection* connection = signal.find(this);
    if (!connection || connection->proxy->empty())
        return;

    for (int i = 0; i < list->count; ++i)
    {
        Primitive* primitive = list->data[i];
        float diameter = radius + radius;
        if (diameter > primitive->measure())
        {
            PartInstance* part = GetSetImpl::get(primitive);
            if (part)
            {
                const Vector3& p = primitive->getValue().position;
                float x = p.x - position.x;
                float y = p.y - position.y;
                float z = p.z - position.z;
                signal.fire(this, makePair(part),
                    (float)sqrt(x * x + y * y + z * z));
            }
        }
    }
}
