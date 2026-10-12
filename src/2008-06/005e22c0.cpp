// from server: 83% by king_originala
struct Color {
    float x, y, z;
};

struct Signal {
    void fire(const void*, int);
};

struct Connection {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    Connection* find(void*);
};

namespace RBX {
    struct Instance {
        char padding[0x25c];
    };

    struct ServiceProvider {
        void update();
    };
}

extern RBX::ServiceProvider* __cdecl func_004651c0(RBX::Instance*);

struct Leading {
    char padding[0x14];
};

struct Lighting : Leading, RBX::Instance {
    Color color;

    void notify(void*);
    void setColor(Color value);
};

void Lighting::setColor(Color value)
{
    if (color.x != value.x ||
        value.y != color.y ||
        value.z != color.z) {
        color.x = value.x;
        color.y = value.y;
        color.z = value.z;

        notify(reinterpret_cast<void*>(0x97a900));

        Connection* connection =
            reinterpret_cast<Registry*>(0x97a88c)->find(
                static_cast<RBX::Instance*>(this));

        if (connection) {
            char argument;
            connection->signal.fire(&argument, 0);
        }

        RBX::ServiceProvider* provider =
            func_004651c0(reinterpret_cast<RBX::Instance*>(this));

        if (provider)
            provider->update();
    }
}
