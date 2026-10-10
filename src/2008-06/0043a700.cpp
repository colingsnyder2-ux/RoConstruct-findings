// from server: 78% by atomic.potato
struct XItem
{
    int __stdcall f(float *a, float *b);
};

int __stdcall XItem::f(float *a, float *b)
{
    return *b == *a;
}
