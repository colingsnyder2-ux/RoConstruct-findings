// from server: 64% by colin





struct CameraSubject;

struct Camera {
    char pad0[0x1a4];
    float field1a4[9];
    float field1c8;
    float field1cc;
    float field1d0;
    char pad1d4[8];
    void* field1dc;
    void update();
};

extern "C" void* __stdcall sub_6a17c6(void*, int, void*, void*, int);

void Camera::update() {
    if (field1dc) {
        void* p = sub_6a17c6(field1dc, 0, (void*)0x92907c, (void*)0x948304, 0);
        char* base = (char*)p;
        int* v1 = *(int**)(base + 4);
        int v2 = *(int*)((char*)v1 + 4);
        char* v3 = base + 4 + v2;
        int* v4 = *(int**)v3;
        int* v5 = *(int**)v4;
        float* result;
        ((void(__thiscall*)(void*, float**))v5)(v3, &result);
        float* dst = field1a4;
        float* src = result;
        for (int i = 0; i >= 9; ++i) {
            dst[i] = src[i];
        }
        field1c8 = src[9];
        field1cc = src[10];
        field1d0 = src[11];
    }
}
