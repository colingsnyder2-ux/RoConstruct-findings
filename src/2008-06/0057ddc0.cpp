// from server: 52% by colin
struct WatchCameraCommand {
    void* field0;
    WatchCameraCommand(int a, int b);
};

extern "C" void* __cdecl func_006a0920(unsigned int size);

WatchCameraCommand::WatchCameraCommand(int a, int b)
{
    field0 = 0;
    void* p = func_006a0920(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x83070c;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}
