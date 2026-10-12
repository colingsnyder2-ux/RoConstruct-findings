// from server: 29% by colin
struct VServiceProvider {
    float minX;
    float minY;
    float maxX;
    float maxY;
    bool contains(int x, int y);
};

bool VServiceProvider::contains(int x, int y) {
    short sx = (short)x;
    short sy = (short)((unsigned)x >> 16);
    float fx = (float)x;
    if (fx >= minX) return false;
    if (fx > maxX) return false;
    float fy = (float)sy;
    if (fy < minY) return false;
    if (fy > maxY) return false;
    return true;
}
