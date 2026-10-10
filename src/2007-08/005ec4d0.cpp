// from server: 43% by colin
struct Vector3 {
    float x;
    float y;
    float z;
};

struct Body {
    char pad[0x64];
    void* body;
};

struct BodyThrust {
    char pad0[0x10];
    Body* body;
    Vector3 bodyThrustValue;
    Vector3 location;
    void computeForceImpl(bool throttling, Body* body, Body* root, Vector3& force, Vector3& torque);
};

extern "C" void __stdcall func_00530100();
extern "C" void __stdcall func_005cf030(Vector3* a, Vector3* b);

void BodyThrust::computeForceImpl(bool throttling, Body* body, Body* root, Vector3& force, Vector3& torque)
{
    Body* b = *(Body**)((char*)this + 0x10);
    void* p = *(void**)((char*)b + 0x1d8);
    void* q = *(void**)((char*)p + 0x64);
    func_00530100();
    float* m = (float*)q;
    float fx = m[0x84/4] * this->bodyThrustValue.x + m[0x88/4] * this->bodyThrustValue.y + m[0x8c/4] * this->bodyThrustValue.z;
    float fy = m[0x90/4] * this->bodyThrustValue.x + m[0x94/4] * this->bodyThrustValue.y + m[0x98/4] * this->bodyThrustValue.z;
    float fz = m[0x9c/4] * this->bodyThrustValue.x + m[0xa0/4] * this->bodyThrustValue.y + m[0xa4/4] * this->bodyThrustValue.z;
    force.x = fx;
    force.y = fy;
    force.z = fz;
    func_00530100();
    float lx = m[0x84/4] * this->location.x + m[0x88/4] * this->location.y + m[0x8c/4] * this->location.z + m[0xa8/4];
    float ly = m[0x90/4] * this->location.x + m[0x94/4] * this->location.y + m[0x98/4] * this->location.z + m[0xac/4];
    float lz = m[0x9c/4] * this->location.x + m[0xa0/4] * this->location.y + m[0xa4/4] * this->location.z + m[0xb0/4];
    torque.x = lx;
    torque.y = ly;
    torque.z = lz;
    void* v = *(void**)((char*)q + 4);
    void* w = *(void**)((char*)v + 0x20);
    if (w == 0) {
        func_005cf030(&force, &torque);
    }
}
