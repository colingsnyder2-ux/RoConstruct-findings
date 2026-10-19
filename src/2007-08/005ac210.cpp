// from server: 71% by TrollStein
struct World {
    void __cdecl sub_5AC210(float* src, float* dst);
};

void World::sub_5AC210(float* src, float* dst)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    if (dst[2] >= dst[1]) {
        float t = dst[2];
        dst[2] = dst[1];
        dst[1] = t;
    }
    if (dst[0] < dst[1]) {
        float t = dst[1];
        dst[1] = dst[0];
        dst[0] = t;
    }
    if (dst[1] < dst[2]) {
        float t = dst[2];
        dst[2] = dst[1];
        dst[1] = t;
    }
}
