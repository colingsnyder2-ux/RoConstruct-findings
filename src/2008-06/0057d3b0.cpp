// from server: 84% by tester
struct VInstance {
    void constructSignalDesc(int);
    char pad[0xc];
    int field_c;
    char pad2[0x1c8 - 0x10];
};

struct SignalDesc {
    void* vtable;
    char pad[8];
    int field_c;
    void* init(int* owner);
};

extern "C" void* __stdcall sub_802458();
extern "C" void __stdcall sub_830684();
extern "C" void __stdcall sub_830670();

void* SignalDesc::init(int* owner)
{
    int* p = owner ? (int*)((char*)owner + 0x1c8) : 0;
    char buf[0x1c];
    sub_802458();
    sub_830684();
    ((VInstance*)this)->constructSignalDesc((int)p);
    this->field_c = (int)owner;
    this->vtable = (void*)0x830670;

    return this;
}
