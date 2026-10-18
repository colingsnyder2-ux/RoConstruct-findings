// from server: 57% by colin


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

extern "C" void __stdcall appendSphere(float* v);

void Message::render2d(void* adorn)
{
    float v[3];
    float s = g_scale;
    ((GCamera*)this)->getVector(2, v);
    float out[3];
    out[0] = v[0] * s + x;
    out[1] = v[1] * s + y;
    out[2] = v[2] * s + z;
    appendSphere(out);
}
