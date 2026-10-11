// from server: 75% by atomic.potato
struct MechToAssemblyStage {
    char pad0[8];
    void* field8;
    void removeStage(void*);
};

extern "C" void __stdcall sub_6f6d20(void*, void*, void*);
extern "C" void __stdcall sub_6dae00(void*, void*);
extern "C" void __stdcall sub_6d5c50(void*, void*);

void MechToAssemblyStage::removeStage(void* arg) {
    void* p = field8;
    sub_6f6d20((char*)arg + 8, (void*)0x6dadd0, p);
    sub_6dae00(field8, arg);
    sub_6d5c50(arg, this);
}
