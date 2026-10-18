// from server: 56% by colin
extern "C" double __cdecl acos(double);
#pragma intrinsic(acos)

extern const float upperResult;
extern const float lowerResult;
extern const float g_828b60;

struct GCamera {
    char pad[0x174];
    void getDirection(float* out, int index);
};

struct Camera {
    char pad[0x174];
    GCamera camera;
    bool isVisible(int index);
};

bool Camera::isVisible(int index)
{
    float dir[3];
    float tmp[3];
    float w = g_828b60;
    camera.getDirection(tmp, 2);
    dir[0] = tmp[0] * w;
    dir[1] = tmp[1] * w;
    dir[2] = tmp[2] * w;
    float angle = (float)acos((double)dir[0]);
    if (index < 0) {
        if (angle < lowerResult)
            return false;
    } else {
        if (!(angle >= upperResult))
            return false;
    }
    return true;
}
