// from server: 84% by colin
struct CameraZoomOutCommand {
    char pad[0xc];
    void* camera;
    void doIt();
};

extern void __stdcall func_005994c0(void*, int);

void CameraZoomOutCommand::doIt()
{
    char* cam = (char*)camera;
    void* vtbl = *(void**)(cam + 0x228);
    void* fn = *(void**)((char*)vtbl + 4);
    typedef void* (__thiscall *Fn)(void*);
    void* result = ((Fn)fn)(cam + 0x228);
    func_005994c0(result, -1);
}
