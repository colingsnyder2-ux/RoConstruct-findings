// from server: 61% by tester
struct World {
    bool __cdecl checkTolerance(const float* a, const float* b, float tol);
};

bool World::checkTolerance(const float* a, const float* b, float tol)
{
    int i = 0;
    const float* pa = a;
    const float* pb = b;
    while (i < 3) {
        float va = *pa;
        float vb = *pb;
        if (va != vb) {
            float d = va - vb;
            if (d < 0.0f) d = -d;
            float e = tol + tol;
            if (d > e) {
                return false;
            }
        }
        i++;
        pa++;
        pb++;
    }
    return true;
}
