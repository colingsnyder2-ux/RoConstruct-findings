// from server: 67% by colin
struct CameraTiltDownCommand {
    char pad[0xc];
    void* workspace;
    void doIt(void* dataState);
};

struct WorkspaceCamera {
    char pad[0x288];
    void* camera;
};

struct Camera {
    void* vtable;
};

extern "C" void __stdcall sub_5cc040(void* camera, int value);

void CameraTiltDownCommand::doIt(void* dataState)
{
    WorkspaceCamera* wc = (WorkspaceCamera*)workspace;
    Camera* cam = (Camera*)wc->camera;
    void (__stdcall *fn)(void*) = *(void (__stdcall **)(void*))((char*)cam + 4);
    fn((char*)wc + 0x288);
    sub_5cc040((void*)0, 1);
}
