// from server: 93% by colin
struct CameraTiltUpCommand {
    void doIt();
};

struct Camera {
    char pad[0x228];
    void* vtable;
};

struct CameraHolder {
    char pad[0xc];
    Camera* camera;
};

extern "C" void __stdcall sub_599570(int);

void CameraTiltUpCommand::doIt() {
    CameraHolder* holder = (CameraHolder*)this;
    Camera* cam = holder->camera;
    void** vtbl = *(void***)((char*)cam + 0x228);
    typedef void* (__thiscall *Fn)(void*);
    Fn fn = (Fn)vtbl[1];
    void* result = fn((char*)cam + 0x228);
    sub_599570(-1);
    (void)result;
}
