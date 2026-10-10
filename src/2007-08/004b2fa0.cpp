// from server: 49% by colin
struct ClientProxy {
    void* ptr;
    ClientProxy(int);
};

extern "C" void* __cdecl operator_new(unsigned int);

ClientProxy::ClientProxy(int a) {
    ptr = 0;
    void* p = operator_new(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x79d358;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    ptr = p;
}
