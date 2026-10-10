// from server: 74% by atomic.potato
struct RotateVJoint
{
    static void swap(float *a, float *b);
};

void RotateVJoint::swap(float *a, float *b)
{
    if (a != b)
    {
        float x = a[0];
        float y = a[1];
        float z = a[2];
        a[0] = b[0];
        a[1] = b[1];
        a[2] = b[2];
        b[0] = x;
        b[1] = y;
        b[2] = z;
    }
}
