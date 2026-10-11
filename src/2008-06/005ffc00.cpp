// from server: 93% by colin
struct GCamera {
    int data[9];
    GCamera(const GCamera& other);
};

struct Tool {
    char pad[0x1cc];
    GCamera camera;
    void method_5ffb70(float*);
    void method_5ffc00(float*);
};

void Tool::method_5ffc00(float* p) {
    GCamera tmp(this->camera);
    float v[3];
    v[0] = p[0];
    v[1] = p[1];
    v[2] = p[2];
    this->method_5ffb70(v);
}
