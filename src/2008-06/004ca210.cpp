// from server: 42% by colin
extern "C" void __stdcall sub_4A5600(float* out, int count, int flag);
extern "C" void __stdcall sub_4C9C80(float value);

struct RoundRobinPhysicsSender
{
    void send(float x, float y, float z);
};

void RoundRobinPhysicsSender::send(float x, float y, float z)
{
    float len = x * x + y * y + z * z;
    float tmp;
    float v;
    sub_4A5600(&tmp, 0x20, 1);
    v = tmp;
    if (v != 0.0f)
    {
        float inv = 1.0f / v;
        sub_4C9C80(inv * x);
        sub_4C9C80(inv * y);
        sub_4C9C80(inv * z);
    }
}
