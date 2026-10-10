// from server: 51% by colin
struct WatchCameraCommand {
    void* field0;
    WatchCameraCommand(int arg);
};

extern "C" void* __cdecl func_0062fef6(unsigned int size);

WatchCameraCommand::WatchCameraCommand(int arg)
{
    field0 = 0;
    void* p = func_0062fef6(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7a918c;
        *(int*)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
}
