// from server: 52% by tester
struct Creator {
    void* field0;
    Creator(int arg0, int arg1);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(int arg0, int arg1)
{
    field0 = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x8217a8;
        *(int*)((char*)p + 0xc) = arg0;
    } else {
        p = 0;
    }
    field0 = p;
}
