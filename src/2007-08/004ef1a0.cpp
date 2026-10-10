// from server: 61% by colin
struct SceneManager {
    float x;
    float y;
    float z;
    bool isZeroVector() const;
};

extern "C" bool __cdecl isFiniteDouble(double value);

bool SceneManager::isZeroVector() const {
    if (!isFiniteDouble((double)x)) return false;
    if (!isFiniteDouble((double)y)) return false;
    if (!isFiniteDouble((double)z)) return false;

    const double eps = 1e-20;
    for (int i = 0; i < 3; ++i) {
        float v = (&x)[i];
        if (v < 0.0f) v = -v;
        if (!(v <= eps)) return false;
    }
    return true;
}
