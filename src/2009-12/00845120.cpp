// from server: 58% by atomic.potato
struct CXTPControls {
    void f(int);
};

void CXTPControls::f(int arg) {
    struct VTable {
        char pad[0x74];
        void (__thiscall *fn)(CXTPControls *, int);
    };
    VTable *vt = *(VTable **)this;
    vt->fn(this, arg);
}
