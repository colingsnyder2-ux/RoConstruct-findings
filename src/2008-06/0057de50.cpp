// from server: 51% by tester
struct WatchCameraCommand {
    void* field0;
    void construct(int a, int b);
};

extern "C" void* __cdecl func_006a0920(unsigned int size);

void WatchCameraCommand::construct(int a, int b)
{
    field0 = 0;
    void* p = func_006a0920(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x830720;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}
