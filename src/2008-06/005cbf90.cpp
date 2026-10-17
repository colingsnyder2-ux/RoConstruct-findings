// from server: 49% by colin
struct Camera {
    char padding[0x198];
    float x;
    float y;
    float z;
    char padding2[0x24];
    float fx;
    float fy;
    float fz;
    bool isCharacterCamera(float threshold) const;
};

extern const float g_maxDistance;
extern const float g_minDistance;
extern "C" double __cdecl sqrt(double);

bool Camera::isCharacterCamera(float threshold) const
{
    float dx = x - fx;
    float dy = y - fy;
    float dz = z - fz;
    float dist = dx * dx + dy * dy + dz * dz;
    dist = (float)sqrt((double)dist);
    if (threshold > 0.0f) {
        if (dist > g_maxDistance)
            return false;
    } else {
        if (!(dist <= g_minDistance))
            return false;
    }
    return true;
}
