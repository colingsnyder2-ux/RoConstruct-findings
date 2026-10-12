// from server: 85% by colin
struct Vector3ERA {
    float weight;
    float x;
    float y;
    float z;
    void pushAndGetAverage(float* result, float vx, float vy, float vz);
};

void Vector3ERA::pushAndGetAverage(float* result, float vx, float vy, float vz)
{
    x = (vx - x) * weight + x;
    y = (vy - y) * weight + y;
    z = (vz - z) * weight + z;
    result[0] = x;
    result[1] = y;
    result[2] = z;
}
