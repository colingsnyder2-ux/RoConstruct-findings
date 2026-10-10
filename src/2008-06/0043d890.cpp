// from server: 93% by atomic.potato
struct Vector3ComponentItem
{
    int value;
    int padding[75];
    int index;
    int f(int, int);
};

int Vector3ComponentItem::f(int a, int b)
{
    float x = *(float *)(b + index * 4);
    float y = *(float *)(a + index * 4);
    return x == y;
}
