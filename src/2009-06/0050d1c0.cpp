// from server: 0% by atomic.potato
struct DirectPhysicsReceiver {
    void* field0;
    DirectPhysicsReceiver(void*);
};

extern "C" void* __cdecl sub_718A38(unsigned int);

DirectPhysicsReceiver::DirectPhysicsReceiver(void* a) {
    field0 = 0;
    void* p = sub_718A38(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x8c990c;
        *(void**)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}
