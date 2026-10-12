// from server: 92% by king_originala
struct Rotation {
    float m[9];
    Rotation(const Rotation&);
};

struct Frame {
    Rotation rotation;
    float x, y, z;
    Frame lerp(const Frame&, float) const;
};

struct Camera {
    char data[0x44];
    Frame getFrame() const;
    void setFrame(const Frame&);
};

struct Subject {
    void update(Frame&, Frame&);
};

struct Controller {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void update();
};

extern "C" void* __cdecl dynamicCastHelper(
    void*, long, const void*, const void*, int);

extern bool __cdecl validFrame(const Frame&);
extern bool __cdecl closeFrames(const Frame&, const Frame&, float, float);

struct S {
    char padding[0x130];
    Camera camera;
    Frame frame;
    Frame otherFrame;
    int reserved;
    int enabled;
    void* subject;

    void prepare();
    Controller* getController();
    void f();
};

void S::f()
{
    prepare();

    Frame saved = frame;

    void* intermediate = subject
        ? dynamicCastHelper(subject, 0,
                            reinterpret_cast<const void*>(0x92907c),
                            reinterpret_cast<const void*>(0x948304), 0)
        : 0;

    Subject* current = static_cast<Subject*>(
        dynamicCastHelper(intermediate, 0,
                          reinterpret_cast<const void*>(0x948304),
                          reinterpret_cast<const void*>(0x9516c8), 0));

    if (current)
        current->update(frame, otherFrame);

    Frame previous = camera.getFrame();
    Frame next = previous.lerp(
        saved, *reinterpret_cast<const float*>(0x826fc8));

    if (validFrame(next))
        camera.setFrame(next);

    if (!enabled ||
        !closeFrames(next, previous,
                     *reinterpret_cast<const float*>(0x82748c),
                     *reinterpret_cast<const float*>(0x82748c))) {
        Controller* controller = getController();
        if (controller)
            controller->update();
    }
}
