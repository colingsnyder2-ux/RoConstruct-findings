// from server: 87% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void destroy();
    virtual void dispose();
    volatile long strong;
    volatile long weak;
};

struct Selection {
    char padding[0x148];
    void** first;
    void** last;
};

struct Camera {
    char padding[0x1d4];
    int state;
};

struct CameraSource {
    virtual void unused();
    virtual Camera* get();
};

struct World {
    char padding[0x288];
    CameraSource camera;
};

struct SelectionAccess {
    World* world;
    Selection* object;
    Control* control;

    SelectionAccess(World*);
    ~SelectionAccess();
    Selection* get(bool);
};

inline SelectionAccess::SelectionAccess(World* value)
    : world(value), object(0), control(0) {
}

inline SelectionAccess::~SelectionAccess() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct CameraCenterCommand {
    char padding[12];
    World* world;
    bool enabled();
};

bool CameraCenterCommand::enabled() {
    bool selected;
    {
        SelectionAccess access(world);
        Selection* selection = access.get(true);
        selected = static_cast<unsigned int>(
            selection->last - selection->first) >= 1;
    }

    if (selected) {
        Camera* camera = world->camera.get();
        if (camera && camera->state == 0)
            return true;
    }
    return false;
}
