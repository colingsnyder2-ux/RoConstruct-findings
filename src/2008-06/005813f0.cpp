// from server: 72% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance {
    virtual void unused();
};

struct PVInstance : Instance {
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedInstance {
    Instance* pointer;
    Control* control;
    ~SharedInstance();
};

__forceinline SharedInstance::~SharedInstance()
{
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
}

struct InstanceHolder {
    SharedInstance getInstance();
};

struct Link {
    InstanceHolder* get();
};

struct Cam {
    void setSubject(PVInstance*);
    void setCameraType(int);
};

struct CameraProvider {
    virtual void unused();
    virtual Cam* getCamera();
};

struct Owner {
    char padding[0x288];
    CameraProvider provider;
};

struct Name {
    char padding[4];
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
};

struct Argument {
    virtual void destroy(int);
};

extern void __cdecl handle(const char*, Owner*);

struct TrackCameraCommand {
    char padding0[4];
    Name* name;
    char padding8[4];
    Owner* owner;
    char padding10[16];
    Link* link;
    void execute(Argument*);
};

void TrackCameraCommand::execute(Argument* argument)
{
    PVInstance* subject =
        dynamic_cast<PVInstance*>((link ? link->get() : 0)->getInstance().pointer);

    if (subject) {
        owner->provider.getCamera()->setSubject(subject);
        owner->provider.getCamera()->setCameraType(3);
    }

    handle(name->capacity < 16 ? name->buffer : name->pointer, owner);
    argument->destroy(1);
}
