// from server: 51% by colin
struct EnumPropDescriptor {
    void* getset;
    void construct(int arg);
};

extern "C" void* __cdecl operator_new(unsigned int size);

void EnumPropDescriptor::construct(int arg) {
    this->getset = 0;
    void* p = operator_new(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x7b9070;
        *(int*)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    this->getset = p;
}
