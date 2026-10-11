// from server: 92% by atomic.potato
struct VProfilingItem_BoundFuncDesc {
    char pad_0[0x8c];
    void* f_8c;
    void* f_90;
    void* f_94;
    VProfilingItem_BoundFuncDesc* ctor();
};

extern "C" void __stdcall sub_005D2E80();
extern "C" void* __stdcall sub_0089E1D0(void*);

VProfilingItem_BoundFuncDesc* VProfilingItem_BoundFuncDesc::ctor() {
    sub_005D2E80();
    f_8c = (void*)0x8df72c;
    sub_0089E1D0((void*)0xa3a1b8);
    f_90 = 0;
    f_94 = 0;
    *(void**)((char*)this + 0x00) = (void*)0x8e0e8c;
    *(void**)((char*)this + 0x14) = (void*)0x8e0e80;
    *(void**)((char*)this + 0x18) = (void*)0x8e0e78;
    *(void**)((char*)this + 0x20) = (void*)0x8e0e70;
    f_8c = (void*)0x8e0e64;
    return this;
}
