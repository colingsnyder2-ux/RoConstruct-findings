// from server: 33% by colin
struct Stream {
    void write(const void* data, int bits, bool flag);
};

struct Source {
    unsigned char padding[8];
    unsigned char* data;
    unsigned int value;
    void prepare();
};

struct State {
    bool encode(Stream* stream, const void* data);
    void encodeDefault(Stream* stream, const void* data);
};

struct PhysicsSender {
    char pad0[0x3c];
    State* state;
};

struct SimJob {
    char pad0[0x24];
    float value24;
};

struct JobSender {
    char pad0[0x8c];
    float value8c;
};

struct Tracker {
    char pad0[0x228];
};

struct RoundRobinPhysicsSender : PhysicsSender {
    float field48;
    char pad4c[0x228 - 0x4c];
    Tracker tracker;

    bool sendPacket(int maxPackets, void* stats);
};

extern float g_float_8222f0;

extern "C" bool __cdecl sub_4aeac0(State* self, void* arg);
extern "C" bool __cdecl sub_4a8cc0(State* self, void* a, void* b);
extern "C" SimJob* __cdecl sub_598cb0(void* self);
extern "C" void __cdecl sub_4ca7b0(void* a, void* b, bool c);
extern "C" void __cdecl sub_5dd570(void* self, void* out);
extern "C" void __cdecl sub_4a5dd0(void* self, float x, float y, float z, float w);
extern "C" void* __cdecl sub_5e7570(Tracker* self);
extern "C" void* __cdecl sub_5e62d0(void* self);
extern "C" void __cdecl sub_4a6350(void* a, void* b);
extern "C" void* __cdecl sub_5e6400(void* self, int index);
extern "C" bool __cdecl sub_5ded60(float value);

extern "C" double __cdecl sqrt(double);

bool RoundRobinPhysicsSender::sendPacket(int maxPackets, void* stats)
{
    void* arg0 = *(void**)stats;
    if (sub_4aeac0(state, arg0))
        return false;

    void* arg1 = *(void**)((char*)stats + 4);
    if (!sub_4a8cc0(state, arg0, arg1))
        return false;

    SimJob* job = sub_598cb0(arg0);
    bool flag = g_float_8222f0 > field48;
    sub_4ca7b0(arg1, (char*)job + 0x24, flag);

    float out[4];
    sub_5dd570(out, job);

    float x = out[0];
    float y = out[1];
    float z = out[2];
    float w = out[3];
    float len = x * x + y * y + z * z + w * w;
    float inv = 1.0f / (float)sqrt((double)len);
    x *= inv;
    y *= inv;
    z *= inv;
    w *= inv;

    sub_4a5dd0(arg1, x, y, z, w);

    void* p = sub_5e7570(&tracker);
    void* q;
    if (p) {
        q = sub_5e62d0(p);
    } else {
        q = 0;
    }

    sub_4a6350(arg1, q);

    int count = (int)q;
    for (int i = 0; i < count; ++i) {
        float v = 0.0f;
        void* item = sub_5e6400(p, i);
        if (item)
            v = *(float*)((char*)item + 0x8c);
        bool b = sub_5ded60(v);
        sub_4a6350(arg1, (void*)(int)b);
    }

    return true;
}
