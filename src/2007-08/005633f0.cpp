// from server: 63% by colin
struct CameraZoomOutCommand {
    char pad[0xc];
    void* field_c;
    void doIt(void* dataState);
};

struct Camera {
    char pad[0x228];
    void* vtable;
};

struct Workspace {
    char pad[0x228];
    Camera* camera;
};

extern "C" float flt_79646c;

extern "C" bool __fastcall sub_59a360(void* camera, float zoom);
extern "C" void* __fastcall sub_561b10(void* workspace, int arg);
extern "C" void __fastcall sub_58c810(void* obj);
extern "C" void __fastcall sub_4108b0(void* obj, int arg);

void CameraZoomOutCommand::doIt(void* dataState)
{
    Workspace* ws = (Workspace*)field_c;
    Camera* cam = ws->camera;
    void* vtbl = cam->vtable;
    void* (*getCamera)(void*) = *(void* (**)(void*))((char*)vtbl + 4);
    void* camera = getCamera((char*)cam + 0x228);

    if (sub_59a360(camera, flt_79646c)) {
        void* ws2 = field_c;
        void* obj = sub_561b10(ws2, 0xb);
        sub_58c810(obj);
        void* ds = *(void**)((char*)dataState + 8);
        sub_4108b0(ds, -1);
        void** dsVtbl = *(void***)ds;
        void (*fn)(void*, int) = (void (*)(void*, int))dsVtbl[1];
        *(int*)((char*)ds + 4) = -1;
        fn(ds, 1);
    }
}
