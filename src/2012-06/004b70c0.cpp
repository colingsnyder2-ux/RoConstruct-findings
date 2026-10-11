// from server: 88% by atomic.potato
struct CVideoStream
{
    int SetData(int *value, int a, int b, int c, int d, double e);
};

int CVideoStream::SetData(int *value, int a, int b, int c, int d, double e)
{
    value[29] = a;
    value[30] = b;
    value[31] = c;
    value[32] = d;
    *(double *)(value + 33) = e;
    return 0;
}
