// from server: 52% by colin
struct GCamera {
    float m[3][4];
    void getVector(int index, float* out);
};

struct Message {
    char pad[0x24];
    float x;
    float y;
    float z;
    void __cdecl render2d(void* adorn);
};

extern float g_scale;

void Message::render2d(void* adorn)
{
    float v[3];
    float s = g_scale;
    ((GCamera*)this)->getVector(2, v);
    float nx = v[0] * s;
    float ny = v[1] * s;
    float nz = v[2] * s;
    float px = x + nx;
    float py = y + ny;
    float pz = z + nz;
    float out[3];
    out[0] = px;
    out[1] = py;
    out[2] = pz;
    ((void (__stdcall*)(float*))0x518e20)(out);
}
