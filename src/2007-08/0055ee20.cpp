// from server: 52% by colin
struct WatchCameraCommand {
    void* field0;
    WatchCameraCommand(int a, int b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

WatchCameraCommand::WatchCameraCommand(int a, int b)
{
    field0 = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7a91a0;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}
