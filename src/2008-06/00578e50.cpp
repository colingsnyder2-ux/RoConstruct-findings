// from server: 86% by king_originala
struct Scope
{
    const char* name;
    void* previous;
    bool enabled;
    double startTime;

    Scope(const char* nameValue, bool enabledValue);
    ~Scope();
};

struct Result
{
    void finish();
};

struct Interface
{
    virtual void slot0();
    virtual Result* get();
};

struct Owner
{
    char padding0[0x288];
    Interface interfaceObject;
    char padding1[0x19C];
    const char* scopeName;
};

struct Secondary
{
    void update();
};

struct S
{
    char padding0[0x1FC];
    Secondary* secondary;
    char padding1[4];
    Owner* owner;
    char padding2[0x51];
    bool enabled;

    void step(float value);
    void apply(float value);
};

void S::step(float value)
{
    if (enabled)
    {
        Scope scope(owner->scopeName, true);
        apply(value);
        owner->interfaceObject.get()->finish();
        secondary->update();
    }
}
