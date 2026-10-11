// from server: 50% by atomic.potato
struct Creator {
    void* field0;
    Creator(int arg, int arg2);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* g_vtable = (void*)0x8217e8;

Creator::Creator(int arg, int arg2) {
    field0 = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = g_vtable;
        *(int*)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
}
