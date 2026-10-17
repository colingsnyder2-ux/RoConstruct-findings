// from server: 67% by colin
struct Instance {
    char pad[0x104];
    void* field_104;
    float getSomething();
};

float Instance::getSomething()
{
    void* p = field_104;
    if (p) {
        void* r = __RTDynamicCast(p, 0, (void*)0x92907c, (void*)0x92dd50, 0);
        if (r) {
            float a = *(float*)((char*)r + 0x1e8);
            float b = *(float*)((char*)r + 0x328);
            return 1.0f - (1.0f - a) * b;
        }
    }
    return 0.0f;
}
