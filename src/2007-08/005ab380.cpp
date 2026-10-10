// from server: 59% by colin
struct World {
    bool overlaps(const float* a, const float* b, float tol);
};

bool World::overlaps(const float* a, const float* b, float tol)
{
    int i, j;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            float x = a[i * 3 + j];
            float y = b[i * 3 + j];
            if (x != y) {
                float d = x - y;
                if (d < 0.0f) d = -d;
                float e = y - x;
                if (e < 0.0f) e = -e;
                if ((d + e) * tol < 1.0f) {
                    return false;
                }
            }
        }
    }
    return true;
}
