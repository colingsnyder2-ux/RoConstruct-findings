// from server: 36% by colin
struct CXTIconHandle {
    void* field0;
    void* field4;
    int f(void* a, void* b);
};

int CXTIconHandle::f(void* a, void* b) {
    if (a == 0) {
        return ((int (__thiscall*)(void*, void*))*(void**)this)(this, b);
    }
    if (b == 0) {
        ((void (__thiscall*)(void*, void*))*(void**)((char*)this + 4))(this, a);
        return 0;
    }
    return ((int (__stdcall*)(void*, void*, void*, void*))0x802338)(field4, 0, a, b);
}
