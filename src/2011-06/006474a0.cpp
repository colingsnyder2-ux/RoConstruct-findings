// from server: 96% by atomic.potato
struct Vector3
{
    float x;
    float y;
    float z;
};

struct MemoryManager
{
    void get(Vector3*, int);
};

struct CoreGuiService
{
    char pad0[200];
    Vector3 f(int);
};

Vector3 CoreGuiService::f(int value)
{
    Vector3 result;
    ((MemoryManager*)((char*)this + 200))->get(&result, 1);
    return result;
}
