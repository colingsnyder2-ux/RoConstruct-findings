// from server: 57% by atomic.potato
struct RBX_VRotateP_FactoryProduct {
    void construct(int);
};

extern "C" void __stdcall sub_717870();

void RBX_VRotateP_FactoryProduct::construct(int a) {
    char pad[0x98];
    sub_717870();
    *(int*)((char*)this + 0x00) = 0x9df47c;
    *(int*)((char*)this + 0x04) = 0x9df470;
    *(int*)((char*)this + 0x18) = 0x9df464;
    *(int*)((char*)this + 0x1c) = 0x9df45c;
    *(int*)((char*)this + 0x94) = 0x9df444;
}
