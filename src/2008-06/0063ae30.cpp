// from server: 61% by colin
struct GCamera {
    char pad[0x14];
    char field14[0x11c];
    char field130[0x30];
};

struct SignalBase {
    char pad[0x10];
    char field10[0x20];
};

extern "C" void copy_camera(GCamera* dst, const void* src);
extern "C" void* __stdcall find_signal(void* self, void* arg);
extern "C" void signal_connect(SignalBase* self, void* arg);

struct VVector3ValueSignalDesc {
    void method(void* arg);
};

void VVector3ValueSignalDesc::method(void* arg)
{
    GCamera* cam = (GCamera*)this;
    char* base;
    if (cam != 0)
        base = (char*)cam + 0x14;
    else
        base = 0;

    char* src = (char*)cam + 0x130;

    char local[0x30];
    copy_camera((GCamera*)local, src);

    float f0 = *(float*)(src + 0x24);
    float f1 = *(float*)(src + 0x28);
    float f2 = *(float*)(src + 0x2c);

    void* result = find_signal((void*)0x97d4c4, base);
    if (result != 0)
    {
        char tmp[0x30];
        copy_camera((GCamera*)tmp, local);
        *(float*)(tmp + 0x24) = f0;
        *(float*)(tmp + 0x28) = f1;
        *(float*)(tmp + 0x2c) = f2;
        signal_connect((SignalBase*)((char*)result + 0x10), tmp);
    }
}
