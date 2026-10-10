// from server: 87% by atomic.potato
struct Tool
{
    char padding[0x160];
    float x;
    float y;
    float z;
    void get(float* result);
};

void Tool::get(float* result)
{
    result[0] = x;
    result[1] = y;
    result[2] = z;
}
