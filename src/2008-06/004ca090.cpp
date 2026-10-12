// from server: 39% by colin
struct RoundRobinPhysicsSender {
    char pad[8];
    int count;
    char pad2[0x18 - 0xc];
    float scale;
    int result;
    void update();
};

extern float g_float_819778;

void RoundRobinPhysicsSender::update() {
    int c = count;
    float f = (float)c;
    if (c < 0) {
        f += g_float_819778;
    }
    f *= scale;
    result = -1;
    if (f == g_float_819778) {
        return;
    }
    result = (int)f;
}
