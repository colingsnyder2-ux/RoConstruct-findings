// from server: 83% by king_originala
struct Color {
    float r, g, b;
};

struct Property;
extern Property property;

struct Signal {
    void fire(char*, int);
};

struct SignalRecord {
    char padding[0x10];
    Signal signal;
};

struct ObjectBase {
    char padding[0x14];
};

struct NotificationBase {
    char padding[0x278];
};

struct SignalMap {
    SignalRecord* find(NotificationBase*);
};

extern SignalMap signalMap;

namespace RBX {
    class Instance;
    class ServiceProvider {
    public:
        void update();
    };
}

RBX::ServiceProvider* __cdecl func_004651c0(RBX::Instance*);

struct Lighting : ObjectBase, NotificationBase {
    Color color;

    void notify(Property*);
    void setColor(Color);
};

void Lighting::setColor(Color value)
{
    float r = value.r;
    float g = value.g;
    float b = value.b;

    if (color.r != r || color.g != g || color.b != b) {
        color.r = r;
        color.g = g;
        color.b = b;
        notify(&property);

        SignalRecord* record = signalMap.find(this);
        if (record) {
            char argument;
            record->signal.fire(&argument, 0);
        }

        RBX::ServiceProvider* provider =
            func_004651c0(reinterpret_cast<RBX::Instance*>(this));
        if (provider)
            provider->update();
    }
}
