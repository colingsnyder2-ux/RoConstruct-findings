// from server: 51% by colin
struct GCamera {
    char pad[0x130];
    char sub[0x24];
    void copyFrom(const GCamera* other);
};

struct SignalDesc {
    char pad[0x10];
    void setValue(const void* value);
};

extern "C" void* __stdcall sub_56B620(void* arg);
extern "C" void __stdcall sub_639300(void* arg);

struct VVector3ValueSignalDesc {
    void func(int arg);
};

void VVector3ValueSignalDesc::func(int arg) {
    GCamera* cam = (GCamera*)this;
    GCamera* other = 0;
    if (cam) {
        other = (GCamera*)((char*)cam + 0x14);
    }
    GCamera* src = (GCamera*)((char*)cam + 0x130);
    GCamera local;
    local.copyFrom(src);
    float f1 = *(float*)((char*)src + 0x24);
    float f2 = *(float*)((char*)src + 0x28);
    float f3 = *(float*)((char*)src + 0x2c);
    void* result = sub_56B620(other);
    if (result) {
        GCamera tmp;
        tmp.copyFrom(&local);
        *(float*)((char*)&tmp + 0x24) = f1;
        *(float*)((char*)&tmp + 0x28) = f2;
        *(float*)((char*)&tmp + 0x2c) = f3;
        sub_639300((char*)result + 0x10);
    }
}
