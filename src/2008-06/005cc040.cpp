// from server: 55% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc 2008-06 005cc040  unit: RBX::Camera  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc040

struct GCamera {
    float getAxis(int axis, float out[3]);
};

extern float g_float_828b60;
extern float g_float_81e370;
extern float g_float_81e374;

extern "C" void __stdcall sub_5de190(float* v);

struct Camera {
    char pad[0x174];
    GCamera cam;
    bool method(int mode);
};

bool Camera::method(int mode)
{
    float v[3];
    float tmp[3];
    float f = g_float_828b60;
    cam.getAxis(2, tmp);
    v[0] = tmp[0] * f;
    v[1] = tmp[1] * f;
    v[2] = tmp[2] * f;
    sub_5de190(v);
    if (mode < 0) {
        if (v[0] < g_float_81e370)
            return false;
    } else {
        if (!(v[0] <= g_float_81e374))
            return false;
    }
    return true;
}
