// from server: 91% by atomic.potato
struct Milestone
{
    float value[3];
    void f(float* result, float scale);
};

void Milestone::f(float* result, float scale)
{
    result[0] = value[0] * scale;
    result[1] = value[1] * scale;
    result[2] = value[2] * scale;
}
