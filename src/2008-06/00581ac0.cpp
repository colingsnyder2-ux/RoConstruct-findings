// from server: 75% by king_originala
namespace RBX {
    struct Instance;
    struct ServiceProvider {
        void tilt(int);
    };
}

RBX::ServiceProvider* __cdecl func_005807b0(RBX::Instance*);

struct Camera {
    bool canTilt(int);
};

struct CameraAccess {
    virtual void reserved();
    virtual Camera* get();
};

struct Completion {
    virtual void complete(int);
};

struct CameraTiltDownCommand {
    char padding[12];
    RBX::Instance* instance;

    void execute(Completion*);
};

void CameraTiltDownCommand::execute(Completion* completion)
{
    CameraAccess* access =
        reinterpret_cast<CameraAccess*>(
            reinterpret_cast<char*>(instance) + 0x288);
    Camera* camera = access->get();

    if (camera->canTilt(1)) {
        func_005807b0(instance)->tilt(11);
        completion->complete(1);
    }
}
