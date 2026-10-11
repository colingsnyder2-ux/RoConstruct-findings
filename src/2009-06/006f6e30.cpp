// from server: 76% by atomic.potato
struct Stage;
struct IPipelined {
    char pad0[4];
    IPipelined* next;
    void removeFromStage(Stage*);
};

struct MechToAssemblyStage {
    char pad0[8];
    void* field8;
    void func(void*);
};

extern "C" void __stdcall sub_6f6d20(void*, void*, void*);
extern "C" void __stdcall sub_6dad30(void*, void*);

void MechToAssemblyStage::func(void* arg) {
    void* p = field8;
    sub_6f6d20((char*)arg + 8, (void*)0x6dad50, p);
    sub_6dad30(field8, arg);
    ((IPipelined*)arg)->removeFromStage((Stage*)this);
}
