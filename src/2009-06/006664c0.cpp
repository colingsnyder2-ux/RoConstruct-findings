// from server: 89% by atomic.potato
struct RBX_KernelJoint {
    void* vtbl0;
    char pad0[0x1c];
    void* vtbl20;
    char pad1[0x74];
    void* vtbl98;
    void destroy();
};

extern "C" void __stdcall sub_006a66d0();
extern "C" void __cdecl sub_00718a32(void*);

void RBX_KernelJoint::destroy()
{
    vtbl0 = (void*)0x8e2ca4;
    vtbl20 = (void*)0x8e2c88;
    vtbl98 = (void*)0x8e2c6c;
    sub_006a66d0();
    if (*(unsigned char*)((char*)this + 8) & 1) {
        sub_00718a32(this);
    }
}
