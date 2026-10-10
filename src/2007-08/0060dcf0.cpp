// from server: 45% by colin
struct Ball {
    float realRadius;
    float pad[2];
    float verts[4][3];
    bool hitTest(const float* ray, float* localHitPoint, float* surfaceNormal) const;
};

bool Ball::hitTest(const float* ray, float* localHitPoint, float* surfaceNormal) const {
    float negRadius = -realRadius;
    int i = 0;
    const float* v = &verts[0][0];
    do {
        i++;
        int idx = i & 0x80000003;
        if (idx < 0) {
            idx--;
            idx |= 0xfffffffc;
            idx++;
        }
        const float* w = &verts[idx][0];
        float dx1 = localHitPoint[0] - v[0];
        float dy1 = localHitPoint[1] - v[1];
        float dz1 = localHitPoint[2] - v[2];
        float dx2 = w[0] - v[0];
        float dy2 = w[1] - v[1];
        float dz2 = w[2] - v[2];
        float dot = dx1 * dx2 + dy1 * dy2 + dz1 * dz2;
        if (dot < negRadius) {
            return false;
        }
        v += 3;
    } while (i < 4);
    return true;
}
