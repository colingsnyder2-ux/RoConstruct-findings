// from server: 71% by atomic.potato
struct RBX_AdornG3D {
    void* vtable;

    void get();
};
void RBX_AdornG3D::get() {
    ((void (**)())vtable)[0x48 / sizeof(void*)]();
}
