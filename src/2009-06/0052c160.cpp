// from server: 33% by atomic.potato
struct VCylinderMesh {
    float x;
    float y;
    float z;
    void normalize(float *out);
};

extern "C" float sqrtf(float);

void VCylinderMesh::normalize(float *out) {
    float len = x * x + y * y + z * z;
    float inv = 1.0f / sqrtf(len);
    out[0] = x * inv;
    out[1] = y * inv;
    out[2] = z * inv;
}
