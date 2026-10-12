// from server: 86% by king_originala
struct Color
{
    float r, g, b, a;
};

struct Property
{
    char data;
};

extern Property property;

struct Signal
{
    void fire(char*, int);
};

struct Connection
{
    char padding[0x10];
    Signal signal;
};

struct Registry
{
    Connection* find(void*);
};

extern Registry registry;

struct ServiceProvider
{
    void update();
};

struct Prefix
{
    char padding[0x14];
};

struct Object
{
    char padding[0x240];
};

struct Lighting : Prefix, Object
{
    Color color;

    void notify(Property*);
    void setColor(Color);
};

ServiceProvider* __cdecl findServiceProvider(Lighting*);

void Lighting::setColor(Color value)
{
    if (color.r != value.r ||
        color.g != value.g ||
        color.b != value.b ||
        color.a != value.a)
    {
        color.r = value.r;
        color.g = value.g;
        color.b = value.b;
        color.a = value.a;

        notify(&property);

        Connection* connection = registry.find(static_cast<Object*>(this));
        if (connection)
        {
            char token;
            connection->signal.fire(&token, 0);
        }

        ServiceProvider* provider = findServiceProvider(this);
        if (provider)
            provider->update();
    }
}
