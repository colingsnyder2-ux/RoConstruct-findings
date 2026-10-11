// from server: 49% by colin
struct Creator {
    void* field0;
    Creator(int arg);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* g_vtable = (void*)0x8217e8;

Creator::Creator(int arg) {
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
