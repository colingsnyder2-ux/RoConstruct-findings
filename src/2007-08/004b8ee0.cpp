// from server: 76% by colin
struct RakPeer {
    virtual bool vfunc0();
    virtual bool vfunc1();
    virtual bool vfunc2();
    virtual bool vfunc3();
    virtual bool vfunc4();
    virtual bool vfunc5();
    virtual bool vfunc6();
    virtual bool vfunc7();
    virtual bool vfunc8();
    virtual bool vfunc9();
    virtual bool vfunc10();
    virtual bool vfunc11();
    bool func(void* dest);
};

bool RakPeer::func(void* dest) {
    if (vfunc11()) {
        return false;
    }
    if (*(unsigned char*)((char*)this + 0x70c) == 0) {
        return false;
    }
    unsigned int* d = (unsigned int*)dest;
    unsigned int* s = (unsigned int*)((char*)this + 0x2cc);
    for (int i = 0; i < 0x100; i++) {
        d[i] = s[i];
    }
    return true;
}
