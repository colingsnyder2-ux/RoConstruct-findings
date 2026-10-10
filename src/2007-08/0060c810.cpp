// from server: 84% by colin
struct Block {
    char pad[0x10];
    float* vertices;
    void projectToFace(float* ray, short* clip, int* onBorder);
};

void Block::projectToFace(float* ray, short* clip, int* onBorder)
{
    *onBorder = 0;
    float* v = vertices;
    if (v[0] >= ray[0]) {
        ray[0] = v[0];
        *onBorder += 1;
        clip[0] = 1;
    }
    if (-v[0] < ray[0]) {
        ray[0] = -v[0];
        *onBorder += 1;
        clip[0] = -1;
    }
    if (v[1] < ray[1]) {
        ray[1] = v[1];
        *onBorder += 1;
        clip[1] = 1;
    }
    if (-v[1] < ray[1]) {
        ray[1] = -v[1];
        *onBorder += 1;
        clip[1] = -1;
    }
    if (v[2] < ray[2]) {
        ray[2] = v[2];
        *onBorder += 1;
        clip[2] = 1;
    }
    if (-v[2] < ray[2]) {
        ray[2] = -v[2];
        *onBorder += 1;
        clip[2] = -1;
    }
}
