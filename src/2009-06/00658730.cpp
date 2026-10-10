// from server: 95% by why2
struct VProfilingItem_BoundFuncDesc {
    int f();
};

int VProfilingItem_BoundFuncDesc::f() {
    if (*(unsigned char*)((char*)this + 4) != 0)
        return 1;
    return -(int)*(unsigned char*)((char*)this + 5);
}
