// from server: 80% by colin
struct VPartInstance {
    int f(void* out);
};

extern "C" void __cdecl sub_613560(float*);
extern "C" void __cdecl sub_6136a0(float*);
extern "C" void __cdecl sub_613290(float*);
extern "C" void __cdecl sub_613440(float*);
extern "C" void __cdecl sub_6131e0(float*);
extern "C" void __cdecl sub_613320(float*);
extern "C" void __cdecl sub_6139c0(float*);

int VPartInstance::f(void* out) {
    float v[6];
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    v[3] = 0.0f;
    v[4] = 0.0f;
    v[5] = 0.0f;

    int t = *(int*)this;
    switch (t) {
    case 0:
        sub_613560(v);
        break;
    case 1:
        sub_6136a0(v);
        break;
    case 2:
        sub_613290(v);
        break;
    case 3:
        sub_613440(v);
        break;
    case 4:
        sub_6131e0(v);
        break;
    case 5:
        sub_613320(v);
        break;
    case 6:
        sub_6139c0(v);
        break;
    }

    float* o = (float*)out;
    o[0] = v[3];
    o[1] = v[4];
    o[2] = v[5];
    return 0;
}
